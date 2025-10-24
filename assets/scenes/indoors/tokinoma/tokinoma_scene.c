#include "tokinoma_scene.h"

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

SceneCmd tokinoma_scene[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene.inc.c"
};

SceneCmd* tokinoma_scene_02000068_AltHeaders[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders.inc.c"
};

ActorEntry tokinoma_scene_020000A0_PlayerEntryList[LENGTH_tokinoma_scene_020000A0_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020000A0_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000120_TransitionActorEntryList[LENGTH_tokinoma_scene_02000120_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000120_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000130_RoomList[LENGTH_tokinoma_scene_02000130_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000130_RoomList.inc.c"
};

Spawn tokinoma_scene_02000140_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000140_SpawnList.inc.c"
};

s16 tokinoma_scene_02000150_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000150_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000154_EnvLightSettingsList[LENGTH_tokinoma_scene_02000154_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000154_EnvLightSettingsList.inc.c"
};

CutsceneData gTempleOfTimeUnusedCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeUnusedCs.csdata.inc.c"
};

Vec3s tokinoma_scene_020032F8_BgCamList_020004B0_BgCamFuncData[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020032F8_BgCamList_020004B0_BgCamFuncData.inc.c"
};

BgCamInfo tokinoma_scene_020032F8_BgCamList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020032F8_BgCamList.inc.c"
};

SurfaceType tokinoma_scene_020032F8_SurfaceTypes[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020032F8_SurfaceTypes.inc.c"
};

CollisionPoly tokinoma_scene_020032F8_PolyList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020032F8_PolyList.inc.c"
};

Vec3s tokinoma_scene_020032F8_VtxList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020032F8_VtxList.inc.c"
};

CollisionHeader tokinoma_scene_020032F8_Col = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_020032F8_Col.inc.c"
};

CutsceneData gTempleOfTimeDoorOpeningUnusedCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeDoorOpeningUnusedCs.csdata.inc.c"
};

CutsceneData gTempleOfTimeRubyRestoredUnusedCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeRubyRestoredUnusedCs.csdata.inc.c"
};

CutsceneData gTempleOfTimeEmeraldRestoredUnusedCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeEmeraldRestoredUnusedCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gTempleOfTimeCreditsCs[] = {
#include "assets/scenes/indoors/tokinoma/pal/gTempleOfTimeCreditsCs.csdata.inc.c"
};
#else
CutsceneData gTempleOfTimeCreditsCs[] = {
#include "assets/scenes/indoors/tokinoma/ntsc/gTempleOfTimeCreditsCs.csdata.inc.c"
};
#endif

CutsceneData gTempleOfTimeFirstAdultCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeFirstAdultCs.csdata.inc.c"
};

CutsceneData gTempleOfTimeSongOfTimeCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeSongOfTimeCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gTempleOfTimePreludeCs[] = {
#include "assets/scenes/indoors/tokinoma/pal/gTempleOfTimePreludeCs.csdata.inc.c"
};
#else
CutsceneData gTempleOfTimePreludeCs[] = {
#include "assets/scenes/indoors/tokinoma/ntsc/gTempleOfTimePreludeCs.csdata.inc.c"
};
#endif

CutsceneData gTempleOfTimeSheikRevealsStartCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeSheikRevealsStartCs.csdata.inc.c"
};

CutsceneData gTempleOfTimeSheikRevealsCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeSheikRevealsCs.csdata.inc.c"
};

CutsceneData gTempleOfTimeLightArrowsAndZeldaCapturedCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeLightArrowsAndZeldaCapturedCs.csdata.inc.c"
};

