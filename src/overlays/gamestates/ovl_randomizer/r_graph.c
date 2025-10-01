#include "alloca.h"
#include "fault.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "printf.h"
#if DEBUG_FEATURES
#include "map_select_state.h"
#endif
#include "randomizer.h"
#include "randomizer_state.h"
#include "seqcmd.h"
#include "sfx.h"
#include "stack.h"
#include "stackcheck.h"
#include "z64game.h"
#include "z64play.h"
#include "z64save.h"
#include "z64thread.h"
#include "libu64/gfxprint.h"

OSThread sRandomizerThread;
STACK(sRandomizerStack, 0x1800);
StackEntry sRandomizerStackInfo;

int sDelayTimer = 0;

void Randomizer_Finish(GameState *gameState) {
    RandomizerState* this = (RandomizerState*)gameState;

    sDelayTimer--;

    if (sDelayTimer <= 0) {
#if DEBUG_FEATURES
        if (gSaveContext.fileNum == 0) {
            SET_NEXT_GAMESTATE(&this->state, MapSelect_Init, MapSelectState);
        } else
#endif
        {
            SET_NEXT_GAMESTATE(&this->state, Play_Init, PlayState);
        }

        this->state.running = false;

        if (this->threadStarted) {
            osDestroyThread(&sRandomizerThread);
        }
    }
}

int sCounter = 0;

void Randomizer_Draw(GameState *gameState) {
    RandomizerState* this = (RandomizerState*)gameState;
    GraphicsContext* gfxCtx = this->state.gfxCtx;

    sCounter++;

    OPEN_DISPS(gfxCtx, __FILE_NAME__, __LINE__);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);
    Gfx_SetupDL_28Opa(gfxCtx);

    GfxPrint* printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);

    GfxPrint_SetPos(printer, 12, 15);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);

    switch ((sCounter / 20) % 3) {
        case 0:
            GfxPrint_Printf(printer, "Generating .");
            break;
        case 1:
            GfxPrint_Printf(printer, "Generating . .");
            break;
        case 2:
            GfxPrint_Printf(printer, "Generating . . .");
            break;
        default:
            GfxPrint_Printf(printer, "Generating . . ?");
    }

    if (sCounter % 40 == 0) {
        Audio_PlaySfxGeneral(NA_SE_VO_KZ_MOVE, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                 &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
    }

    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx, __FILE_NAME__, __LINE__);
}

void Randomizer_DrawError(GameState *gameState) {
    RandomizerState* this = (RandomizerState*)gameState;
    GraphicsContext* gfxCtx = this->state.gfxCtx;

    OPEN_DISPS(gfxCtx, __FILE_NAME__, __LINE__);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);
    Gfx_SetupDL_28Opa(gfxCtx);

    GfxPrint* printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);

    GfxPrint_SetPos(printer, 12, 15);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);
    GfxPrint_Printf(printer, "Failed to generate");

    GfxPrint_SetPos(printer, 1, 16);
    GfxPrint_Printf(printer, "Reset, erase file to generate new seed");

    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx, __FILE_NAME__, __LINE__);
}

void Randomizer_Main(GameState *gameState) {
    RandomizerState* this = (RandomizerState*)gameState;
    // If generation thread fails, graph thread will keep looping which resets the frame buffer. This causes flickering
    // of the fault display. It may also overwrite the fault display preventing it from ever displaying. To prevent
    // these, check if there is a global fault message active and lock the graph thread in an infinite loop. The pad and
    // fault threads will still be running so the debug screen can still be paged through.
    while (gFaultMsgId != 0) {}

    switch (this->mode) {
        case RM_FINISHING: {
            Sram_WriteSave(&this->sramCtx);
            sDelayTimer = 20;
            this->mode = RM_FINISHED;
        } FALLTHROUGH;
        case RM_FINISHED: {
            Randomizer_Finish(&this->state);
        } break;
        case RM_FINISHED_ERROR:
            Randomizer_DrawError(&this->state);
            break;
        default:
            Randomizer_Draw(&this->state);
    }
}

void Randomizer_Destroy(GameState *gameState) {
    RandomizerState* this = (RandomizerState*)gameState;
}

void Randomizer_Init(GameState *gameState) {
    PRINTF(VT_COL(BLUE, WHITE) "Randomizer overlay loaded" VT_RST "\n");
    RandomizerState* this = (RandomizerState*)gameState;

    this->state.main = Randomizer_Main;
    this->state.destroy = Randomizer_Destroy;
    View_Init(&this->view, this->state.gfxCtx);

    this->threadStarted = false;

    if (gSaveContext.save.randomizer.initialized && !gSaveContext.save.randomizer.shuffleChests) {
        PRINTF("No randomization selected\n");
        Randomizer_Finish(&this->state);
        return;
    }

    if (gSaveContext.save.randomizer.generated) {
        PRINTF("Already randomized\n");
        Randomizer_Finish(&this->state);
        return;
    }

    Sram_Alloc(&this->state, &this->sramCtx);

    /* Remove locked door to Boss Key Chest in Fire Temple */
    gSaveContext.save.info.sceneFlags[SCENE_FIRE_TEMPLE].swch |= (1 << 0x17);

    osCreateThread(&sRandomizerThread, THREAD_ID_RANDOMIZER, Randomizer_ThreadEntry, &this->state, STACK_TOP(sRandomizerStack), THREAD_PRI_MAIN_INIT);
    osStartThread(&sRandomizerThread);
    this->threadStarted = true;
    SEQCMD_RESET_AUDIO_HEAP(0, 10);
}