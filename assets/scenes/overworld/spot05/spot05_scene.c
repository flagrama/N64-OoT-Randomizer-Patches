#include "spot05_scene.h"
#include "assets/scenes/overworld/spot05/spot05_room_0.h"

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

SceneCmd spot05_scene[] = {
#include "assets/scenes/overworld/spot05/spot05_scene.inc.c"
};

SceneCmd* spot05_scene_02000060_AltHeaders[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders.inc.c"
};

ActorEntry spot05_scene_02000074_PlayerEntryList[LENGTH_spot05_scene_02000074_PlayerEntryList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000074_PlayerEntryList.inc.c"
};

RomFile spot05_scene_020000A4_RoomList[LENGTH_spot05_scene_020000A4_RoomList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_020000A4_RoomList.inc.c"
};

Spawn spot05_scene_020000AC_SpawnList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_020000AC_SpawnList.inc.c"
};

s16 spot05_scene_020000B4_ExitList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_020000B4_ExitList.inc.c"
};

EnvLightSettings spot05_scene_020000B8_EnvLightSettingsList[LENGTH_spot05_scene_020000B8_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_020000B8_EnvLightSettingsList.inc.c"
};

Vec3s spot05_scene_02003F4C_BgCamList_020001C0_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_BgCamList_020001C0_BgCamFuncData.inc.c"
};

BgCamInfo spot05_scene_02003F4C_BgCamList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_BgCamList.inc.c"
};

SurfaceType spot05_scene_02003F4C_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_SurfaceTypes.inc.c"
};

CollisionPoly spot05_scene_02003F4C_PolyList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_PolyList.inc.c"
};

Vec3s spot05_scene_02003F4C_VtxList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_VtxList.inc.c"
};

WaterBox spot05_scene_02003F4C_WaterBoxes[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_WaterBoxes.inc.c"
};

CollisionHeader spot05_scene_02003F4C_Col = {
#include "assets/scenes/overworld/spot05/spot05_scene_02003F4C_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gMeadowMinuetCs[] = {
#include "assets/scenes/overworld/spot05/pal/gMeadowMinuetCs.csdata.inc.c"
};
#else
CutsceneData gMeadowMinuetCs[] = {
#include "assets/scenes/overworld/spot05/ntsc/gMeadowMinuetCs.csdata.inc.c"
};
#endif

CutsceneData gMeadowSariasSongCs[] = {
#include "assets/scenes/overworld/spot05/gMeadowSariasSongCs.csdata.inc.c"
};

SceneCmd spot05_scene_02000060_AltHeaders_020067E0_Cmds[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_020067E0_Cmds.inc.c"
};

ActorEntry spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006840_PlayerEntryList[LENGTH_spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006840_PlayerEntryList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006840_PlayerEntryList.inc.c"
};

RomFile spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006880_RoomList[LENGTH_spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006880_RoomList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006880_RoomList.inc.c"
};

Spawn spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006888_SpawnList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006888_SpawnList.inc.c"
};

s16 spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006890_ExitList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006890_ExitList.inc.c"
};

EnvLightSettings spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006894_EnvLightSettingsList[LENGTH_spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006894_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_020067E0_Cmds_02006894_EnvLightSettingsList.inc.c"
};

Vec3s spot05_scenePathList_0069D8_0200699C_Points[] = {
#include "assets/scenes/overworld/spot05/spot05_scenePathList_0069D8_0200699C_Points.inc.c"
};

Vec3s spot05_scenePathList_0069D8_020069A8_Points[] = {
#include "assets/scenes/overworld/spot05/spot05_scenePathList_0069D8_020069A8_Points.inc.c"
};

Vec3s spot05_scenePathList_0069D8_020069B4_Points[] = {
#include "assets/scenes/overworld/spot05/spot05_scenePathList_0069D8_020069B4_Points.inc.c"
};

Vec3s spot05_scenePathList_0069D8_020069C0_Points[] = {
#include "assets/scenes/overworld/spot05/spot05_scenePathList_0069D8_020069C0_Points.inc.c"
};

Vec3s spot05_scenePathList_0069D8_020069D4_Points[] = {
#include "assets/scenes/overworld/spot05/spot05_scenePathList_0069D8_020069D4_Points.inc.c"
};

Path spot05_scenePathList_0069D8[] = {
#include "assets/scenes/overworld/spot05/spot05_scenePathList_0069D8.inc.c"
};

SceneCmd spot05_scene_02000060_AltHeaders_02006A10_Cmds[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006A10_Cmds.inc.c"
};

ActorEntry spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A70_PlayerEntryList[LENGTH_spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A70_PlayerEntryList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A70_PlayerEntryList.inc.c"
};

RomFile spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A80_RoomList[LENGTH_spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A80_RoomList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A80_RoomList.inc.c"
};

Spawn spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A88_SpawnList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A88_SpawnList.inc.c"
};

s16 spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A8C_ExitList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A8C_ExitList.inc.c"
};

EnvLightSettings spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A90_EnvLightSettingsList[LENGTH_spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A90_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006A10_Cmds_02006A90_EnvLightSettingsList.inc.c"
};

SceneCmd spot05_scene_02000060_AltHeaders_02006AF0_Cmds[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006AF0_Cmds.inc.c"
};

ActorEntry spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B50_PlayerEntryList[LENGTH_spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B50_PlayerEntryList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B50_PlayerEntryList.inc.c"
};

RomFile spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B60_RoomList[LENGTH_spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B60_RoomList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B60_RoomList.inc.c"
};

Spawn spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B68_SpawnList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B68_SpawnList.inc.c"
};

