#include "spot01_scene.h"
#include "assets/scenes/overworld/spot01/spot01_room_0.h"

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

SceneCmd spot01_scene[] = {
#include "assets/scenes/overworld/spot01/spot01_scene.inc.c"
};

SceneCmd* spot01_scene_02000070_AltHeaders[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders.inc.c"
};

ActorEntry spot01_scene_02000090_PlayerEntryList[LENGTH_spot01_scene_02000090_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000090_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000190_TransitionActorEntryList[LENGTH_spot01_scene_02000190_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000190_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000220_RoomList[LENGTH_spot01_scene_02000220_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000220_RoomList.inc.c"
};

Spawn spot01_scene_02000228_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000228_SpawnList.inc.c"
};

s16 spot01_scene_02000248_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000248_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000264_EnvLightSettingsList[LENGTH_spot01_scene_02000264_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000264_EnvLightSettingsList.inc.c"
};

Vec3s spot01_scenePathList_0003D0_0200036C_Points[] = {
#include "assets/scenes/overworld/spot01/spot01_scenePathList_0003D0_0200036C_Points.inc.c"
};

Vec3s spot01_scenePathList_0003D0_02000380_Points[] = {
#include "assets/scenes/overworld/spot01/spot01_scenePathList_0003D0_02000380_Points.inc.c"
};

Vec3s spot01_scenePathList_0003D0_020003A4_Points[] = {
#include "assets/scenes/overworld/spot01/spot01_scenePathList_0003D0_020003A4_Points.inc.c"
};

Path spot01_scenePathList_0003D0[] = {
#include "assets/scenes/overworld/spot01/spot01_scenePathList_0003D0.inc.c"
};

Vec3s spot01_scene_02004A1C_BgCamList_020003F0_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_BgCamList_020003F0_BgCamFuncData.inc.c"
};

BgCamInfo spot01_scene_02004A1C_BgCamList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_BgCamList.inc.c"
};

SurfaceType spot01_scene_02004A1C_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_SurfaceTypes.inc.c"
};

CollisionPoly spot01_scene_02004A1C_PolyList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_PolyList.inc.c"
};

Vec3s spot01_scene_02004A1C_VtxList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_VtxList.inc.c"
};

WaterBox spot01_scene_02004A1C_WaterBoxes[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_WaterBoxes.inc.c"
};

CollisionHeader spot01_scene_02004A1C_Col = {
#include "assets/scenes/overworld/spot01/spot01_scene_02004A1C_Col.inc.c"
};

CutsceneData gKakarikoVillageNocturnePart1Cs[] = {
#include "assets/scenes/overworld/spot01/gKakarikoVillageNocturnePart1Cs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gKakarikoVillageNocturnePart2Cs[] = {
#include "assets/scenes/overworld/spot01/pal/gKakarikoVillageNocturnePart2Cs.csdata.inc.c"
};
#else
CutsceneData gKakarikoVillageNocturnePart2Cs[] = {
#include "assets/scenes/overworld/spot01/ntsc/gKakarikoVillageNocturnePart2Cs.csdata.inc.c"
};
#endif

CutsceneData gKakarikoVillageWellDrainingCs[] = {
#include "assets/scenes/overworld/spot01/gKakarikoVillageWellDrainingCs.csdata.inc.c"
};

CutsceneData gKakarikoVillagePostFireTempleCs[] = {
#include "assets/scenes/overworld/spot01/gKakarikoVillagePostFireTempleCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gKakarikoVillageCreditsCs[] = {
#include "assets/scenes/overworld/spot01/pal/gKakarikoVillageCreditsCs.csdata.inc.c"
};
#else
CutsceneData gKakarikoVillageCreditsCs[] = {
#include "assets/scenes/overworld/spot01/ntsc/gKakarikoVillageCreditsCs.csdata.inc.c"
};
#endif

