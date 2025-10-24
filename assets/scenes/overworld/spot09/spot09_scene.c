#include "spot09_scene.h"
#include "assets/scenes/overworld/spot09/spot09_room_0.h"

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

SceneCmd spot09_scene[] = {
#include "assets/scenes/overworld/spot09/spot09_scene.inc.c"
};

SceneCmd* spot09_scene_02000068_AltHeaders[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders.inc.c"
};

ActorEntry spot09_scene_02000080_PlayerEntryList[LENGTH_spot09_scene_02000080_PlayerEntryList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000080_PlayerEntryList.inc.c"
};

RomFile spot09_scene_020000D0_RoomList[LENGTH_spot09_scene_020000D0_RoomList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_020000D0_RoomList.inc.c"
};

Spawn spot09_scene_020000D8_SpawnList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_020000D8_SpawnList.inc.c"
};

s16 spot09_scene_020000E4_ExitList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_020000E4_ExitList.inc.c"
};

EnvLightSettings spot09_scene_020000F0_EnvLightSettingsList[LENGTH_spot09_scene_020000F0_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_020000F0_EnvLightSettingsList.inc.c"
};

Vec3s spot09_scene_02000224_PathList_020001F8_Points[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000224_PathList_020001F8_Points.inc.c"
};

Path spot09_scene_02000224_PathList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000224_PathList.inc.c"
};

CutsceneData gGerudoValleyBridgeJumpFortressToFieldCs[] = {
#include "assets/scenes/overworld/spot09/gGerudoValleyBridgeJumpFortressToFieldCs.csdata.inc.c"
};

BgCamInfo spot09_scene_02002128_BgCamList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02002128_BgCamList.inc.c"
};

u8 spot09_scene_unaccounted_000418[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_unaccounted_000418.bin.inc.c"
};

SurfaceType spot09_scene_02002128_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02002128_SurfaceTypes.inc.c"
};

CollisionPoly spot09_scene_02002128_PolyList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02002128_PolyList.inc.c"
};

Vec3s spot09_scene_02002128_VtxList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02002128_VtxList.inc.c"
};

WaterBox spot09_scene_02002128_WaterBoxes[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02002128_WaterBoxes.inc.c"
};

CollisionHeader spot09_scene_02002128_Col = {
#include "assets/scenes/overworld/spot09/spot09_scene_02002128_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gGerudoValleyKokiriEmeraldPart5Cs[] = {
#include "assets/scenes/overworld/spot09/pal/gGerudoValleyKokiriEmeraldPart5Cs.csdata.inc.c"
};

CutsceneData gGerudoValleyKokiriEmeraldPart4Cs[] = {
#include "assets/scenes/overworld/spot09/pal/gGerudoValleyKokiriEmeraldPart4Cs.csdata.inc.c"
};

CutsceneData gGerudoValleyCreditsCs[] = {
#include "assets/scenes/overworld/spot09/pal/gGerudoValleyCreditsCs.csdata.inc.c"
};
#else
CutsceneData gGerudoValleyKokiriEmeraldPart5Cs[] = {
#include "assets/scenes/overworld/spot09/ntsc/gGerudoValleyKokiriEmeraldPart5Cs.csdata.inc.c"
};

CutsceneData gGerudoValleyKokiriEmeraldPart4Cs[] = {
#include "assets/scenes/overworld/spot09/ntsc/gGerudoValleyKokiriEmeraldPart4Cs.csdata.inc.c"
};

CutsceneData gGerudoValleyCreditsCs[] = {
#include "assets/scenes/overworld/spot09/ntsc/gGerudoValleyCreditsCs.csdata.inc.c"
};
#endif

CutsceneData gGerudoValleyBridgeJumpFieldFortressCs[] = {
#include "assets/scenes/overworld/spot09/gGerudoValleyBridgeJumpFieldFortressCs.csdata.inc.c"
};

SceneCmd spot09_scene_02000068_AltHeaders_02002CB0_Cmds[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002CB0_Cmds.inc.c"
};

ActorEntry spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D10_PlayerEntryList[LENGTH_spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D10_PlayerEntryList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D10_PlayerEntryList.inc.c"
};

RomFile spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D60_RoomList[LENGTH_spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D60_RoomList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D60_RoomList.inc.c"
};

Spawn spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D68_SpawnList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D68_SpawnList.inc.c"
};

s16 spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D74_ExitList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D74_ExitList.inc.c"
};

