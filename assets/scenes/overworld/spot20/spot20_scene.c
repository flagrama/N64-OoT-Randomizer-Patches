#include "spot20_scene.h"
#include "assets/scenes/overworld/spot20/spot20_room_0.h"

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

SceneCmd spot20_scene[] = {
#include "assets/scenes/overworld/spot20/spot20_scene.inc.c"
};

SceneCmd* spot20_scene_02000070_AltHeaders[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders.inc.c"
};

ActorEntry spot20_scene_0200009C_PlayerEntryList[LENGTH_spot20_scene_0200009C_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0200009C_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_0200014C_TransitionActorEntryList[LENGTH_spot20_scene_0200014C_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0200014C_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_0200017C_RoomList[LENGTH_spot20_scene_0200017C_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0200017C_RoomList.inc.c"
};

Spawn spot20_scene_02000184_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000184_SpawnList.inc.c"
};

s16 spot20_scene_0200019C_ExitList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0200019C_ExitList.inc.c"
};

EnvLightSettings spot20_scene_020001AC_EnvLightSettingsList[LENGTH_spot20_scene_020001AC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_020001AC_EnvLightSettingsList.inc.c"
};

Vec3s spot20_scene_02000314_PathList_020002B4_Points[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000314_PathList_020002B4_Points.inc.c"
};

Path spot20_scene_02000314_PathList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000314_PathList.inc.c"
};

CutsceneData gLonLonRanchUnusedCs[] = {
#include "assets/scenes/overworld/spot20/gLonLonRanchUnusedCs.csdata.inc.c"
};

Vec3s spot20_scene_02002948_BgCamList_02000850_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02002948_BgCamList_02000850_BgCamFuncData.inc.c"
};

BgCamInfo spot20_scene_02002948_BgCamList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02002948_BgCamList.inc.c"
};

SurfaceType spot20_scene_02002948_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02002948_SurfaceTypes.inc.c"
};

CollisionPoly spot20_scene_02002948_PolyList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02002948_PolyList.inc.c"
};

Vec3s spot20_scene_02002948_VtxList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02002948_VtxList.inc.c"
};

CollisionHeader spot20_scene_02002948_Col = {
#include "assets/scenes/overworld/spot20/spot20_scene_02002948_Col.inc.c"
};

CutsceneData gLonLonRanchRaceIntroCs[] = {
#include "assets/scenes/overworld/spot20/gLonLonRanchRaceIntroCs.csdata.inc.c"
};

CutsceneData gLonLonRanchEponasSongCs[] = {
#include "assets/scenes/overworld/spot20/gLonLonRanchEponasSongCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gLonLonRanchCreditsPart1Cs[] = {
#include "assets/scenes/overworld/spot20/pal/gLonLonRanchCreditsPart1Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart2Cs[] = {
#include "assets/scenes/overworld/spot20/pal/gLonLonRanchCreditsPart2Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart3Cs[] = {
#include "assets/scenes/overworld/spot20/pal/gLonLonRanchCreditsPart3Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart4Cs[] = {
#include "assets/scenes/overworld/spot20/pal/gLonLonRanchCreditsPart4Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart6Cs[] = {
#include "assets/scenes/overworld/spot20/pal/gLonLonRanchCreditsPart6Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart5Cs[] = {
#include "assets/scenes/overworld/spot20/pal/gLonLonRanchCreditsPart5Cs.csdata.inc.c"
};
#else
CutsceneData gLonLonRanchCreditsPart1Cs[] = {
#include "assets/scenes/overworld/spot20/ntsc/gLonLonRanchCreditsPart1Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart2Cs[] = {
#include "assets/scenes/overworld/spot20/ntsc/gLonLonRanchCreditsPart2Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart3Cs[] = {
#include "assets/scenes/overworld/spot20/ntsc/gLonLonRanchCreditsPart3Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart4Cs[] = {
#include "assets/scenes/overworld/spot20/ntsc/gLonLonRanchCreditsPart4Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart6Cs[] = {
#include "assets/scenes/overworld/spot20/ntsc/gLonLonRanchCreditsPart6Cs.csdata.inc.c"
};

CutsceneData gLonLonRanchCreditsPart5Cs[] = {
#include "assets/scenes/overworld/spot20/ntsc/gLonLonRanchCreditsPart5Cs.csdata.inc.c"
};
#endif

SceneCmd spot20_scene_02000070_AltHeaders_02004A50_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004AB0_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004AB0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004AB0_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B60_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B60_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B60_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B90_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B90_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B90_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B98_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004B98_SpawnList.inc.c"
};

s16 spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004BB0_ExitList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004BB0_ExitList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004BC0_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004BC0_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004A50_Cmds_02004BC0_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_02004CD0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004D30_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004D30_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004D30_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004DE0_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004DE0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004DE0_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E10_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E10_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E10_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E18_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E18_SpawnList.inc.c"
};

