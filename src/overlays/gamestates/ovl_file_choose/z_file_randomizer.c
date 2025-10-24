#include "array_count.h"
#include "file_select.h"
#include "file_select_state.h"

#include "controller.h"
#include "gfx_setupdl.h"
#include "regs.h"
#include "rumble.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "audio.h"
#include "save.h"
#include "z_lib.h"

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

    if (this->configMode == CM_SEED_ENTRY_TO_RANDOMIZER) {
        if (this->windowRot >= 942.0f) {
            this->windowRot = 314.0f;
            this->configMode = CM_START_RANDOMIZER_OPTIONS;
        }
    } else {
        if (this->windowRot >= 314.0f) {
            this->windowRot = 314.0f;
            this->configMode = CM_START_RANDOMIZER_OPTIONS;
        }
    }
}

void FileSelect_StartRandomizerOptions(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    this->randomizerAlpha += 25;

    if (this->randomizerAlpha >= 255) {
        this->randomizerAlpha = 255;
        this->configMode = CM_RANDOMIZER_MENU;
    }
}

enum RandomizerSettingType {
    BOOLEAN,
    STRING,
};

enum RandomizerSetting {
    SETTING_SEED,
    SETTING_CHEST
};

typedef struct RandomizerSettingInfo {
    enum RandomizerSetting setting;
    enum RandomizerSettingType type;
} RandomizerSettingInfo;

static RandomizerSettingInfo sRandomizerSettings[] = {
    { SETTING_SEED, STRING }, // Seed
    { SETTING_CHEST, BOOLEAN }, // Chests
};

static int sSelectedRandomizerSetting = 0;

void FileSelect_UpdateRandomizerOptionsMenu(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;
    SramContext* sramCtx = &this->sramCtx;
    Input* input = &this->state.input[0];

    if (CHECK_BTN_ALL(input->press.button, BTN_A)) {
        if (sSelectedRandomizerSetting == SETTING_SEED) {
            SFX_PLAY_CENTERED(NA_SE_SY_FSEL_DECIDE_L);
            this->configMode = CM_RANDOMIZER_TO_SEED_ENTRY;
            this->charPage = FS_CHAR_PAGE_ENG;
            this->charIndex = 0;
            this->charBgAlpha = 0;
            if (this->newFileNameCharCount > 9) {
                this->newFileNameCharCount = 0;
            }
            this->nameEntryBoxPosX = 120;
            this->nameEntryBoxAlpha = 0;
        }
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_B)) {
        SFX_PLAY_CENTERED(NA_SE_SY_FSEL_CLOSE);
        this->configMode = CM_RANDOMIZER_TO_MAIN;
        return;
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_START)) {
        SFX_PLAY_CENTERED(NA_SE_SY_FSEL_DECIDE_L);
        Rumble_Request(300.0f, 180, 20, 100);
        gSaveContext.save.randomizer.initialized = true;
        Sram_WriteSave(sramCtx);
        this->menuMode = FS_MENU_MODE_SELECT;
        this->selectMode = SM_FADE_OUT;
        func_800F6964(0xF);
        return;
    }

    if (this->stickAdjX < -30) {
        if (sRandomizerSettings[sSelectedRandomizerSetting].type != STRING) {
            SFX_PLAY_CENTERED(NA_SE_SY_FSEL_CURSOR);
        }
        if (sRandomizerSettings[sSelectedRandomizerSetting].setting == SETTING_CHEST) {
            gSaveContext.save.randomizer.shuffleChests ^= 1;
        }
    } else if (this->stickAdjX > 30) {
        if (sRandomizerSettings[sSelectedRandomizerSetting].type != STRING) {
            SFX_PLAY_CENTERED(NA_SE_SY_FSEL_CURSOR);
        }
        if (sRandomizerSettings[sSelectedRandomizerSetting].setting == SETTING_CHEST) {
            gSaveContext.save.randomizer.shuffleChests ^= 1;
        }
    }

    if (this->stickAdjY < -30) {
        SFX_PLAY_CENTERED(NA_SE_SY_FSEL_CURSOR);
        sSelectedRandomizerSetting++;
        if (sSelectedRandomizerSetting > ARRAY_COUNT(sRandomizerSettings) - 1) {
            sSelectedRandomizerSetting = 0;
        }
    } else if (this->stickAdjY > 30) {
        SFX_PLAY_CENTERED(NA_SE_SY_FSEL_CURSOR);
        sSelectedRandomizerSetting--;
        if (sSelectedRandomizerSetting < 0) {
            sSelectedRandomizerSetting = ARRAY_COUNT(sRandomizerSettings) - 1;
        }
    }
}