EnvLightSettings spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D80_EnvLightSettingsList[LENGTH_spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D80_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002CB0_Cmds_02002D80_EnvLightSettingsList.inc.c"
};

Vec3s spot09_scenePathList_002F58_02002E88_Points[] = {
#include "assets/scenes/overworld/spot09/spot09_scenePathList_002F58_02002E88_Points.inc.c"
};

Vec3s spot09_scenePathList_002F58_02002EB4_Points[] = {
#include "assets/scenes/overworld/spot09/spot09_scenePathList_002F58_02002EB4_Points.inc.c"
};

Vec3s spot09_scenePathList_002F58_02002EFC_Points[] = {
#include "assets/scenes/overworld/spot09/spot09_scenePathList_002F58_02002EFC_Points.inc.c"
};

Path spot09_scenePathList_002F58[] = {
#include "assets/scenes/overworld/spot09/spot09_scenePathList_002F58.inc.c"
};

SceneCmd spot09_scene_02000068_AltHeaders_02002FA0_Cmds[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds.inc.c"
};

ActorEntry spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003008_PlayerEntryList[LENGTH_spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003008_PlayerEntryList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003008_PlayerEntryList.inc.c"
};

RomFile spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003018_RoomList[LENGTH_spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003018_RoomList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003018_RoomList.inc.c"
};

Spawn spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003020_SpawnList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003020_SpawnList.inc.c"
};

s16 spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003024_ExitList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003024_ExitList.inc.c"
};

EnvLightSettings spot09_scene_02000068_AltHeaders_02002FA0_Cmds_0200302C_EnvLightSettingsList[LENGTH_spot09_scene_02000068_AltHeaders_02002FA0_Cmds_0200302C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_0200302C_EnvLightSettingsList.inc.c"
};

Vec3s spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003088_PathList_02003070_Points[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003088_PathList_02003070_Points.inc.c"
};

Path spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003088_PathList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02002FA0_Cmds_02003088_PathList.inc.c"
};

SceneCmd spot09_scene_02000068_AltHeaders_02003090_Cmds[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds.inc.c"
};

ActorEntry spot09_scene_02000068_AltHeaders_02003090_Cmds_020030F8_PlayerEntryList[LENGTH_spot09_scene_02000068_AltHeaders_02003090_Cmds_020030F8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_020030F8_PlayerEntryList.inc.c"
};

RomFile spot09_scene_02000068_AltHeaders_02003090_Cmds_02003108_RoomList[LENGTH_spot09_scene_02000068_AltHeaders_02003090_Cmds_02003108_RoomList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_02003108_RoomList.inc.c"
};

Spawn spot09_scene_02000068_AltHeaders_02003090_Cmds_02003110_SpawnList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_02003110_SpawnList.inc.c"
};

s16 spot09_scene_02000068_AltHeaders_02003090_Cmds_02003114_ExitList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_02003114_ExitList.inc.c"
};

EnvLightSettings spot09_scene_02000068_AltHeaders_02003090_Cmds_0200311C_EnvLightSettingsList[LENGTH_spot09_scene_02000068_AltHeaders_02003090_Cmds_0200311C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_0200311C_EnvLightSettingsList.inc.c"
};

Vec3s spot09_scene_02000068_AltHeaders_02003090_Cmds_02003160_PathList_02003148_Points[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_02003160_PathList_02003148_Points.inc.c"
};

Path spot09_scene_02000068_AltHeaders_02003090_Cmds_02003160_PathList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003090_Cmds_02003160_PathList.inc.c"
};

SceneCmd spot09_scene_02000068_AltHeaders_02003170_Cmds[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003170_Cmds.inc.c"
};

ActorEntry spot09_scene_02000068_AltHeaders_02003170_Cmds_020031D0_PlayerEntryList[LENGTH_spot09_scene_02000068_AltHeaders_02003170_Cmds_020031D0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003170_Cmds_020031D0_PlayerEntryList.inc.c"
};

RomFile spot09_scene_02000068_AltHeaders_02003170_Cmds_020031E0_RoomList[LENGTH_spot09_scene_02000068_AltHeaders_02003170_Cmds_020031E0_RoomList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003170_Cmds_020031E0_RoomList.inc.c"
};

Spawn spot09_scene_02000068_AltHeaders_02003170_Cmds_020031E8_SpawnList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003170_Cmds_020031E8_SpawnList.inc.c"
};

s16 spot09_scene_02000068_AltHeaders_02003170_Cmds_020031EC_ExitList[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003170_Cmds_020031EC_ExitList.inc.c"
};

