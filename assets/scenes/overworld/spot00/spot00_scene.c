#include "spot00_scene.h"
#include "assets/scenes/overworld/spot00/spot00_room_0.h"

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

SceneCmd spot00_scene[] = {
#include "assets/scenes/overworld/spot00/spot00_scene.inc.c"
};

SceneCmd* spot00_scene_02000068_AltHeaders[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders.inc.c"
};

ActorEntry spot00_scene_02000098_PlayerEntryList[LENGTH_spot00_scene_02000098_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000098_PlayerEntryList.inc.c"
};

RomFile spot00_scene_020001B8_RoomList[LENGTH_spot00_scene_020001B8_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_020001B8_RoomList.inc.c"
};

Spawn spot00_scene_020001C0_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_020001C0_SpawnList.inc.c"
};

s16 spot00_scene_020001E4_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_020001E4_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000204_EnvLightSettingsList[LENGTH_spot00_scene_02000204_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000204_EnvLightSettingsList.inc.c"
};

Vec3s spot00_scene_02000400_PathList_0200037C_Points[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000400_PathList_0200037C_Points.inc.c"
};

Path spot00_scene_02000400_PathList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000400_PathList.inc.c"
};

BgCamInfo spot00_scene_02008464_BgCamList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02008464_BgCamList.inc.c"
};

SurfaceType spot00_scene_02008464_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02008464_SurfaceTypes.inc.c"
};

CollisionPoly spot00_scene_02008464_PolyList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02008464_PolyList.inc.c"
};

Vec3s spot00_scene_02008464_VtxList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02008464_VtxList.inc.c"
};

WaterBox spot00_scene_02008464_WaterBoxes[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02008464_WaterBoxes.inc.c"
};

CollisionHeader spot00_scene_02008464_Col = {
#include "assets/scenes/overworld/spot00/spot00_scene_02008464_Col.inc.c"
};

CutsceneData gHyruleFieldZeldaEscapeCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldZeldaEscapeCs.csdata.inc.c"
};

CutsceneData gHyruleFieldZeldaFlashbackCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldZeldaFlashbackCs.csdata.inc.c"
};

CutsceneData gHyruleFieldTitleScreenCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldTitleScreenCs.csdata.inc.c"
};

CutsceneData gHyruleFieldGetOoTCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldGetOoTCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gHyruleFieldCreditsCs[] = {
#include "assets/scenes/overworld/spot00/pal/gHyruleFieldCreditsCs.csdata.inc.c"
};
#else
CutsceneData gHyruleFieldCreditsCs[] = {
#include "assets/scenes/overworld/spot00/ntsc/gHyruleFieldCreditsCs.csdata.inc.c"
};
#endif

CutsceneData gHyruleFieldGateEponaJump2Cs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldGateEponaJump2Cs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gHyruleFieldBeforeCreditsCs[] = {
#include "assets/scenes/overworld/spot00/pal/gHyruleFieldBeforeCreditsCs.csdata.inc.c"
};
#else
CutsceneData gHyruleFieldBeforeCreditsCs[] = {
#include "assets/scenes/overworld/spot00/ntsc/gHyruleFieldBeforeCreditsCs.csdata.inc.c"
};
#endif

CutsceneData gHyruleFieldImpaCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldImpaCs.csdata.inc.c"
};

CutsceneData gHyruleFieldZeldaEscapeUnusedCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldZeldaEscapeUnusedCs.csdata.inc.c"
};

CutsceneData gHyruleFieldZeldaSongOfTimeCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldZeldaSongOfTimeCs.csdata.inc.c"
};

CutsceneData gHyruleFieldSouthEponaJumpCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldSouthEponaJumpCs.csdata.inc.c"
};

CutsceneData gHyruleFieldEastEponaJumpCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldEastEponaJumpCs.csdata.inc.c"
};

CutsceneData gHyruleFieldWestEponaJumpCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldWestEponaJumpCs.csdata.inc.c"
};

