#include "spot16_scene.h"
#include "assets/scenes/overworld/spot16/spot16_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "camera.h"
#include "cutscene_commands.h"
#include "object.h"
#include "ocarina.h"
#include "player.h"
#include "segment_symbols.h"
#include "sequence.h"
#include "skybox.h"
#include "stdbool.h"
#include "ultra64.h"

SceneCmd spot16_scene[] = {
#include "assets/scenes/overworld/spot16/spot16_scene.inc.c"
};

SceneCmd* spot16_scene_02000068_AltHeaders[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders.inc.c"
};

ActorEntry spot16_scene_02000088_PlayerEntryList[LENGTH_spot16_scene_02000088_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000088_PlayerEntryList.inc.c"
};

RomFile spot16_scene_020000E8_RoomList[LENGTH_spot16_scene_020000E8_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_020000E8_RoomList.inc.c"
};

Spawn spot16_scene_020000F0_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_020000F0_SpawnList.inc.c"
};

s16 spot16_scene_020000FC_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_020000FC_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000108_EnvLightSettingsList[LENGTH_spot16_scene_02000108_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000108_EnvLightSettingsList.inc.c"
};

Vec3s spot16_scenePathList_000254_02000210_Points[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_000254_02000210_Points.inc.c"
};

Vec3s spot16_scenePathList_000254_02000248_Points[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_000254_02000248_Points.inc.c"
};

Path spot16_scenePathList_000254[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_000254.inc.c"
};

BgCamInfo spot16_scene_02003D10_BgCamList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02003D10_BgCamList.inc.c"
};

SurfaceType spot16_scene_02003D10_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02003D10_SurfaceTypes.inc.c"
};

CollisionPoly spot16_scene_02003D10_PolyList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02003D10_PolyList.inc.c"
};

Vec3s spot16_scene_02003D10_VtxList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02003D10_VtxList.inc.c"
};

CollisionHeader spot16_scene_02003D10_Col = {
#include "assets/scenes/overworld/spot16/spot16_scene_02003D10_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gDMTKokiriEmeraldPart6Cs[] = {
#include "assets/scenes/overworld/spot16/pal/gDMTKokiriEmeraldPart6Cs.csdata.inc.c"
};
#else
CutsceneData gDMTKokiriEmeraldPart6Cs[] = {
#include "assets/scenes/overworld/spot16/ntsc/gDMTKokiriEmeraldPart6Cs.csdata.inc.c"
};
#endif

CutsceneData gDMTGoronRubyCs[] = {
#include "assets/scenes/overworld/spot16/gDMTGoronRubyCs.csdata.inc.c"
};

CutsceneData gDMTUnusedCs[] = {
#include "assets/scenes/overworld/spot16/gDMTUnusedCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gDMTCreditsShowGoronCityCs[] = {
#include "assets/scenes/overworld/spot16/pal/gDMTCreditsShowGoronCityCs.csdata.inc.c"
};

CutsceneData gDMTCreditsSixSagesCs[] = {
#include "assets/scenes/overworld/spot16/pal/gDMTCreditsSixSagesCs.csdata.inc.c"
};
#else
CutsceneData gDMTCreditsShowGoronCityCs[] = {
#include "assets/scenes/overworld/spot16/ntsc/gDMTCreditsShowGoronCityCs.csdata.inc.c"
};

CutsceneData gDMTCreditsSixSagesCs[] = {
#include "assets/scenes/overworld/spot16/ntsc/gDMTCreditsSixSagesCs.csdata.inc.c"
};
#endif

SceneCmd spot16_scene_02000068_AltHeaders_020075D0_Cmds[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020075D0_Cmds.inc.c"
};

ActorEntry spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007630_PlayerEntryList[LENGTH_spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007630_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007630_PlayerEntryList.inc.c"
};

RomFile spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007690_RoomList[LENGTH_spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007690_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007690_RoomList.inc.c"
};

Spawn spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007698_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020075D0_Cmds_02007698_SpawnList.inc.c"
};