SceneCmd spot01_scene_02000070_AltHeaders_020090F0_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009158_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009158_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009158_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009258_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009258_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009258_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_020090F0_Cmds_020092E8_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_020090F0_Cmds_020092E8_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_020092E8_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_020090F0_Cmds_020092F0_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_020092F0_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009310_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009310_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_020090F0_Cmds_0200932C_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_020090F0_Cmds_0200932C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_0200932C_EnvLightSettingsList.inc.c"
};

Vec3s spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009548_PathList_0200953C_Points[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009548_PathList_0200953C_Points.inc.c"
};

Path spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009548_PathList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020090F0_Cmds_02009548_PathList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_02009550_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_02009550_Cmds_020095B0_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_02009550_Cmds_020095B0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds_020095B0_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_02009550_Cmds_020096B0_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_02009550_Cmds_020096B0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds_020096B0_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_02009550_Cmds_02009740_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_02009550_Cmds_02009740_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds_02009740_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_02009550_Cmds_02009748_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds_02009748_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_02009550_Cmds_02009768_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds_02009768_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_02009550_Cmds_02009784_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_02009550_Cmds_02009784_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009550_Cmds_02009784_EnvLightSettingsList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_020099A0_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009A08_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009A08_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009A08_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009B08_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009B08_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009B08_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009B98_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009B98_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009B98_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BA0_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BA0_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BC0_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BC0_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BDC_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BDC_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009BDC_EnvLightSettingsList.inc.c"
};

Vec3s spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009CF8_PathList_02009CE4_Points[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009CF8_PathList_02009CE4_Points.inc.c"
};

Path spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009CF8_PathList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_020099A0_Cmds_02009CF8_PathList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_02009D00_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009D68_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009D68_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009D68_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009D78_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009D78_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009D78_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E08_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E08_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E08_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E10_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E10_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E14_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E14_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E28_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E28_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009D00_Cmds_02009E28_EnvLightSettingsList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_02009E80_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009EE8_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009EE8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009EE8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009EF8_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009EF8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009EF8_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F88_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F88_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F88_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F90_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F90_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F94_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009F94_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009FA8_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009FA8_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_02009E80_Cmds_02009FA8_EnvLightSettingsList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_0200A060_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A0C8_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A0C8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A0C8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A0D8_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A0D8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A0D8_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A168_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A168_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A168_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A170_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A170_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A174_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A174_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A188_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A188_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A060_Cmds_0200A188_EnvLightSettingsList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_0200A240_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A2A8_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A2A8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A2A8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A2B8_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A2B8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A2B8_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A348_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A348_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A348_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A350_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A350_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A354_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A354_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A368_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A368_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A240_Cmds_0200A368_EnvLightSettingsList.inc.c"
};

SceneCmd spot01_scene_02000070_AltHeaders_0200A420_Cmds[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds.inc.c"
};

ActorEntry spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A488_PlayerEntryList[LENGTH_spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A488_PlayerEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A488_PlayerEntryList.inc.c"
};

TransitionActorEntry spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A498_TransitionActorEntryList[LENGTH_spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A498_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A498_TransitionActorEntryList.inc.c"
};

RomFile spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A528_RoomList[LENGTH_spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A528_RoomList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A528_RoomList.inc.c"
};

Spawn spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A530_SpawnList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A530_SpawnList.inc.c"
};

s16 spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A534_ExitList[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A534_ExitList.inc.c"
};

EnvLightSettings spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A548_EnvLightSettingsList[LENGTH_spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A548_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot01/spot01_scene_02000070_AltHeaders_0200A420_Cmds_0200A548_EnvLightSettingsList.inc.c"
};

CutsceneData gKakarikoVillageIntroCs[] = {
#include "assets/scenes/overworld/spot01/gKakarikoVillageIntroCs.csdata.inc.c"
};

u64 spot01_scene_0000A890_TLUT[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000A890_TLUT.tlut.rgba16.inc.c"
};