void FileSelect_RotateToMainFromRandomizer(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    this->windowRot += VREG(16);

    if (this->windowRot > 500) {
        this->newFileNameCharCount = 0;
        this->seed[this->selectedFileIndex] = 0;
        Lib_MemSet(this->seedChars[this->selectedFileIndex], sizeof(this->seedChars[0]), FILENAME_SPACE);
    }

    if (this->windowRot >= 628.0f) {
        this->windowRot = 0.0f;
        this->randomizerAlpha = 0;
        this->configMode = CM_MAIN_MENU;
        this->menuMode = FS_MENU_MODE_SELECT;
        this->selectMode = SM_CONFIRM_FILE;
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

void* sRandomizerSettingButtonTextures[] = {
    gRandoSeedButtonENGTex,
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
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);

    for (int i = 0, vtx = 0; i < 2; i++, vtx += 4) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, sRandomizerMenuHeaders[i].texture, G_IM_FMT_IA,
                            G_IM_SIZ_8b, 64, 16,
                            0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        gSP1Quadrangle(POLY_OPA_DISP++, vtx, vtx + 2, vtx + 3, vtx + 1, 0);

        if (i > 0) {
            // Divider lines
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 255, 255, 255);
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

    gSPVertex(POLY_OPA_DISP++, &gRandoMenuHeadersVtx[12], 4, 0);

    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                                  ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);

    gDPLoadTextureBlock(POLY_OPA_DISP++, gRandoChestsENGTex, G_IM_FMT_IA,
                            G_IM_SIZ_8b, 48, 16,
                            0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);

    // Settings
    for (int i = 0, vtx = 0; i < ARRAY_COUNT(sRandomizerSettings); i++) {
        switch (sRandomizerSettings[i].type) {
            case BOOLEAN:
                gDPPipeSync(POLY_OPA_DISP++);
                gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
                // Settings choices
                gSPVertex(POLY_OPA_DISP++, &gRandoMenuSettingsVtx[vtx], 8, 0);
                for (int j = 0, vtxOffset = 0; j < 2; j++, vtx += 4, vtxOffset += 4) {
                    gDPPipeSync(POLY_OPA_DISP++);
                    bool currentChoice = false;
                    switch (sRandomizerSettings[i].setting) {
                        case SETTING_CHEST:
                            currentChoice = gSaveContext.save.randomizer.shuffleChests;
                            break;
                        default:
                            ASSERT(false, "No variable for randomizer setting", __FILE_NAME__, __LINE__);
                    }
                    if (j == currentChoice) {
                        if (i == sSelectedRandomizerSetting) {
                            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, cursorPrimRed, cursorPrimGreen, cursorPrimBlue,
                                                255);
                            gDPSetEnvColor(POLY_OPA_DISP++, cursorEnvRed, cursorEnvGreen, cursorEnvBlue, 255);
                        } else {
                            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
                            gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
                        }
                    } else {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 120, 120, 120, 255);
                        gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
                    }

                    gDPLoadTextureBlock(POLY_OPA_DISP++, sRandomizerToggleOptions[j].texture, G_IM_FMT_IA,
                                                G_IM_SIZ_8b, 32, 16,
                                                0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

                    gSP1Quadrangle(POLY_OPA_DISP++, vtxOffset, 2 + vtxOffset, 3 + vtxOffset, 1 + vtxOffset, 0);
                }
                break;
            case STRING:
                gDPPipeSync(POLY_OPA_DISP++);
                gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

                // draw seed button, textbox, and text
                FileSelect_DrawFileSeedInfo(thisx, gRandoMenuSettingsVtx, this->selectedFileIndex);
                vtx += 52;

                gSPVertex(POLY_OPA_DISP++, &gRandoMenuSettingsVtx[vtx], 4, 0);

                if (i == sSelectedRandomizerSetting) {
                    gDPPipeSync(POLY_OPA_DISP++);
                    gDPSetCombineLERP(POLY_OPA_DISP++, 1, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 1, 0, PRIMITIVE, 0, TEXEL0, 0,
                                      PRIMITIVE, 0);
                    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, this->highlightColor[0], this->highlightColor[1],
                                    this->highlightColor[2], this->randomizerAlpha == 255 ? this->highlightColor[3] : 0);
                    gDPLoadTextureBlock(POLY_OPA_DISP++, gFileSelBigButtonHighlightTex, G_IM_FMT_I, G_IM_SIZ_8b, 72, 24, 0,
                                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                                        G_TX_NOLOD);
                    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
                }
                vtx += 4;
                break;
            default:
        }
    }

    CLOSE_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);;
}

void FileSelect_DrawRandomizerMenu(GameState* thisx) {
    FileSelectState* this = (FileSelectState*)thisx;

    OPEN_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);

    FileSelect_DrawRandomizerSettings(&this->state);

    gDPPipeSync(POLY_OPA_DISP++);

    if (this->configMode >= CM_RANDOMIZER_MENU && this->configMode <= CM_START_RANDOMIZER_OPTIONS) {
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
    }

    CLOSE_DISPS(this->state.gfxCtx, __FILE_NAME__, __LINE__);
}
