#include "file_select.h"
#include "file_select_state.h"

#include "controller.h"
#include "gfx_setupdl.h"
#include "regs.h"
#include "rumble.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z64audio.h"
#include "z64save.h"
#include "assets/overlays/ovl_file_choose/ovl_file_choose.h"

#include "assets/textures/title_static/title_static.h"
#include "libc64/qrand.h"

void FileSelect_LoadSave(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    gSaveContext.fileNum = this->buttonIndex;
    Sram_OpenSave(&this->sramCtx);
    if (gSaveContext.save.randomizer.initialized) {
        Audio_PlaySfxGeneral(NA_SE_SY_FSEL_DECIDE_L, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                             &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);

        this->selectMode = SM_FADE_OUT;
        func_800F6964(0xF);
    } else {
        Audio_PlaySfxGeneral(NA_SE_SY_FSEL_DECIDE_S, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                             &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        this->menuMode = FS_MENU_MODE_CONFIG;
        this->configMode = CM_MAIN_TO_RANDOMIZER;
    }
}

void FileSelect_RotateToRandomizerSettings(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    this->windowRot += VREG(16);

    if (this->windowRot >= 314.0f) {
        this->windowRot = 314.0f;
        this->configMode = CM_START_RANDOMIZER_OPTIONS;
    }
}

void FileSelect_StartRandomizerOptions(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    this->nameEntryBoxAlpha += 25;

    if (this->nameEntryBoxAlpha >= 255) {
        this->nameEntryBoxAlpha = 255;
    }

    this->nameEntryBoxPosX -= 30;

    if (this->nameEntryBoxPosX <= 0) {
        this->nameEntryBoxPosX = 0;
        this->nameEntryBoxAlpha = 255;
        this->configMode = CM_RANDOMIZER_MENU;
    }
}

void FileSelect_UpdateRandomizerOptionsMenu(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;
    SramContext* sramCtx = &this->sramCtx;
    Input* input = &this->state.input[0];

    if (CHECK_BTN_ALL(input->press.button, BTN_B)) {
        Audio_PlaySfxGeneral(NA_SE_SY_FSEL_CLOSE, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                             &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        this->configMode = CM_RANDOMIZER_TO_MAIN;
        return;
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_START)) {
        Audio_PlaySfxGeneral(NA_SE_SY_FSEL_DECIDE_L, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                             &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        Rumble_Request(300.0f, 180, 20, 100);
        gSaveContext.save.randomizer.seed = Rand_Next();
        gSaveContext.save.randomizer.initialized = true;
        Sram_WriteSave(sramCtx);
        this->menuMode = FS_MENU_MODE_SELECT;
        this->selectMode = SM_FADE_OUT;
        func_800F6964(0xF);
        return;
    }

    if (this->stickAdjX < -30) {
        Audio_PlaySfxGeneral(NA_SE_SY_FSEL_CURSOR, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                             &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        gSaveContext.save.randomizer.shuffleChests ^= 1;
    } else if (this->stickAdjX > 30) {
        Audio_PlaySfxGeneral(NA_SE_SY_FSEL_CURSOR, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                             &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        gSaveContext.save.randomizer.shuffleChests ^= 1;
    }
}

void FileSelect_RotateToMainFromRandomizer(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    this->windowRot += VREG(16);

    if (this->windowRot >= 628.0f) {
        this->windowRot = 0.0f;
        this->configMode = CM_MAIN_MENU;
        this->menuMode = FS_MENU_MODE_SELECT;
        this->selectMode = SM_FADE_OUT_FILE_INFO;
    }
}

void FileSelect_SetRandomizerSettingsVtx(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    OPEN_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);

    gDPPipeSync(POLY_OPA_DISP++);

    CLOSE_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);;
}

typedef struct RandomizerMenuTextureInfo {
    void* texture;
    u16 width;
    u16 height;
} RandomizerMenuTextureInfo;

static RandomizerMenuTextureInfo sRandomizerMenuHeaders[] = {
    { gRandoSettingsENGTex, 64, 16 },
    { gRandoShuffleENGTex, 64, 16 },
};

static RandomizerMenuTextureInfo sRandomizerToggleOptions[] = {
    { gRandoNoENGTex, 32, 16 },
    { gRandoYesENGTex, 32, 16 },
};

void FileSelect_DrawRandomizerSettings(GameState* thisx) {
    static s16 cursorPrimRed = 255;
    static s16 cursorPrimGreen = 255;
    static s16 cursorPrimBlue = 255;
    static s16 cursorEnvRed = 0;
    static s16 cursorEnvGreen = 0;
    static s16 cursorEnvBlue = 0;
    static s16 cursorPulseDir = 1;
    static s16 cursorFlashTimer = 20;
    static s16 cursorPrimColors[][3] = {
        { 255, 255, 255 },
        { 0, 255, 255 },
    };
    static s16 cursorEnvColors[][3] = {
        { 0, 0, 0 },
        { 0, 150, 150 },
    };
    FileSelectState* this = (FileSelectState*)thisx;
    s16 cursorRed;
    s16 cursorGreen;
    s16 cursorBlue;

    OPEN_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);

    cursorRed = ABS(cursorPrimRed - cursorPrimColors[cursorPulseDir][0]) / cursorFlashTimer;
    cursorGreen = ABS(cursorPrimGreen - cursorPrimColors[cursorPulseDir][1]) / cursorFlashTimer;
    cursorBlue = ABS(cursorPrimBlue - cursorPrimColors[cursorPulseDir][2]) / cursorFlashTimer;

    if (cursorPrimRed >= cursorPrimColors[cursorPulseDir][0]) {
        cursorPrimRed -= cursorRed;
    } else {
        cursorPrimRed += cursorRed;
    }

    if (cursorPrimGreen >= cursorPrimColors[cursorPulseDir][1]) {
        cursorPrimGreen -= cursorGreen;
    } else {
        cursorPrimGreen += cursorGreen;
    }

    if (cursorPrimBlue >= cursorPrimColors[cursorPulseDir][2]) {
        cursorPrimBlue -= cursorBlue;
    } else {
        cursorPrimBlue += cursorBlue;
    }

    cursorRed = ABS(cursorEnvRed - cursorEnvColors[cursorPulseDir][0]) / cursorFlashTimer;
    cursorGreen = ABS(cursorEnvGreen - cursorEnvColors[cursorPulseDir][1]) / cursorFlashTimer;
    cursorBlue = ABS(cursorEnvBlue - cursorEnvColors[cursorPulseDir][2]) / cursorFlashTimer;

    if (cursorEnvRed >= cursorEnvColors[cursorPulseDir][0]) {
        cursorEnvRed -= cursorRed;
    } else {
        cursorEnvRed += cursorRed;
    }

    if (cursorEnvGreen >= cursorEnvColors[cursorPulseDir][1]) {
        cursorEnvGreen -= cursorGreen;
    } else {
        cursorEnvGreen += cursorGreen;
    }

    if (cursorEnvBlue >= cursorEnvColors[cursorPulseDir][2]) {
        cursorEnvBlue -= cursorBlue;
    } else {
        cursorEnvBlue += cursorBlue;
    }

    if (--cursorFlashTimer == 0) {
        cursorPrimRed = cursorPrimColors[cursorPulseDir][0];
        cursorPrimGreen = cursorPrimColors[cursorPulseDir][1];
        cursorPrimBlue = cursorPrimColors[cursorPulseDir][2];

        cursorEnvRed = cursorEnvColors[cursorPulseDir][0];
        cursorEnvGreen = cursorEnvColors[cursorPulseDir][1];
        cursorEnvBlue = cursorEnvColors[cursorPulseDir][2];

        cursorFlashTimer = 20;

        if (++cursorPulseDir > 1) {
            cursorPulseDir = 0;
        }
    }

    // Headers
    gSPVertex(POLY_OPA_DISP++, gRandoMenuHeadersVtx, 12, 0);

    gDPPipeSync(POLY_OPA_DISP++);

    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->titleAlpha[1]);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);

    for (int i = 0, vtx = 0; i < 2; i++, vtx += 4) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, sRandomizerMenuHeaders[i].texture, G_IM_FMT_IA,
                            G_IM_SIZ_8b, 64, 16,
                            0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSP1Quadrangle(POLY_OPA_DISP++, vtx, vtx + 2, vtx + 3, vtx + 1, 0);

        if (i > 0) {
            // Divider lines
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 255, 255, this->titleAlpha[1]);
            gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 0);

            gDPLoadTextureBlock_4b(POLY_OPA_DISP++, gFileSelOptionsDividerTex, G_IM_FMT_IA, 256, 2, 0,
                                   G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                                   G_TX_NOLOD);

            vtx += 4;

            Matrix_Push();
            Matrix_Translate(0.0f, 0.1f, 0.0f, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, this->state.gfxCtx, "../z_file_nameset_PAL.c", 1009);
            gSP1Quadrangle(POLY_OPA_DISP++, vtx, vtx + 2, vtx + 3, vtx + 1, 0);
            Matrix_Pop();
        }
    }

    // Settings
    gSPVertex(POLY_OPA_DISP++, gRandoMenuSettingsVtx, 12, 0);

    gDPPipeSync(POLY_OPA_DISP++);

    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->titleAlpha[1]);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);

    gDPLoadTextureBlock(POLY_OPA_DISP++, gRandoChestsENGTex, G_IM_FMT_IA,
                            G_IM_SIZ_8b, 64, 16,
                            0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);

    // Settings choices
    for (int i = 0, vtx = 4; i < 2; i++, vtx += 4) {
        gDPPipeSync(POLY_OPA_DISP++);
        if (i == gSaveContext.save.randomizer.shuffleChests) {
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, cursorPrimRed, cursorPrimGreen, cursorPrimBlue,
                                this->titleAlpha[1]);
            gDPSetEnvColor(POLY_OPA_DISP++, cursorEnvRed, cursorEnvGreen, cursorEnvBlue, 255);
        } else {
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, this->titleAlpha[1]);
            gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
        }

        gDPLoadTextureBlock(POLY_OPA_DISP++, sRandomizerToggleOptions[i].texture, G_IM_FMT_IA,
                                    G_IM_SIZ_8b, 32, 16,
                                    0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        gSP1Quadrangle(POLY_OPA_DISP++, vtx, vtx + 2, vtx + 3, vtx + 1, 0);
    }

    CLOSE_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);;
}