u64 spot01_scene_0000AA48_TLUT[] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000ED70_CITex.tlut.rgba16.inc.c"
};

u64 spot01_scene_0000AA70_Tex[TEX_LEN(u64, spot01_scene_0000AA70_Tex_WIDTH, spot01_scene_0000AA70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000AA70_Tex.rgba16.inc.c"
};

u64 spot01_scene_0000B270_CITex[TEX_LEN(u64, spot01_scene_0000B270_CITex_WIDTH, spot01_scene_0000B270_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000B270_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000B370_CITex[TEX_LEN(u64, spot01_scene_0000B370_CITex_WIDTH, spot01_scene_0000B370_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000B370_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000B770_CITex[TEX_LEN(u64, spot01_scene_0000B770_CITex_WIDTH, spot01_scene_0000B770_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000B770_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000BB70_Tex[TEX_LEN(u64, spot01_scene_0000BB70_Tex_WIDTH, spot01_scene_0000BB70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000BB70_Tex.rgba16.inc.c"
};

u64 spot01_scene_0000BF70_Tex[TEX_LEN(u64, spot01_scene_0000BF70_Tex_WIDTH, spot01_scene_0000BF70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000BF70_Tex.rgba16.inc.c"
};

u64 spot01_scene_0000C770_CITex[TEX_LEN(u64, spot01_scene_0000C770_CITex_WIDTH, spot01_scene_0000C770_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000C770_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000C970_CITex[TEX_LEN(u64, spot01_scene_0000C970_CITex_WIDTH, spot01_scene_0000C970_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000C970_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000CD70_CITex[TEX_LEN(u64, spot01_scene_0000CD70_CITex_WIDTH, spot01_scene_0000CD70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000CD70_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000D570_Tex[TEX_LEN(u64, spot01_scene_0000D570_Tex_WIDTH, spot01_scene_0000D570_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000D570_Tex.i4.inc.c"
};

u64 spot01_scene_0000DD70_Tex[TEX_LEN(u64, spot01_scene_0000DD70_Tex_WIDTH, spot01_scene_0000DD70_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000DD70_Tex.i4.inc.c"
};

u64 spot01_scene_0000E570_CITex[TEX_LEN(u64, spot01_scene_0000E570_CITex_WIDTH, spot01_scene_0000E570_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000E570_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_0000ED70_CITex[TEX_LEN(u64, spot01_scene_0000ED70_CITex_WIDTH, spot01_scene_0000ED70_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000ED70_CITex.ci4.inc.c"
};

u64 spot01_scene_0000F570_Tex[TEX_LEN(u64, spot01_scene_0000F570_Tex_WIDTH, spot01_scene_0000F570_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000F570_Tex.rgba16.inc.c"
};

u64 spot01_scene_0000F970_Tex[TEX_LEN(u64, spot01_scene_0000F970_Tex_WIDTH, spot01_scene_0000F970_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0000F970_Tex.rgba16.inc.c"
};

u64 spot01_scene_00010170_Tex[TEX_LEN(u64, spot01_scene_00010170_Tex_WIDTH, spot01_scene_00010170_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00010170_Tex.rgba16.inc.c"
};

u64 spot01_scene_00010970_Tex[TEX_LEN(u64, spot01_scene_00010970_Tex_WIDTH, spot01_scene_00010970_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00010970_Tex.rgba16.inc.c"
};

u64 spot01_scene_00011970_Tex[TEX_LEN(u64, spot01_scene_00011970_Tex_WIDTH, spot01_scene_00011970_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00011970_Tex.rgba16.inc.c"
};

u64 spot01_scene_00012970_CITex[TEX_LEN(u64, spot01_scene_00012970_CITex_WIDTH, spot01_scene_00012970_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00012970_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_00012B70_Tex[TEX_LEN(u64, spot01_scene_00012B70_Tex_WIDTH, spot01_scene_00012B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00012B70_Tex.rgba16.inc.c"
};

u64 spot01_scene_00013B70_Tex[TEX_LEN(u64, spot01_scene_00013B70_Tex_WIDTH, spot01_scene_00013B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00013B70_Tex.rgba16.inc.c"
};

u64 spot01_scene_00014370_Tex[TEX_LEN(u64, spot01_scene_00014370_Tex_WIDTH, spot01_scene_00014370_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00014370_Tex.ia4.inc.c"
};

u64 spot01_scene_00014770_Tex[TEX_LEN(u64, spot01_scene_00014770_Tex_WIDTH, spot01_scene_00014770_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00014770_Tex.ia4.inc.c"
};

u64 spot01_scene_00014B70_CITex[TEX_LEN(u64, spot01_scene_00014B70_CITex_WIDTH, spot01_scene_00014B70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00014B70_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_00014F70_CITex[TEX_LEN(u64, spot01_scene_00014F70_CITex_WIDTH, spot01_scene_00014F70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00014F70_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_00015370_Tex[TEX_LEN(u64, spot01_scene_00015370_Tex_WIDTH, spot01_scene_00015370_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00015370_Tex.ia4.inc.c"
};

u64 gKakarikoVillageDayWindowTex[TEX_LEN(u64, gKakarikoVillageDayWindowTex_WIDTH, gKakarikoVillageDayWindowTex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/gKakarikoVillageDayWindowTex.rgba16.inc.c"
};

u64 gKakarikoVillageNightWindowTex[TEX_LEN(u64, gKakarikoVillageNightWindowTex_WIDTH, gKakarikoVillageNightWindowTex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/gKakarikoVillageNightWindowTex.rgba16.inc.c"
};

u64 spot01_scene_00017B70_CITex[TEX_LEN(u64, spot01_scene_00017B70_CITex_WIDTH, spot01_scene_00017B70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00017B70_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_00018370_Tex[TEX_LEN(u64, spot01_scene_00018370_Tex_WIDTH, spot01_scene_00018370_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00018370_Tex.i4.inc.c"
};

u64 spot01_scene_00018B70_Tex[TEX_LEN(u64, spot01_scene_00018B70_Tex_WIDTH, spot01_scene_00018B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00018B70_Tex.rgba16.inc.c"
};

u64 spot01_scene_00019370_Tex[TEX_LEN(u64, spot01_scene_00019370_Tex_WIDTH, spot01_scene_00019370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00019370_Tex.rgba16.inc.c"
};

u64 spot01_scene_00019B70_CITex[TEX_LEN(u64, spot01_scene_00019B70_CITex_WIDTH, spot01_scene_00019B70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00019B70_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

u64 spot01_scene_00019F70_Tex[TEX_LEN(u64, spot01_scene_00019F70_Tex_WIDTH, spot01_scene_00019F70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_00019F70_Tex.rgba16.inc.c"
};

u64 spot01_scene_0001A770_Tex[TEX_LEN(u64, spot01_scene_0001A770_Tex_WIDTH, spot01_scene_0001A770_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0001A770_Tex.i4.inc.c"
};

u64 spot01_scene_0001AF70_Tex[TEX_LEN(u64, spot01_scene_0001AF70_Tex_WIDTH, spot01_scene_0001AF70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0001AF70_Tex.rgba16.inc.c"
};

u64 spot01_scene_0001B770_Tex[TEX_LEN(u64, spot01_scene_0001B770_Tex_WIDTH, spot01_scene_0001B770_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0001B770_Tex.rgba16.inc.c"
};

u64 spot01_scene_0001BF70_CITex[TEX_LEN(u64, spot01_scene_0001BF70_CITex_WIDTH, spot01_scene_0001BF70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot01/spot01_scene_0001BF70_CITex.ci8.tlut_spot01_scene_0000A890_TLUT.inc.c"
};