CutsceneData gTempleOfTimeSapphireRestoredUnusedCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeSapphireRestoredUnusedCs.csdata.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C228_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C228_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C228_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C238_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C238_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C238_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C248_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C248_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C248_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C258_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C258_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C25C_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C25C_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C260_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C260_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C1C0_Cmds_0200C260_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C370_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3D8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3D8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3D8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3E8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3E8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3E8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3F8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3F8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C3F8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C408_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C408_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C40C_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C40C_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C410_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C410_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C370_Cmds_0200C410_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C470_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4D8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4D8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4D8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4E8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4E8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4E8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4F8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4F8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C4F8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C508_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C508_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C50C_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C50C_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C510_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C510_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C470_Cmds_0200C510_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C608_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C608_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C608_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C618_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C618_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C618_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C628_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C628_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C628_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C638_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C638_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C63C_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C63C_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C640_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C640_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C5A0_Cmds_0200C640_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C750_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7B8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7B8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7B8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7C8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7C8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7C8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7D8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7D8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7D8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7E8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7E8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7EC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7EC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7F0_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7F0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C750_Cmds_0200C7F0_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C850_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8B8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8B8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8B8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8C8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8C8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8C8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8D8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8D8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8D8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8E8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8E8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8EC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8EC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8F0_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8F0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C850_Cmds_0200C8F0_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200C950_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9B8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9B8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9B8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9C8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9C8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9C8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9D8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9D8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9D8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9E8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9E8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9EC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9EC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9F0_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9F0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200C950_Cmds_0200C9F0_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAB8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAB8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAB8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAC8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAC8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAC8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAD8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAD8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAD8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAE8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAE8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAEC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAEC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAF0_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAF0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CA50_Cmds_0200CAF0_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBB8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBB8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBB8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBC8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBC8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBC8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBD8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBD8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBD8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBE8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBE8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBEC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBEC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBF0_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBF0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CB50_Cmds_0200CBF0_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCC8_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCC8_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCC8_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCD8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCD8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCD8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCE8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCE8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCE8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCF8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCF8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCFC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CCFC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CD00_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CD00_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CC60_Cmds_0200CD00_EnvLightSettingsList.inc.c"
};

SceneCmd tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds.inc.c"
};

ActorEntry tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CD98_PlayerEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CD98_PlayerEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CD98_PlayerEntryList.inc.c"
};

TransitionActorEntry tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDA8_TransitionActorEntryList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDA8_TransitionActorEntryList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDA8_TransitionActorEntryList.inc.c"
};

RomFile tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDB8_RoomList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDB8_RoomList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDB8_RoomList.inc.c"
};

Spawn tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDC8_SpawnList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDC8_SpawnList.inc.c"
};

s16 tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDCC_ExitList[] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDCC_ExitList.inc.c"
};

EnvLightSettings tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDD0_EnvLightSettingsList[LENGTH_tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDD0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_02000068_AltHeaders_0200CD30_Cmds_0200CDD0_EnvLightSettingsList.inc.c"
};

CutsceneData gTempleOfTimeIntroCs[] = {
#include "assets/scenes/indoors/tokinoma/gTempleOfTimeIntroCs.csdata.inc.c"
};

u64 tokinoma_scene_0000CFC0_Tex[TEX_LEN(u64, tokinoma_scene_0000CFC0_Tex_WIDTH, tokinoma_scene_0000CFC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_0000CFC0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_0000D7C0_Tex[TEX_LEN(u64, tokinoma_scene_0000D7C0_Tex_WIDTH, tokinoma_scene_0000D7C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_0000D7C0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_0000DFC0_Tex[TEX_LEN(u64, tokinoma_scene_0000DFC0_Tex_WIDTH, tokinoma_scene_0000DFC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_0000DFC0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_0000EFC0_Tex[TEX_LEN(u64, tokinoma_scene_0000EFC0_Tex_WIDTH, tokinoma_scene_0000EFC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_0000EFC0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_0000FFC0_Tex[TEX_LEN(u64, tokinoma_scene_0000FFC0_Tex_WIDTH, tokinoma_scene_0000FFC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_0000FFC0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_000107C0_Tex[TEX_LEN(u64, tokinoma_scene_000107C0_Tex_WIDTH, tokinoma_scene_000107C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_000107C0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_00010FC0_Tex[TEX_LEN(u64, tokinoma_scene_00010FC0_Tex_WIDTH, tokinoma_scene_00010FC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_00010FC0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_000117C0_Tex[TEX_LEN(u64, tokinoma_scene_000117C0_Tex_WIDTH, tokinoma_scene_000117C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_000117C0_Tex.rgba16.inc.c"
};

u64 tokinoma_scene_00011FC0_Tex[TEX_LEN(u64, tokinoma_scene_00011FC0_Tex_WIDTH, tokinoma_scene_00011FC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/tokinoma/tokinoma_scene_00011FC0_Tex.rgba16.inc.c"
};