CutsceneData gHyruleFieldGateEponaJumpCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldGateEponaJumpCs.csdata.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_020112F0_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011350_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011350_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011350_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011470_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011470_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011470_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011478_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_02011478_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_020112F0_Cmds_0201149C_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_0201149C_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_020112F0_Cmds_020114BC_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_020112F0_Cmds_020114BC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_020114BC_EnvLightSettingsList.inc.c"
};

Vec3s spot00_scene_02000068_AltHeaders_020112F0_Cmds_020116A0_PathList_0201161C_Points[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_020116A0_PathList_0201161C_Points.inc.c"
};

Path spot00_scene_02000068_AltHeaders_020112F0_Cmds_020116A0_PathList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020112F0_Cmds_020116A0_PathList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_020116B0_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020116B0_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011710_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011710_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011710_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011830_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011830_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011830_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011838_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020116B0_Cmds_02011838_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_020116B0_Cmds_0201185C_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020116B0_Cmds_0201185C_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_020116B0_Cmds_0201187C_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_020116B0_Cmds_0201187C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020116B0_Cmds_0201187C_EnvLightSettingsList.inc.c"
};

Vec3s spot00_scenePathList_011AB4_020119F4_Points[] = {
#include "assets/scenes/overworld/spot00/spot00_scenePathList_011AB4_020119F4_Points.inc.c"
};

Vec3s spot00_scenePathList_011AB4_02011A78_Points[] = {
#include "assets/scenes/overworld/spot00/spot00_scenePathList_011AB4_02011A78_Points.inc.c"
};

Path spot00_scenePathList_011AB4[] = {
#include "assets/scenes/overworld/spot00/spot00_scenePathList_011AB4.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02011AF0_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011AF0_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B48_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B48_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B48_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B58_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B58_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B58_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B60_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B60_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B64_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B64_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B70_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B70_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011AF0_Cmds_02011B70_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02011B90_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011B90_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011BE8_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011BE8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011BE8_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011BF8_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011BF8_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011BF8_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C00_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C00_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C04_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C04_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C10_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C10_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011B90_Cmds_02011C10_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02011CE0_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011CE0_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D38_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D38_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D38_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D48_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D48_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D48_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D50_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D50_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D54_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D54_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D60_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D60_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011CE0_Cmds_02011D60_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02011D80_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011D80_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DE0_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DE0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DE0_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DF0_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DF0_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DF0_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DF8_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DF8_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DFC_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011DFC_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011E1C_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011E1C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011D80_Cmds_02011E1C_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02011E80_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011E80_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EE0_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EE0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EE0_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EF0_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EF0_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EF0_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EF8_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EF8_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EFC_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011EFC_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011F1C_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011F1C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011E80_Cmds_02011F1C_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02011F40_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011F40_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FA0_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FA0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FA0_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FB0_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FB0_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FB0_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FB8_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FB8_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FBC_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FBC_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FDC_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FDC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02011F40_Cmds_02011FDC_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02012040_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012040_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02012040_Cmds_020120A0_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02012040_Cmds_020120A0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012040_Cmds_020120A0_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02012040_Cmds_020120B0_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02012040_Cmds_020120B0_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012040_Cmds_020120B0_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02012040_Cmds_020120B8_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012040_Cmds_020120B8_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02012040_Cmds_020120BC_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012040_Cmds_020120BC_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02012040_Cmds_020120DC_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02012040_Cmds_020120DC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012040_Cmds_020120DC_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_02012100_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012100_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_02012100_Cmds_02012158_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_02012100_Cmds_02012158_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012100_Cmds_02012158_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_02012100_Cmds_02012168_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_02012100_Cmds_02012168_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012100_Cmds_02012168_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_02012100_Cmds_02012170_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012100_Cmds_02012170_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_02012100_Cmds_02012174_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012100_Cmds_02012174_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_02012100_Cmds_02012180_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_02012100_Cmds_02012180_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_02012100_Cmds_02012180_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_02000068_AltHeaders_020121A0_Cmds[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020121A0_Cmds.inc.c"
};

