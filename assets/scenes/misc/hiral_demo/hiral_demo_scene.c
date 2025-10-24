#include "hiral_demo_scene.h"
#include "assets/scenes/misc/hiral_demo/hiral_demo_room_0.h"

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

SceneCmd hiral_demo_scene[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene.inc.c"
};

SceneCmd* hiral_demo_scene_02000050_AltHeaders[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders.inc.c"
};

ActorEntry hiral_demo_scene_02000080_PlayerEntryList[LENGTH_hiral_demo_scene_02000080_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000080_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000090_RoomList[LENGTH_hiral_demo_scene_02000090_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000090_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000098_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000098_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_0200009C_EnvLightSettingsList[LENGTH_hiral_demo_scene_0200009C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_0200009C_EnvLightSettingsList.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gCutsceneMapKokiriEmeraldPart3Cs[] = {
#include "assets/scenes/misc/hiral_demo/pal/gCutsceneMapKokiriEmeraldPart3Cs.csdata.inc.c"
};
#else
CutsceneData gCutsceneMapKokiriEmeraldPart3Cs[] = {
#include "assets/scenes/misc/hiral_demo/ntsc/gCutsceneMapKokiriEmeraldPart3Cs.csdata.inc.c"
};
#endif

CutsceneData gCutsceneMapKokiriEmeraldPart2Cs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapKokiriEmeraldPart2Cs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gCutsceneMapKokiriEmeraldPart8Cs[] = {
#include "assets/scenes/misc/hiral_demo/pal/gCutsceneMapKokiriEmeraldPart8Cs.csdata.inc.c"
};
#else
CutsceneData gCutsceneMapKokiriEmeraldPart8Cs[] = {
#include "assets/scenes/misc/hiral_demo/ntsc/gCutsceneMapKokiriEmeraldPart8Cs.csdata.inc.c"
};
#endif

CutsceneData gCutsceneMapGanondorfFromMasterSwordCs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapGanondorfFromMasterSwordCs.csdata.inc.c"
};

CutsceneData gCutsceneMapTriforceSheikahLegendCs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapTriforceSheikahLegendCs.csdata.inc.c"
};

CutsceneData gCutsceneMapDekuSproutPart2Cs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapDekuSproutPart2Cs.csdata.inc.c"
};

CutsceneData gCutsceneMapTitleGanonHorseCs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapTitleGanonHorseCs.csdata.inc.c"
};

CutsceneData gCutsceneMapThreeGoddessesCs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapThreeGoddessesCs.csdata.inc.c"
};

CutsceneData gCutsceneMapGanondorfDefeatedCs[] = {
#include "assets/scenes/misc/hiral_demo/gCutsceneMapGanondorfDefeatedCs.csdata.inc.c"
};

BgCamInfo hiral_demo_scene_02003558_BgCamList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02003558_BgCamList.inc.c"
};

SurfaceType hiral_demo_scene_02003558_SurfaceTypes[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02003558_SurfaceTypes.inc.c"
};

CollisionPoly hiral_demo_scene_02003558_PolyList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02003558_PolyList.inc.c"
};

Vec3s hiral_demo_scene_02003558_VtxList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02003558_VtxList.inc.c"
};

CollisionHeader hiral_demo_scene_02003558_Col = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02003558_Col.inc.c"
};

SceneCmd hiral_demo_scene_unused1[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused1.inc.c"
};

ActorEntry hiral_demo_scene_unused1_020035D0_PlayerEntryList[LENGTH_hiral_demo_scene_unused1_020035D0_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused1_020035D0_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_unused1_020035E0_RoomList[LENGTH_hiral_demo_scene_unused1_020035E0_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused1_020035E0_RoomList.inc.c"
};

Spawn hiral_demo_scene_unused1_020035E8_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused1_020035E8_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_unused1_020035EC_EnvLightSettingsList[LENGTH_hiral_demo_scene_unused1_020035EC_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused1_020035EC_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_unused2[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused2.inc.c"
};

ActorEntry hiral_demo_scene_unused2_02003690_PlayerEntryList[LENGTH_hiral_demo_scene_unused2_02003690_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused2_02003690_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_unused2_020036A0_RoomList[LENGTH_hiral_demo_scene_unused2_020036A0_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused2_020036A0_RoomList.inc.c"
};

Spawn hiral_demo_scene_unused2_020036A8_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused2_020036A8_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_unused2_020036AC_EnvLightSettingsList[LENGTH_hiral_demo_scene_unused2_020036AC_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused2_020036AC_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_unused3[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused3.inc.c"
};

ActorEntry hiral_demo_scene_unused3_02003750_PlayerEntryList[LENGTH_hiral_demo_scene_unused3_02003750_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused3_02003750_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_unused3_02003760_RoomList[LENGTH_hiral_demo_scene_unused3_02003760_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused3_02003760_RoomList.inc.c"
};

Spawn hiral_demo_scene_unused3_02003768_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused3_02003768_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_unused3_0200376C_EnvLightSettingsList[LENGTH_hiral_demo_scene_unused3_0200376C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_unused3_0200376C_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003820_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003820_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003820_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003830_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003830_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003830_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003838_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_02003838_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_0200383C_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_0200383C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020037D0_Cmds_0200383C_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_020038F8_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_020038F8_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_020038F8_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003908_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003908_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003908_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003910_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003910_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003914_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003914_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020038A0_Cmds_02003914_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_02003930_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003930_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003980_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003980_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003980_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003990_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003990_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003990_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003998_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_02003998_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_0200399C_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_0200399C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003930_Cmds_0200399C_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A10_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A10_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A10_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A20_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A20_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A20_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A28_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A28_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A2C_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A2C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_020039C0_Cmds_02003A2C_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AC0_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AC0_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AC0_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AD0_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AD0_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AD0_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AD8_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003AD8_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003ADC_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003ADC_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003A70_Cmds_02003ADC_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B58_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B58_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B58_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B68_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B68_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B68_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B70_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B70_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B74_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B74_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B00_Cmds_02003B74_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003BE8_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003BE8_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003BE8_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003BF8_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003BF8_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003BF8_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003C00_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003C00_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003C04_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003C04_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003B90_Cmds_02003C04_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C70_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C70_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C70_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C80_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C80_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C80_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C88_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C88_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C8C_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C8C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003C20_Cmds_02003C8C_EnvLightSettingsList.inc.c"
};

SceneCmd hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds.inc.c"
};

ActorEntry hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D00_PlayerEntryList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D00_PlayerEntryList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D00_PlayerEntryList.inc.c"
};

RomFile hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D10_RoomList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D10_RoomList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D10_RoomList.inc.c"
};

Spawn hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D18_SpawnList[] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D18_SpawnList.inc.c"
};

EnvLightSettings hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D1C_EnvLightSettingsList[LENGTH_hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D1C_EnvLightSettingsList] = {
#include "assets/scenes/misc/hiral_demo/hiral_demo_scene_02000050_AltHeaders_02003CB0_Cmds_02003D1C_EnvLightSettingsList.inc.c"
};