s16 spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E30_ExitList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E30_ExitList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E40_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E40_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004CD0_Cmds_02004E40_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_02004F50_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_02004F50_Cmds_02004FB0_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02004F50_Cmds_02004FB0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds_02004FB0_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005060_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005060_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005060_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005090_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005090_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005090_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005098_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds_02005098_SpawnList.inc.c"
};

s16 spot20_scene_02000070_AltHeaders_02004F50_Cmds_020050B0_ExitList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds_020050B0_ExitList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_02004F50_Cmds_020050C0_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_02004F50_Cmds_020050C0_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02004F50_Cmds_020050C0_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_020051D0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005238_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005238_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005238_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005248_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005248_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005248_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005278_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005278_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005278_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005280_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005280_SpawnList.inc.c"
};

s16 spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005284_ExitList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005284_ExitList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005294_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005294_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020051D0_Cmds_02005294_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_020052F0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005358_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005358_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005358_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005368_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005368_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005368_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005388_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005388_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005388_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005390_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005390_SpawnList.inc.c"
};

s16 spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005394_ExitList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds_02005394_ExitList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_020052F0_Cmds_020053A0_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_020052F0_Cmds_020053A0_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020052F0_Cmds_020053A0_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_020054B0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020054B0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005508_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005508_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005508_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005518_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005518_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005518_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005548_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005548_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005548_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005550_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005550_SpawnList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005554_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005554_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020054B0_Cmds_02005554_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_020055D0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020055D0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005628_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005628_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005628_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005638_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005638_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005638_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005668_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005668_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005668_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005670_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005670_SpawnList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005674_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005674_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020055D0_Cmds_02005674_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_020056D0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020056D0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005730_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005730_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005730_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005740_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005740_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005740_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005770_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005770_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005770_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005778_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020056D0_Cmds_02005778_SpawnList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_020056D0_Cmds_0200577C_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_020056D0_Cmds_0200577C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_020056D0_Cmds_0200577C_EnvLightSettingsList.inc.c"
};

Vec3s spot20_scenePathList_005844_020057D4_Points[] = {
#include "assets/scenes/overworld/spot20/spot20_scenePathList_005844_020057D4_Points.inc.c"
};

Vec3s spot20_scenePathList_005844_0200580C_Points[] = {
#include "assets/scenes/overworld/spot20/spot20_scenePathList_005844_0200580C_Points.inc.c"
};

Path spot20_scenePathList_005844[] = {
#include "assets/scenes/overworld/spot20/spot20_scenePathList_005844.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_02005860_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005860_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_02005860_Cmds_020058B8_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02005860_Cmds_020058B8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005860_Cmds_020058B8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_02005860_Cmds_020058C8_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02005860_Cmds_020058C8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005860_Cmds_020058C8_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_02005860_Cmds_020058F8_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_02005860_Cmds_020058F8_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005860_Cmds_020058F8_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_02005860_Cmds_02005900_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005860_Cmds_02005900_SpawnList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_02005860_Cmds_02005904_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_02005860_Cmds_02005904_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005860_Cmds_02005904_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_02005960_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005960_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_02005960_Cmds_020059B8_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02005960_Cmds_020059B8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005960_Cmds_020059B8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_02005960_Cmds_020059C8_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02005960_Cmds_020059C8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005960_Cmds_020059C8_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_02005960_Cmds_020059F8_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_02005960_Cmds_020059F8_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005960_Cmds_020059F8_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_02005960_Cmds_02005A00_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005960_Cmds_02005A00_SpawnList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_02005960_Cmds_02005A04_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_02005960_Cmds_02005A04_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005960_Cmds_02005A04_EnvLightSettingsList.inc.c"
};

SceneCmd spot20_scene_02000070_AltHeaders_02005AE0_Cmds[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005AE0_Cmds.inc.c"
};

ActorEntry spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B38_PlayerEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B38_PlayerEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B38_PlayerEntryList.inc.c"
};

TransitionActorEntry spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B48_TransitionActorEntryList[LENGTH_spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B48_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B48_TransitionActorEntryList.inc.c"
};

RomFile spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B78_RoomList[LENGTH_spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B78_RoomList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B78_RoomList.inc.c"
};

Spawn spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B80_SpawnList[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B80_SpawnList.inc.c"
};

EnvLightSettings spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B84_EnvLightSettingsList[LENGTH_spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B84_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot20/spot20_scene_02000070_AltHeaders_02005AE0_Cmds_02005B84_EnvLightSettingsList.inc.c"
};

CutsceneData gLonLonRanchIntroCs[] = {
#include "assets/scenes/overworld/spot20/gLonLonRanchIntroCs.csdata.inc.c"
};

u64 spot20_scene_00005DB0_TLUT[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_00005DB0_TLUT.tlut.rgba16.inc.c"
};