ActorEntry spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012200_PlayerEntryList[LENGTH_spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012200_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012200_PlayerEntryList.inc.c"
};

RomFile spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012210_RoomList[LENGTH_spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012210_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012210_RoomList.inc.c"
};

Spawn spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012218_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020121A0_Cmds_02012218_SpawnList.inc.c"
};

s16 spot00_scene_02000068_AltHeaders_020121A0_Cmds_0201221C_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020121A0_Cmds_0201221C_ExitList.inc.c"
};

EnvLightSettings spot00_scene_02000068_AltHeaders_020121A0_Cmds_0201223C_EnvLightSettingsList[LENGTH_spot00_scene_02000068_AltHeaders_020121A0_Cmds_0201223C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_02000068_AltHeaders_020121A0_Cmds_0201223C_EnvLightSettingsList.inc.c"
};

SceneCmd spot00_scene_unused[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_unused.inc.c"
};

ActorEntry spot00_scene_unused_020123C0_PlayerEntryList[LENGTH_spot00_scene_unused_020123C0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_unused_020123C0_PlayerEntryList.inc.c"
};

RomFile spot00_scene_unused_020123D0_RoomList[LENGTH_spot00_scene_unused_020123D0_RoomList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_unused_020123D0_RoomList.inc.c"
};

Spawn spot00_scene_unused_020123D8_SpawnList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_unused_020123D8_SpawnList.inc.c"
};

s16 spot00_scene_unused_020123DC_ExitList[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_unused_020123DC_ExitList.inc.c"
};

EnvLightSettings spot00_scene_unused_020123FC_EnvLightSettingsList[LENGTH_spot00_scene_unused_020123FC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot00/spot00_scene_unused_020123FC_EnvLightSettingsList.inc.c"
};

CutsceneData gHyruleFieldIntroNightmareCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldIntroNightmareCs.csdata.inc.c"
};

CutsceneData gHyruleFieldIntroCs[] = {
#include "assets/scenes/overworld/spot00/gHyruleFieldIntroCs.csdata.inc.c"
};

u64 spot00_scene_00013D90_TLUT[] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00024838_CITex.tlut.rgba16.inc.c"
};