void FileSelect_DrawRandomizerMenu(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    OPEN_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, this->windowColor[0], this->windowColor[1], this->windowColor[2],
                    this->windowAlpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 0);

    Matrix_Translate(0.0f, 0.0f, -93.6f, MTXMODE_NEW);
    Matrix_Scale(0.78f, 0.78f, 0.78f, MTXMODE_APPLY);
    Matrix_RotateX((this->windowRot - 314.0f) / 100.0f, MTXMODE_APPLY);

    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, this->state.gfxCtx, "../z_file_choose.c", 2337);

    gSPVertex(POLY_OPA_DISP++, &this->windowVtx[0], 32, 0);
    gSPDisplayList(POLY_OPA_DISP++, gFileSelWindow1DL);

    gSPVertex(POLY_OPA_DISP++, &this->windowVtx[32], 32, 0);
    gSPDisplayList(POLY_OPA_DISP++, gFileSelWindow2DL);

    gSPVertex(POLY_OPA_DISP++, &this->windowVtx[64], 16, 0);
    gSPDisplayList(POLY_OPA_DISP++, gFileSelWindow3DL);

    gDPPipeSync(POLY_OPA_DISP++);

    FileSelect_DrawRandomizerSettings(&this->state);

    gDPPipeSync(POLY_OPA_DISP++);

    Gfx_SetupDL_39Opa(this->state.gfxCtx);

    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                      PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 100, 255, 255, this->controlsAlpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 0);
    gDPLoadTextureBlock(POLY_OPA_DISP++, gRandoControlsENGTex, G_IM_FMT_IA, G_IM_SIZ_8b, 144, 16,
                        0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                        G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle(POLY_OPA_DISP++, 90 << 2, 204 << 2, 234 << 2, 220 << 2, G_TX_RENDERTILE, 0, 0, 1 << 10,
                        1 << 10);

    CLOSE_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);
}