s16 spot16_scene_02000068_AltHeaders_020075D0_Cmds_020076A4_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020075D0_Cmds_020076A4_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000068_AltHeaders_020075D0_Cmds_020076B0_EnvLightSettingsList[LENGTH_spot16_scene_02000068_AltHeaders_020075D0_Cmds_020076B0_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020075D0_Cmds_020076B0_EnvLightSettingsList.inc.c"
};

Vec3s spot16_scenePathList_007884_020077B8_Points[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_007884_020077B8_Points.inc.c"
};

Vec3s spot16_scenePathList_007884_02007800_Points[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_007884_02007800_Points.inc.c"
};

Vec3s spot16_scenePathList_007884_02007854_Points[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_007884_02007854_Points.inc.c"
};

Path spot16_scenePathList_007884[] = {
#include "assets/scenes/overworld/spot16/spot16_scenePathList_007884.inc.c"
};

SceneCmd spot16_scene_unused[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused.inc.c"
};

ActorEntry spot16_scene_unused_02007930_PlayerEntryList[LENGTH_spot16_scene_unused_02007930_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused_02007930_PlayerEntryList.inc.c"
};

ActorEntry spot16_scene_unused_02007970_ActorEntryList[LENGTH_spot16_scene_unused_02007970_ActorEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused_02007970_ActorEntryList.inc.c"
};

RomFile spot16_scene_unused_02007980_RoomList[LENGTH_spot16_scene_unused_02007980_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused_02007980_RoomList.inc.c"
};

Spawn spot16_scene_unused_02007988_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused_02007988_SpawnList.inc.c"
};

s16 spot16_scene_unused_02007990_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused_02007990_ExitList.inc.c"
};

EnvLightSettings spot16_scene_unused_02007998_EnvLightSettingsList[LENGTH_spot16_scene_unused_02007998_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_unused_02007998_EnvLightSettingsList.inc.c"
};

SceneCmd spot16_scene_02000068_AltHeaders_020079F0_Cmds[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020079F0_Cmds.inc.c"
};

ActorEntry spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A50_PlayerEntryList[LENGTH_spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A50_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A50_PlayerEntryList.inc.c"
};

RomFile spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A60_RoomList[LENGTH_spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A60_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A60_RoomList.inc.c"
};

Spawn spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A68_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A68_SpawnList.inc.c"
};

s16 spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A6C_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A6C_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A74_EnvLightSettingsList[LENGTH_spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A74_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_020079F0_Cmds_02007A74_EnvLightSettingsList.inc.c"
};

SceneCmd spot16_scene_02000068_AltHeaders_02007AD0_Cmds[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007AD0_Cmds.inc.c"
};

ActorEntry spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B30_PlayerEntryList[LENGTH_spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B30_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B30_PlayerEntryList.inc.c"
};

RomFile spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B40_RoomList[LENGTH_spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B40_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B40_RoomList.inc.c"
};

Spawn spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B48_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B48_SpawnList.inc.c"
};

s16 spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B4C_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B4C_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B54_EnvLightSettingsList[LENGTH_spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B54_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007AD0_Cmds_02007B54_EnvLightSettingsList.inc.c"
};

SceneCmd spot16_scene_02000068_AltHeaders_02007BF0_Cmds[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007BF0_Cmds.inc.c"
};

ActorEntry spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C50_PlayerEntryList[LENGTH_spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C50_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C50_PlayerEntryList.inc.c"
};

RomFile spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C60_RoomList[LENGTH_spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C60_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C60_RoomList.inc.c"
};

Spawn spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C68_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C68_SpawnList.inc.c"
};

s16 spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C6C_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C6C_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C74_EnvLightSettingsList[LENGTH_spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C74_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007BF0_Cmds_02007C74_EnvLightSettingsList.inc.c"
};

SceneCmd spot16_scene_02000068_AltHeaders_02007D10_Cmds[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007D10_Cmds.inc.c"
};

ActorEntry spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D70_PlayerEntryList[LENGTH_spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D70_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D70_PlayerEntryList.inc.c"
};

RomFile spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D80_RoomList[LENGTH_spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D80_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D80_RoomList.inc.c"
};

Spawn spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D88_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D88_SpawnList.inc.c"
};

