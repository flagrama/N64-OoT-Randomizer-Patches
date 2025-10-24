#include "spot04_scene.h"

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

SceneCmd spot04_scene[] = {
#include "assets/scenes/overworld/spot04/spot04_scene.inc.c"
};

SceneCmd* spot04_scene_02000070_AltHeaders[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders.inc.c"
};

ActorEntry spot04_scene_020000A4_PlayerEntryList[LENGTH_spot04_scene_020000A4_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_020000A4_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000164_TransitionActorEntryList[LENGTH_spot04_scene_02000164_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000164_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000184_RoomList[LENGTH_spot04_scene_02000184_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000184_RoomList.inc.c"
};

Spawn spot04_scene_0200019C_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0200019C_SpawnList.inc.c"
};

s16 spot04_scene_020001B4_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_020001B4_ExitList.inc.c"
};

EnvLightSettings spot04_scene_020001CC_EnvLightSettingsList[LENGTH_spot04_scene_020001CC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_020001CC_EnvLightSettingsList.inc.c"
};

Vec3s spot04_scenePathList_00030C_020002D4_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00030C_020002D4_Points.inc.c"
};

Vec3s spot04_scenePathList_00030C_020002E0_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00030C_020002E0_Points.inc.c"
};

Vec3s spot04_scenePathList_00030C_020002EC_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00030C_020002EC_Points.inc.c"
};

Path spot04_scenePathList_00030C[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00030C.inc.c"
};

Vec3s spot04_scene_02008918_BgCamList_02000330_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_BgCamList_02000330_BgCamFuncData.inc.c"
};

BgCamInfo spot04_scene_02008918_BgCamList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_BgCamList.inc.c"
};

SurfaceType spot04_scene_02008918_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_SurfaceTypes.inc.c"
};

CollisionPoly spot04_scene_02008918_PolyList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_PolyList.inc.c"
};

Vec3s spot04_scene_02008918_VtxList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_VtxList.inc.c"
};

WaterBox spot04_scene_02008918_WaterBoxes[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_WaterBoxes.inc.c"
};

CollisionHeader spot04_scene_02008918_Col = {
#include "assets/scenes/overworld/spot04/spot04_scene_02008918_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gKokiriForestKokiriEmeraldPart7Cs[] = {
#include "assets/scenes/overworld/spot04/pal/gKokiriForestKokiriEmeraldPart7Cs.csdata.inc.c"
};
#else
CutsceneData gKokiriForestKokiriEmeraldPart7Cs[] = {
#include "assets/scenes/overworld/spot04/ntsc/gKokiriForestKokiriEmeraldPart7Cs.csdata.inc.c"
};
#endif

CutsceneData gKokiriForestKokiriEmeraldPart1Cs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestKokiriEmeraldPart1Cs.csdata.inc.c"
};

CutsceneData gKokiriForestKokiriEmeraldPart9Cs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestKokiriEmeraldPart9Cs.csdata.inc.c"
};

CutsceneData gKokiriForestIntroNaviFlyingCs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestIntroNaviFlyingCs.csdata.inc.c"
};

CutsceneData gKokiriForestUnusedCs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestUnusedCs.csdata.inc.c"
};

CutsceneData gKokiriForestCreditsCameraPanUnusedCs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestCreditsCameraPanUnusedCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gKokiriForestCreditsDekuSproutCs[] = {
#include "assets/scenes/overworld/spot04/pal/gKokiriForestCreditsDekuSproutCs.csdata.inc.c"
};

CutsceneData gKokiriForestCreditsCameraPanCs[] = {
#include "assets/scenes/overworld/spot04/pal/gKokiriForestCreditsCameraPanCs.csdata.inc.c"
};
#else
CutsceneData gKokiriForestCreditsDekuSproutCs[] = {
#include "assets/scenes/overworld/spot04/ntsc/gKokiriForestCreditsDekuSproutCs.csdata.inc.c"
};

CutsceneData gKokiriForestCreditsCameraPanCs[] = {
#include "assets/scenes/overworld/spot04/ntsc/gKokiriForestCreditsCameraPanCs.csdata.inc.c"
};
#endif

CutsceneData gKokiriForestDekuSproutPart1Cs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestDekuSproutPart1Cs.csdata.inc.c"
};

CutsceneData gKokiriForestDekuSproutPart3Cs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestDekuSproutPart3Cs.csdata.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200CC30_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CC98_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CC98_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CC98_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CD68_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CD68_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CD68_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CD88_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CD88_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CD88_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDA0_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDA0_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDBC_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDBC_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDD4_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDD4_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CDD4_EnvLightSettingsList.inc.c"
};

Vec3s spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CF38_PathList_0200CEDC_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CF38_PathList_0200CEDC_Points.inc.c"
};

Path spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CF38_PathList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CC30_Cmds_0200CF38_PathList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200CF40_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200CFA8_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200CFA8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200CFA8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D078_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D078_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D078_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D098_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D098_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D098_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0B0_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0B0_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0CC_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0CC_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0E4_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0E4_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D0E4_EnvLightSettingsList.inc.c"
};

Vec3s spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D248_PathList_0200D1EC_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D248_PathList_0200D1EC_Points.inc.c"
};

