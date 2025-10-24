#include "nakaniwa_scene.h"
#include "assets/scenes/indoors/nakaniwa/nakaniwa_room_0.h"

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

SceneCmd nakaniwa_scene[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene.inc.c"
};

SceneCmd* nakaniwa_scene_02000060_AltHeaders[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders.inc.c"
};

ActorEntry nakaniwa_scene_02000078_PlayerEntryList[LENGTH_nakaniwa_scene_02000078_PlayerEntryList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000078_PlayerEntryList.inc.c"
};

RomFile nakaniwa_scene_02000098_RoomList[LENGTH_nakaniwa_scene_02000098_RoomList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000098_RoomList.inc.c"
};

Spawn nakaniwa_scene_020000A0_SpawnList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_020000A0_SpawnList.inc.c"
};

s16 nakaniwa_scene_020000A4_ExitList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_020000A4_ExitList.inc.c"
};

EnvLightSettings nakaniwa_scene_020000A8_EnvLightSettingsList[LENGTH_nakaniwa_scene_020000A8_EnvLightSettingsList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_020000A8_EnvLightSettingsList.inc.c"
};

CutsceneData gZeldasCourtyardGanonCs[] = {
#include "assets/scenes/indoors/nakaniwa/gZeldasCourtyardGanonCs.csdata.inc.c"
};

CutsceneData gZeldasCourtyardWindowCs[] = {
#include "assets/scenes/indoors/nakaniwa/gZeldasCourtyardWindowCs.csdata.inc.c"
};

BgCamInfo nakaniwa_scene_02001BC8_BgCamList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02001BC8_BgCamList.inc.c"
};

SurfaceType nakaniwa_scene_02001BC8_SurfaceTypes[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02001BC8_SurfaceTypes.inc.c"
};

CollisionPoly nakaniwa_scene_02001BC8_PolyList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02001BC8_PolyList.inc.c"
};

Vec3s nakaniwa_scene_02001BC8_VtxList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02001BC8_VtxList.inc.c"
};

WaterBox nakaniwa_scene_02001BC8_WaterBoxes[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02001BC8_WaterBoxes.inc.c"
};

CollisionHeader nakaniwa_scene_02001BC8_Col = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02001BC8_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gZeldasCourtyardTheEndCs[] = {
#include "assets/scenes/indoors/nakaniwa/pal/gZeldasCourtyardTheEndCs.csdata.inc.c"
};
#else
CutsceneData gZeldasCourtyardTheEndCs[] = {
#include "assets/scenes/indoors/nakaniwa/ntsc/gZeldasCourtyardTheEndCs.csdata.inc.c"
};
#endif

CutsceneData gZeldasCourtyardLullabyCs[] = {
#include "assets/scenes/indoors/nakaniwa/gZeldasCourtyardLullabyCs.csdata.inc.c"
};

CutsceneData gZeldasCourtyardLullabyUnusedCs[] = {
#include "assets/scenes/indoors/nakaniwa/gZeldasCourtyardLullabyUnusedCs.csdata.inc.c"
};

SceneCmd nakaniwa_scene_02000060_AltHeaders_02003720_Cmds[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_02003720_Cmds.inc.c"
};

ActorEntry nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003780_PlayerEntryList[LENGTH_nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003780_PlayerEntryList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003780_PlayerEntryList.inc.c"
};

RomFile nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003790_RoomList[LENGTH_nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003790_RoomList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003790_RoomList.inc.c"
};

Spawn nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003798_SpawnList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_02003798_SpawnList.inc.c"
};

s16 nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_0200379C_ExitList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_0200379C_ExitList.inc.c"
};

EnvLightSettings nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_020037A0_EnvLightSettingsList[LENGTH_nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_020037A0_EnvLightSettingsList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_02003720_Cmds_020037A0_EnvLightSettingsList.inc.c"
};

SceneCmd nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds.inc.c"
};

ActorEntry nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003830_PlayerEntryList[LENGTH_nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003830_PlayerEntryList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003830_PlayerEntryList.inc.c"
};

RomFile nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003840_RoomList[LENGTH_nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003840_RoomList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003840_RoomList.inc.c"
};

Spawn nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003848_SpawnList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003848_SpawnList.inc.c"
};

s16 nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_0200384C_ExitList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_0200384C_ExitList.inc.c"
};

EnvLightSettings nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003850_EnvLightSettingsList[LENGTH_nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003850_EnvLightSettingsList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020037D0_Cmds_02003850_EnvLightSettingsList.inc.c"
};

SceneCmd nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds.inc.c"
};

ActorEntry nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003910_PlayerEntryList[LENGTH_nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003910_PlayerEntryList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003910_PlayerEntryList.inc.c"
};

RomFile nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003920_RoomList[LENGTH_nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003920_RoomList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003920_RoomList.inc.c"
};

Spawn nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003928_SpawnList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003928_SpawnList.inc.c"
};

s16 nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_0200392C_ExitList[] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_0200392C_ExitList.inc.c"
};

EnvLightSettings nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003930_EnvLightSettingsList[LENGTH_nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003930_EnvLightSettingsList] = {
#include "assets/scenes/indoors/nakaniwa/nakaniwa_scene_02000060_AltHeaders_020038B0_Cmds_02003930_EnvLightSettingsList.inc.c"
};

CutsceneData gZeldasCourtyardMeetCs[] = {
#include "assets/scenes/indoors/nakaniwa/gZeldasCourtyardMeetCs.csdata.inc.c"
};