u8 spot20_scene_unaccounted_005FB0[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_unaccounted_005FB0.bin.inc.c"
};

u64 spot20_scene_00005FB8_TLUT[] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000C1E0_CITex.tlut.rgba16.inc.c"
};

u64 spot20_scene_00005FE0_CITex[TEX_LEN(u64, spot20_scene_00005FE0_CITex_WIDTH, spot20_scene_00005FE0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_00005FE0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_000067E0_CITex[TEX_LEN(u64, spot20_scene_000067E0_CITex_WIDTH, spot20_scene_000067E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_000067E0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_000069E0_CITex[TEX_LEN(u64, spot20_scene_000069E0_CITex_WIDTH, spot20_scene_000069E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_000069E0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_000071E0_Tex[TEX_LEN(u64, spot20_scene_000071E0_Tex_WIDTH, spot20_scene_000071E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_000071E0_Tex.rgba16.inc.c"
};

u64 gLonLonRanchDayWindowTex[TEX_LEN(u64, gLonLonRanchDayWindowTex_WIDTH, gLonLonRanchDayWindowTex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/gLonLonRanchDayWindowTex.rgba16.inc.c"
};

u64 spot20_scene_000091E0_CITex[TEX_LEN(u64, spot20_scene_000091E0_CITex_WIDTH, spot20_scene_000091E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_000091E0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_000093E0_Tex[TEX_LEN(u64, spot20_scene_000093E0_Tex_WIDTH, spot20_scene_000093E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_000093E0_Tex.rgba16.inc.c"
};

u64 spot20_scene_00009BE0_Tex[TEX_LEN(u64, spot20_scene_00009BE0_Tex_WIDTH, spot20_scene_00009BE0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_00009BE0_Tex.rgba16.inc.c"
};

u64 spot20_scene_0000ABE0_Tex[TEX_LEN(u64, spot20_scene_0000ABE0_Tex_WIDTH, spot20_scene_0000ABE0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000ABE0_Tex.rgba16.inc.c"
};

u64 spot20_scene_0000BBE0_CITex[TEX_LEN(u64, spot20_scene_0000BBE0_CITex_WIDTH, spot20_scene_0000BBE0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000BBE0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_0000BDE0_CITex[TEX_LEN(u64, spot20_scene_0000BDE0_CITex_WIDTH, spot20_scene_0000BDE0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000BDE0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_0000C1E0_CITex[TEX_LEN(u64, spot20_scene_0000C1E0_CITex_WIDTH, spot20_scene_0000C1E0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000C1E0_CITex.ci4.inc.c"
};

u64 spot20_scene_0000C9E0_CITex[TEX_LEN(u64, spot20_scene_0000C9E0_CITex_WIDTH, spot20_scene_0000C9E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000C9E0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 spot20_scene_0000D1E0_Tex[TEX_LEN(u64, spot20_scene_0000D1E0_Tex_WIDTH, spot20_scene_0000D1E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000D1E0_Tex.rgba16.inc.c"
};

u64 spot20_scene_0000D9E0_Tex[TEX_LEN(u64, spot20_scene_0000D9E0_Tex_WIDTH, spot20_scene_0000D9E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000D9E0_Tex.rgba16.inc.c"
};

u64 spot20_scene_0000E1E0_Tex[TEX_LEN(u64, spot20_scene_0000E1E0_Tex_WIDTH, spot20_scene_0000E1E0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000E1E0_Tex.i4.inc.c"
};

u64 spot20_scene_0000E9E0_Tex[TEX_LEN(u64, spot20_scene_0000E9E0_Tex_WIDTH, spot20_scene_0000E9E0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000E9E0_Tex.i4.inc.c"
};

u64 spot20_scene_0000F1E0_Tex[TEX_LEN(u64, spot20_scene_0000F1E0_Tex_WIDTH, spot20_scene_0000F1E0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000F1E0_Tex.i4.inc.c"
};

u64 spot20_scene_0000F9E0_CITex[TEX_LEN(u64, spot20_scene_0000F9E0_CITex_WIDTH, spot20_scene_0000F9E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_0000F9E0_CITex.ci8.tlut_spot20_scene_00005DB0_TLUT.inc.c"
};

u64 gLonLonRangeNightWindowsTex[TEX_LEN(u64, gLonLonRangeNightWindowsTex_WIDTH, gLonLonRangeNightWindowsTex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot20/gLonLonRangeNightWindowsTex.rgba16.inc.c"
};

u64 spot20_scene_00010BE0_Tex[TEX_LEN(u64, spot20_scene_00010BE0_Tex_WIDTH, spot20_scene_00010BE0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_00010BE0_Tex.i4.inc.c"
};

u64 spot20_scene_00010E20_Tex[TEX_LEN(u64, spot20_scene_00010E20_Tex_WIDTH, spot20_scene_00010E20_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot20/spot20_scene_00010E20_Tex.ia8.inc.c"
};