Path spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D248_PathList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200CF40_Cmds_0200D248_PathList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200D250_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2B8_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2B8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2B8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2C8_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2C8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2C8_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2E8_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2E8_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D2E8_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D300_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D300_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D304_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D304_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D310_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D310_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D250_Cmds_0200D310_EnvLightSettingsList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200D380_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D3E8_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D3E8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D3E8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D3F8_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D3F8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D3F8_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D418_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D418_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D418_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D430_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D430_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D434_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D434_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D444_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D444_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D380_Cmds_0200D444_EnvLightSettingsList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200D4A0_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D508_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D508_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D508_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D518_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D518_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D518_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D538_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D538_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D538_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D550_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D550_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D554_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D554_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D564_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D564_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D4A0_Cmds_0200D564_EnvLightSettingsList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200D5C0_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D630_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D630_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D630_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D640_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D640_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D640_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D660_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D660_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D660_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D678_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D678_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D67C_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D67C_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D690_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D690_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D5C0_Cmds_0200D690_EnvLightSettingsList.inc.c"
};

Vec3s spot04_scenePathList_00D728_0200D740_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00D728_0200D740_Points.inc.c"
};

Vec3s spot04_scenePathList_00D728_0200D74C_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00D728_0200D74C_Points.inc.c"
};

Path spot04_scenePathList_00D728[] = {
#include "assets/scenes/overworld/spot04/spot04_scenePathList_00D728.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200D770_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D7E0_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D7E0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D7E0_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D7F0_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D7F0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D7F0_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D820_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D820_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D820_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D838_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D838_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D83C_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D83C_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D850_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D850_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D850_EnvLightSettingsList.inc.c"
};

Vec3s spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D90C_PathList_0200D900_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D90C_PathList_0200D900_Points.inc.c"
};

Path spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D90C_PathList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D770_Cmds_0200D90C_PathList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200D920_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D990_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D990_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D990_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9A0_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9A0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9A0_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9D0_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9D0_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9D0_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9E8_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9E8_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9EC_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200D9EC_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DA00_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DA00_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DA00_EnvLightSettingsList.inc.c"
};

Vec3s spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DABC_PathList_0200DAB0_Points[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DABC_PathList_0200DAB0_Points.inc.c"
};

Path spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DABC_PathList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200D920_Cmds_0200DABC_PathList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200DAD0_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB38_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB38_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB38_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB48_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB48_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB48_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB68_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB68_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB68_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB80_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB80_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB84_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB84_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB98_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB98_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DAD0_Cmds_0200DB98_EnvLightSettingsList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200DBB0_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC18_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC18_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC18_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC28_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC28_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC28_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC48_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC48_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC48_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC60_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC60_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC64_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC64_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC78_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC78_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DBB0_Cmds_0200DC78_EnvLightSettingsList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200DC90_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DCF8_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DCF8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DCF8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD08_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD08_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD08_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD28_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD28_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD28_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD40_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD40_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD44_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD44_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD58_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD58_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DC90_Cmds_0200DD58_EnvLightSettingsList.inc.c"
};

SceneCmd spot04_scene_02000070_AltHeaders_0200DE60_Cmds[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds.inc.c"
};

ActorEntry spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DEC8_PlayerEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DEC8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DEC8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DED8_TransitionActorEntryList[LENGTH_spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DED8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DED8_TransitionActorEntryList.inc.c"
};

RomFile spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF08_RoomList[LENGTH_spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF08_RoomList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF08_RoomList.inc.c"
};

Spawn spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF20_SpawnList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF20_SpawnList.inc.c"
};

s16 spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF24_ExitList[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF24_ExitList.inc.c"
};

EnvLightSettings spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF38_EnvLightSettingsList[LENGTH_spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF38_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot04/spot04_scene_02000070_AltHeaders_0200DE60_Cmds_0200DF38_EnvLightSettingsList.inc.c"
};

u64 spot04_scene_0000E040_TLUT[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0000E040_TLUT.tlut.rgba16.inc.c"
};

u8 spot04_scene_unaccounted_00E240[] = {
#include "assets/scenes/overworld/spot04/spot04_scene_unaccounted_00E240.bin.inc.c"
};

u64 spot04_scene_0000E248_Tex[TEX_LEN(u64, spot04_scene_0000E248_Tex_WIDTH, spot04_scene_0000E248_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0000E248_Tex.rgba16.inc.c"
};

u64 spot04_scene_0000EA48_Tex[TEX_LEN(u64, spot04_scene_0000EA48_Tex_WIDTH, spot04_scene_0000EA48_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0000EA48_Tex.i4.inc.c"
};

u64 spot04_scene_0000F248_Tex[TEX_LEN(u64, spot04_scene_0000F248_Tex_WIDTH, spot04_scene_0000F248_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0000F248_Tex.i4.inc.c"
};

u64 spot04_scene_0000FA48_CITex[TEX_LEN(u64, spot04_scene_0000FA48_CITex_WIDTH, spot04_scene_0000FA48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0000FA48_CITex.ci8.tlut_spot04_scene_0000E040_TLUT.inc.c"
};

u64 spot04_scene_0000FE48_Tex[TEX_LEN(u64, spot04_scene_0000FE48_Tex_WIDTH, spot04_scene_0000FE48_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot04/spot04_scene_0000FE48_Tex.rgba16.inc.c"
};

u64 spot04_scene_00010648_Tex[TEX_LEN(u64, spot04_scene_00010648_Tex_WIDTH, spot04_scene_00010648_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot04/spot04_scene_00010648_Tex.rgba16.inc.c"
};

CutsceneData gKokiriForestSariaGreetingCs[] = {
#include "assets/scenes/overworld/spot04/gKokiriForestSariaGreetingCs.csdata.inc.c"
};