u64 spot00_scene_00013DB8_Tex[TEX_LEN(u64, spot00_scene_00013DB8_Tex_WIDTH, spot00_scene_00013DB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00013DB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000145B8_Tex[TEX_LEN(u64, spot00_scene_000145B8_Tex_WIDTH, spot00_scene_000145B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000145B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000149B8_Tex[TEX_LEN(u64, spot00_scene_000149B8_Tex_WIDTH, spot00_scene_000149B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000149B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00014DB8_Tex[TEX_LEN(u64, spot00_scene_00014DB8_Tex_WIDTH, spot00_scene_00014DB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00014DB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00015DB8_Tex[TEX_LEN(u64, spot00_scene_00015DB8_Tex_WIDTH, spot00_scene_00015DB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00015DB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00015EB8_Tex[TEX_LEN(u64, spot00_scene_00015EB8_Tex_WIDTH, spot00_scene_00015EB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00015EB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000166B8_Tex[TEX_LEN(u64, spot00_scene_000166B8_Tex_WIDTH, spot00_scene_000166B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000166B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00016AB8_Tex[TEX_LEN(u64, spot00_scene_00016AB8_Tex_WIDTH, spot00_scene_00016AB8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00016AB8_Tex.ia4.inc.c"
};

u64 spot00_scene_00016BB8_Tex[TEX_LEN(u64, spot00_scene_00016BB8_Tex_WIDTH, spot00_scene_00016BB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00016BB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000173B8_Tex[TEX_LEN(u64, spot00_scene_000173B8_Tex_WIDTH, spot00_scene_000173B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000173B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00017BB8_Tex[TEX_LEN(u64, spot00_scene_00017BB8_Tex_WIDTH, spot00_scene_00017BB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00017BB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00018BB8_Tex[TEX_LEN(u64, spot00_scene_00018BB8_Tex_WIDTH, spot00_scene_00018BB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00018BB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000193B8_Tex[TEX_LEN(u64, spot00_scene_000193B8_Tex_WIDTH, spot00_scene_000193B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000193B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_00019BB8_Tex[TEX_LEN(u64, spot00_scene_00019BB8_Tex_WIDTH, spot00_scene_00019BB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00019BB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001ABB8_Tex[TEX_LEN(u64, spot00_scene_0001ABB8_Tex_WIDTH, spot00_scene_0001ABB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001ABB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001B3B8_Tex[TEX_LEN(u64, spot00_scene_0001B3B8_Tex_WIDTH, spot00_scene_0001B3B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001B3B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001BBB8_Tex[TEX_LEN(u64, spot00_scene_0001BBB8_Tex_WIDTH, spot00_scene_0001BBB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001BBB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001BDB8_Tex[TEX_LEN(u64, spot00_scene_0001BDB8_Tex_WIDTH, spot00_scene_0001BDB8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001BDB8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001C1B8_Tex[TEX_LEN(u64, spot00_scene_0001C1B8_Tex_WIDTH, spot00_scene_0001C1B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001C1B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001C9B8_Tex[TEX_LEN(u64, spot00_scene_0001C9B8_Tex_WIDTH, spot00_scene_0001C9B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001C9B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001D1B8_Tex[TEX_LEN(u64, spot00_scene_0001D1B8_Tex_WIDTH, spot00_scene_0001D1B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001D1B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001D9B8_Tex[TEX_LEN(u64, spot00_scene_0001D9B8_Tex_WIDTH, spot00_scene_0001D9B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001D9B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001E9B8_Tex[TEX_LEN(u64, spot00_scene_0001E9B8_Tex_WIDTH, spot00_scene_0001E9B8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001E9B8_Tex.ia4.inc.c"
};

u64 spot00_scene_0001F1B8_Tex[TEX_LEN(u64, spot00_scene_0001F1B8_Tex_WIDTH, spot00_scene_0001F1B8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001F1B8_Tex.ia4.inc.c"
};

u64 spot00_scene_0001F5B8_Tex[TEX_LEN(u64, spot00_scene_0001F5B8_Tex_WIDTH, spot00_scene_0001F5B8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001F5B8_Tex.i4.inc.c"
};

u64 spot00_scene_0001F638_Tex[TEX_LEN(u64, spot00_scene_0001F638_Tex_WIDTH, spot00_scene_0001F638_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001F638_Tex.rgba16.inc.c"
};

u64 spot00_scene_0001F838_Tex[TEX_LEN(u64, spot00_scene_0001F838_Tex_WIDTH, spot00_scene_0001F838_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_0001F838_Tex.rgba16.inc.c"
};

u64 spot00_scene_00020038_Tex[TEX_LEN(u64, spot00_scene_00020038_Tex_WIDTH, spot00_scene_00020038_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00020038_Tex.i4.inc.c"
};

u64 spot00_scene_00020838_Tex[TEX_LEN(u64, spot00_scene_00020838_Tex_WIDTH, spot00_scene_00020838_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00020838_Tex.rgba16.inc.c"
};

u64 spot00_scene_00021038_Tex[TEX_LEN(u64, spot00_scene_00021038_Tex_WIDTH, spot00_scene_00021038_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00021038_Tex.rgba16.inc.c"
};

u64 spot00_scene_00021838_Tex[TEX_LEN(u64, spot00_scene_00021838_Tex_WIDTH, spot00_scene_00021838_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00021838_Tex.rgba16.inc.c"
};

u64 spot00_scene_00022038_Tex[TEX_LEN(u64, spot00_scene_00022038_Tex_WIDTH, spot00_scene_00022038_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00022038_Tex.ia4.inc.c"
};

u64 spot00_scene_00022838_Tex[TEX_LEN(u64, spot00_scene_00022838_Tex_WIDTH, spot00_scene_00022838_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00022838_Tex.rgba16.inc.c"
};

u64 spot00_scene_00023038_Tex[TEX_LEN(u64, spot00_scene_00023038_Tex_WIDTH, spot00_scene_00023038_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00023038_Tex.rgba16.inc.c"
};

u64 spot00_scene_00023838_Tex[TEX_LEN(u64, spot00_scene_00023838_Tex_WIDTH, spot00_scene_00023838_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00023838_Tex.i4.inc.c"
};

u64 spot00_scene_00024038_Tex[TEX_LEN(u64, spot00_scene_00024038_Tex_WIDTH, spot00_scene_00024038_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00024038_Tex.i4.inc.c"
};

u64 spot00_scene_00024838_CITex[TEX_LEN(u64, spot00_scene_00024838_CITex_WIDTH, spot00_scene_00024838_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00024838_CITex.ci4.inc.c"
};

u64 spot00_scene_00025038_Tex[TEX_LEN(u64, spot00_scene_00025038_Tex_WIDTH, spot00_scene_00025038_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00025038_Tex.i4.inc.c"
};

u64 spot00_scene_00025838_Tex[TEX_LEN(u64, spot00_scene_00025838_Tex_WIDTH, spot00_scene_00025838_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00025838_Tex.rgba16.inc.c"
};

u64 spot00_scene_000258B8_Tex[TEX_LEN(u64, spot00_scene_000258B8_Tex_WIDTH, spot00_scene_000258B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000258B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000260B8_Tex[TEX_LEN(u64, spot00_scene_000260B8_Tex_WIDTH, spot00_scene_000260B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000260B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000268B8_Tex[TEX_LEN(u64, spot00_scene_000268B8_Tex_WIDTH, spot00_scene_000268B8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000268B8_Tex.ia4.inc.c"
};

u64 spot00_scene_000269B8_Tex[TEX_LEN(u64, spot00_scene_000269B8_Tex_WIDTH, spot00_scene_000269B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000269B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000279B8_Tex[TEX_LEN(u64, spot00_scene_000279B8_Tex_WIDTH, spot00_scene_000279B8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000279B8_Tex.i4.inc.c"
};

u64 spot00_scene_00027DB8_Tex[TEX_LEN(u64, spot00_scene_00027DB8_Tex_WIDTH, spot00_scene_00027DB8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00027DB8_Tex.i4.inc.c"
};

u64 spot00_scene_000281B8_Tex[TEX_LEN(u64, spot00_scene_000281B8_Tex_WIDTH, spot00_scene_000281B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000281B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000285B8_Tex[TEX_LEN(u64, spot00_scene_000285B8_Tex_WIDTH, spot00_scene_000285B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000285B8_Tex.rgba16.inc.c"
};

u64 spot00_scene_000295B8_Tex[TEX_LEN(u64, spot00_scene_000295B8_Tex_WIDTH, spot00_scene_000295B8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_000295B8_Tex.i4.inc.c"
};

u64 spot00_scene_00029DB8_Tex[TEX_LEN(u64, spot00_scene_00029DB8_Tex_WIDTH, spot00_scene_00029DB8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00029DB8_Tex.i4.inc.c"
};

u64 spot00_scene_00029FB8_Tex[TEX_LEN(u64, spot00_scene_00029FB8_Tex_WIDTH, spot00_scene_00029FB8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_00029FB8_Tex.i4.inc.c"
};

u64 spot00_scene_Tex_02A198[TEX_LEN(u64, spot00_scene_Tex_02A198_WIDTH, spot00_scene_Tex_02A198_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot00/spot00_scene_Tex_02A198.ia8.inc.c"
};