EnvLightSettings spot09_scene_02000068_AltHeaders_02003170_Cmds_020031F8_EnvLightSettingsList[LENGTH_spot09_scene_02000068_AltHeaders_02003170_Cmds_020031F8_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot09/spot09_scene_02000068_AltHeaders_02003170_Cmds_020031F8_EnvLightSettingsList.inc.c"
};

CutsceneData gGerudoValleyIntroCs[] = {
#include "assets/scenes/overworld/spot09/gGerudoValleyIntroCs.csdata.inc.c"
};

u64 spot09_scene_00003470_TLUT[] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00005490_CITex.tlut.rgba16.inc.c"
};

u64 spot09_scene_00003490_Tex[TEX_LEN(u64, spot09_scene_00003490_Tex_WIDTH, spot09_scene_00003490_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00003490_Tex.rgba16.inc.c"
};

u64 spot09_scene_00004490_Tex[TEX_LEN(u64, spot09_scene_00004490_Tex_WIDTH, spot09_scene_00004490_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00004490_Tex.rgba16.inc.c"
};

u64 spot09_scene_00005490_CITex[TEX_LEN(u64, spot09_scene_00005490_CITex_WIDTH, spot09_scene_00005490_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00005490_CITex.ci4.inc.c"
};

u64 spot09_scene_00005C90_Tex[TEX_LEN(u64, spot09_scene_00005C90_Tex_WIDTH, spot09_scene_00005C90_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00005C90_Tex.rgba16.inc.c"
};

u64 spot09_scene_00006490_Tex[TEX_LEN(u64, spot09_scene_00006490_Tex_WIDTH, spot09_scene_00006490_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00006490_Tex.rgba16.inc.c"
};

u64 spot09_scene_00006C90_Tex[TEX_LEN(u64, spot09_scene_00006C90_Tex_WIDTH, spot09_scene_00006C90_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00006C90_Tex.i8.inc.c"
};

u64 spot09_scene_00006D90_Tex[TEX_LEN(u64, spot09_scene_00006D90_Tex_WIDTH, spot09_scene_00006D90_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00006D90_Tex.rgba16.inc.c"
};

u64 spot09_scene_00007190_Tex[TEX_LEN(u64, spot09_scene_00007190_Tex_WIDTH, spot09_scene_00007190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00007190_Tex.rgba16.inc.c"
};

u64 spot09_scene_00008190_Tex[TEX_LEN(u64, spot09_scene_00008190_Tex_WIDTH, spot09_scene_00008190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00008190_Tex.rgba16.inc.c"
};

u64 spot09_scene_00009190_Tex[TEX_LEN(u64, spot09_scene_00009190_Tex_WIDTH, spot09_scene_00009190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00009190_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000A190_Tex[TEX_LEN(u64, spot09_scene_0000A190_Tex_WIDTH, spot09_scene_0000A190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000A190_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000A990_Tex[TEX_LEN(u64, spot09_scene_0000A990_Tex_WIDTH, spot09_scene_0000A990_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000A990_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000B990_Tex[TEX_LEN(u64, spot09_scene_0000B990_Tex_WIDTH, spot09_scene_0000B990_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000B990_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000C190_Tex[TEX_LEN(u64, spot09_scene_0000C190_Tex_WIDTH, spot09_scene_0000C190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000C190_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000D190_Tex[TEX_LEN(u64, spot09_scene_0000D190_Tex_WIDTH, spot09_scene_0000D190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000D190_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000E190_Tex[TEX_LEN(u64, spot09_scene_0000E190_Tex_WIDTH, spot09_scene_0000E190_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000E190_Tex.rgba16.inc.c"
};

u64 spot09_scene_0000E990_Tex[TEX_LEN(u64, spot09_scene_0000E990_Tex_WIDTH, spot09_scene_0000E990_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000E990_Tex.i4.inc.c"
};

u64 spot09_scene_0000F190_Tex[TEX_LEN(u64, spot09_scene_0000F190_Tex_WIDTH, spot09_scene_0000F190_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000F190_Tex.i4.inc.c"
};

u64 spot09_scene_0000F990_Tex[TEX_LEN(u64, spot09_scene_0000F990_Tex_WIDTH, spot09_scene_0000F990_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_0000F990_Tex.rgba16.inc.c"
};

u64 spot09_scene_00010990_Tex[TEX_LEN(u64, spot09_scene_00010990_Tex_WIDTH, spot09_scene_00010990_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot09/spot09_scene_00010990_Tex.rgba16.inc.c"
};