s16 spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D8C_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D8C_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D94_EnvLightSettingsList[LENGTH_spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D94_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007D10_Cmds_02007D94_EnvLightSettingsList.inc.c"
};

SceneCmd spot16_scene_02000068_AltHeaders_02007DB0_Cmds[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007DB0_Cmds.inc.c"
};

ActorEntry spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E10_PlayerEntryList[LENGTH_spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E10_PlayerEntryList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E10_PlayerEntryList.inc.c"
};

RomFile spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E20_RoomList[LENGTH_spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E20_RoomList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E20_RoomList.inc.c"
};

Spawn spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E28_SpawnList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E28_SpawnList.inc.c"
};

s16 spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E2C_ExitList[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E2C_ExitList.inc.c"
};

EnvLightSettings spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E34_EnvLightSettingsList[LENGTH_spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E34_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot16/spot16_scene_02000068_AltHeaders_02007DB0_Cmds_02007E34_EnvLightSettingsList.inc.c"
};

CutsceneData gDMTIntroCs[] = {
#include "assets/scenes/overworld/spot16/gDMTIntroCs.csdata.inc.c"
};

u64 spot16_scene_000081A0_TLUT[] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000D7C8_CITex.tlut.rgba16.inc.c"
};

u64 spot16_scene_000081C8_Tex[TEX_LEN(u64, spot16_scene_000081C8_Tex_WIDTH, spot16_scene_000081C8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000081C8_Tex.i8.inc.c"
};

u64 spot16_scene_000091C8_Tex[TEX_LEN(u64, spot16_scene_000091C8_Tex_WIDTH, spot16_scene_000091C8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000091C8_Tex.i8.inc.c"
};

u64 spot16_scene_000099C8_Tex[TEX_LEN(u64, spot16_scene_000099C8_Tex_WIDTH, spot16_scene_000099C8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000099C8_Tex.i8.inc.c"
};

u64 spot16_scene_00009DC8_Tex[TEX_LEN(u64, spot16_scene_00009DC8_Tex_WIDTH, spot16_scene_00009DC8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00009DC8_Tex.i8.inc.c"
};

u64 spot16_scene_0000ADC8_Tex[TEX_LEN(u64, spot16_scene_0000ADC8_Tex_WIDTH, spot16_scene_0000ADC8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000ADC8_Tex.i8.inc.c"
};

u64 spot16_scene_0000BDC8_Tex[TEX_LEN(u64, spot16_scene_0000BDC8_Tex_WIDTH, spot16_scene_0000BDC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000BDC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_0000CDC8_Tex[TEX_LEN(u64, spot16_scene_0000CDC8_Tex_WIDTH, spot16_scene_0000CDC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000CDC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_0000CFC8_Tex[TEX_LEN(u64, spot16_scene_0000CFC8_Tex_WIDTH, spot16_scene_0000CFC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000CFC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_0000D3C8_Tex[TEX_LEN(u64, spot16_scene_0000D3C8_Tex_WIDTH, spot16_scene_0000D3C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000D3C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_0000D7C8_CITex[TEX_LEN(u64, spot16_scene_0000D7C8_CITex_WIDTH, spot16_scene_0000D7C8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000D7C8_CITex.ci4.inc.c"
};

u64 spot16_scene_0000DFC8_Tex[TEX_LEN(u64, spot16_scene_0000DFC8_Tex_WIDTH, spot16_scene_0000DFC8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000DFC8_Tex.i4.inc.c"
};

u64 spot16_scene_0000E1C8_Tex[TEX_LEN(u64, spot16_scene_0000E1C8_Tex_WIDTH, spot16_scene_0000E1C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000E1C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_0000F1C8_Tex[TEX_LEN(u64, spot16_scene_0000F1C8_Tex_WIDTH, spot16_scene_0000F1C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0000F1C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000101C8_Tex[TEX_LEN(u64, spot16_scene_000101C8_Tex_WIDTH, spot16_scene_000101C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000101C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000111C8_Tex[TEX_LEN(u64, spot16_scene_000111C8_Tex_WIDTH, spot16_scene_000111C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000111C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000115C8_Tex[TEX_LEN(u64, spot16_scene_000115C8_Tex_WIDTH, spot16_scene_000115C8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000115C8_Tex.i4.inc.c"
};

u64 spot16_scene_000117C8_Tex[TEX_LEN(u64, spot16_scene_000117C8_Tex_WIDTH, spot16_scene_000117C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000117C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000127C8_Tex[TEX_LEN(u64, spot16_scene_000127C8_Tex_WIDTH, spot16_scene_000127C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000127C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000137C8_Tex[TEX_LEN(u64, spot16_scene_000137C8_Tex_WIDTH, spot16_scene_000137C8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000137C8_Tex.i4.inc.c"
};

u64 spot16_scene_000139C8_Tex[TEX_LEN(u64, spot16_scene_000139C8_Tex_WIDTH, spot16_scene_000139C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000139C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_00013DC8_Tex[TEX_LEN(u64, spot16_scene_00013DC8_Tex_WIDTH, spot16_scene_00013DC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00013DC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_00014DC8_Tex[TEX_LEN(u64, spot16_scene_00014DC8_Tex_WIDTH, spot16_scene_00014DC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00014DC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000155C8_Tex[TEX_LEN(u64, spot16_scene_000155C8_Tex_WIDTH, spot16_scene_000155C8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000155C8_Tex.i4.inc.c"
};

u64 spot16_scene_00015DC8_Tex[TEX_LEN(u64, spot16_scene_00015DC8_Tex_WIDTH, spot16_scene_00015DC8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00015DC8_Tex.ia8.inc.c"
};

u64 spot16_scene_00015EC8_Tex[TEX_LEN(u64, spot16_scene_00015EC8_Tex_WIDTH, spot16_scene_00015EC8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00015EC8_Tex.ia8.inc.c"
};

u64 spot16_scene_00016EC8_Tex[TEX_LEN(u64, spot16_scene_00016EC8_Tex_WIDTH, spot16_scene_00016EC8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00016EC8_Tex.i4.inc.c"
};

u64 spot16_scene_00017EC8_Tex[TEX_LEN(u64, spot16_scene_00017EC8_Tex_WIDTH, spot16_scene_00017EC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00017EC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000186C8_Tex[TEX_LEN(u64, spot16_scene_000186C8_Tex_WIDTH, spot16_scene_000186C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000186C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_00018EC8_Tex[TEX_LEN(u64, spot16_scene_00018EC8_Tex_WIDTH, spot16_scene_00018EC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00018EC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_000196C8_Tex[TEX_LEN(u64, spot16_scene_000196C8_Tex_WIDTH, spot16_scene_000196C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_000196C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_00019EC8_Tex[TEX_LEN(u64, spot16_scene_00019EC8_Tex_WIDTH, spot16_scene_00019EC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_00019EC8_Tex.rgba16.inc.c"
};

u64 spot16_scene_Tex_01AE98[TEX_LEN(u64, spot16_scene_Tex_01AE98_WIDTH, spot16_scene_Tex_01AE98_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_Tex_01AE98.i4.inc.c"
};

u64 spot16_scene_0001B6C8_Tex[TEX_LEN(u64, spot16_scene_0001B6C8_Tex_WIDTH, spot16_scene_0001B6C8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0001B6C8_Tex.ia8.inc.c"
};

u64 spot16_scene_0001C6C8_Tex[TEX_LEN(u64, spot16_scene_0001C6C8_Tex_WIDTH, spot16_scene_0001C6C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0001C6C8_Tex.rgba16.inc.c"
};

u64 spot16_scene_0001D6C8_Tex[TEX_LEN(u64, spot16_scene_0001D6C8_Tex_WIDTH, spot16_scene_0001D6C8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0001D6C8_Tex.i8.inc.c"
};

u64 spot16_scene_0001DEC8_Tex[TEX_LEN(u64, spot16_scene_0001DEC8_Tex_WIDTH, spot16_scene_0001DEC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot16/spot16_scene_0001DEC8_Tex.rgba16.inc.c"
};

CutsceneData gDMTOwlCs[] = {
#include "assets/scenes/overworld/spot16/gDMTOwlCs.csdata.inc.c"
};