s16 spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B6C_ExitList[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B6C_ExitList.inc.c"
};

EnvLightSettings spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B70_EnvLightSettingsList[LENGTH_spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B70_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot05/spot05_scene_02000060_AltHeaders_02006AF0_Cmds_02006B70_EnvLightSettingsList.inc.c"
};

u64 spot05_scene_00006BD0_TLUT[] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00006BD0_TLUT.tlut.rgba16.inc.c"
};

u64 spot05_scene_00006D70_Tex[TEX_LEN(u64, spot05_scene_00006D70_Tex_WIDTH, spot05_scene_00006D70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00006D70_Tex.rgba16.inc.c"
};

u64 spot05_scene_00007D70_Tex[TEX_LEN(u64, spot05_scene_00007D70_Tex_WIDTH, spot05_scene_00007D70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00007D70_Tex.rgba16.inc.c"
};

u64 spot05_scene_00008D70_CITex[TEX_LEN(u64, spot05_scene_00008D70_CITex_WIDTH, spot05_scene_00008D70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00008D70_CITex.ci8.tlut_spot05_scene_00006BD0_TLUT.inc.c"
};

u64 spot05_scene_00009170_CITex[TEX_LEN(u64, spot05_scene_00009170_CITex_WIDTH, spot05_scene_00009170_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00009170_CITex.ci8.tlut_spot05_scene_00006BD0_TLUT.inc.c"
};

u64 spot05_scene_00009570_Tex[TEX_LEN(u64, spot05_scene_00009570_Tex_WIDTH, spot05_scene_00009570_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00009570_Tex.rgba16.inc.c"
};

u64 spot05_scene_00009970_CITex[TEX_LEN(u64, spot05_scene_00009970_CITex_WIDTH, spot05_scene_00009970_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00009970_CITex.ci8.tlut_spot05_scene_00006BD0_TLUT.inc.c"
};

u64 spot05_scene_0000A170_Tex[TEX_LEN(u64, spot05_scene_0000A170_Tex_WIDTH, spot05_scene_0000A170_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000A170_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000B170_Tex[TEX_LEN(u64, spot05_scene_0000B170_Tex_WIDTH, spot05_scene_0000B170_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000B170_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000B970_Tex[TEX_LEN(u64, spot05_scene_0000B970_Tex_WIDTH, spot05_scene_0000B970_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000B970_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000BB70_Tex[TEX_LEN(u64, spot05_scene_0000BB70_Tex_WIDTH, spot05_scene_0000BB70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000BB70_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000CB70_Tex[TEX_LEN(u64, spot05_scene_0000CB70_Tex_WIDTH, spot05_scene_0000CB70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000CB70_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000D370_Tex[TEX_LEN(u64, spot05_scene_0000D370_Tex_WIDTH, spot05_scene_0000D370_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000D370_Tex.i4.inc.c"
};

u64 spot05_scene_0000DB70_Tex[TEX_LEN(u64, spot05_scene_0000DB70_Tex_WIDTH, spot05_scene_0000DB70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000DB70_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000E370_Tex[TEX_LEN(u64, spot05_scene_0000E370_Tex_WIDTH, spot05_scene_0000E370_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000E370_Tex.i4.inc.c"
};

u64 spot05_scene_0000EB70_Tex[TEX_LEN(u64, spot05_scene_0000EB70_Tex_WIDTH, spot05_scene_0000EB70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000EB70_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000F370_Tex[TEX_LEN(u64, spot05_scene_0000F370_Tex_WIDTH, spot05_scene_0000F370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000F370_Tex.rgba16.inc.c"
};

u64 spot05_scene_0000FB70_Tex[TEX_LEN(u64, spot05_scene_0000FB70_Tex_WIDTH, spot05_scene_0000FB70_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_0000FB70_Tex.i4.inc.c"
};

u64 spot05_scene_00010370_Tex[TEX_LEN(u64, spot05_scene_00010370_Tex_WIDTH, spot05_scene_00010370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00010370_Tex.rgba16.inc.c"
};

u64 spot05_scene_00010B70_Tex[TEX_LEN(u64, spot05_scene_00010B70_Tex_WIDTH, spot05_scene_00010B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00010B70_Tex.rgba16.inc.c"
};

u64 spot05_scene_00011370_Tex[TEX_LEN(u64, spot05_scene_00011370_Tex_WIDTH, spot05_scene_00011370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00011370_Tex.rgba16.inc.c"
};

u64 spot05_scene_00012370_Tex[TEX_LEN(u64, spot05_scene_00012370_Tex_WIDTH, spot05_scene_00012370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00012370_Tex.rgba16.inc.c"
};

u64 spot05_scene_00012B70_Tex[TEX_LEN(u64, spot05_scene_00012B70_Tex_WIDTH, spot05_scene_00012B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00012B70_Tex.rgba16.inc.c"
};

u64 spot05_scene_00013370_Tex[TEX_LEN(u64, spot05_scene_00013370_Tex_WIDTH, spot05_scene_00013370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00013370_Tex.rgba16.inc.c"
};

u64 spot05_scene_00013B70_Tex[TEX_LEN(u64, spot05_scene_00013B70_Tex_WIDTH, spot05_scene_00013B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00013B70_Tex.rgba16.inc.c"
};

u64 spot05_scene_00014370_Tex[TEX_LEN(u64, spot05_scene_00014370_Tex_WIDTH, spot05_scene_00014370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00014370_Tex.rgba16.inc.c"
};

u64 spot05_scene_00014B70_Tex[TEX_LEN(u64, spot05_scene_00014B70_Tex_WIDTH, spot05_scene_00014B70_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot05/spot05_scene_00014B70_Tex.ia8.inc.c"
};

