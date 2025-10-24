#include "spot18_scene.h"

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

SceneCmd spot18_scene[] = {
#include "assets/scenes/overworld/spot18/spot18_scene.inc.c"
};

SceneCmd* spot18_scene_02000070_AltHeaders[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders.inc.c"
};

ActorEntry spot18_scene_02000084_PlayerEntryList[LENGTH_spot18_scene_02000084_PlayerEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000084_PlayerEntryList.inc.c"
};

TransitionActorEntry spot18_scene_020000C4_TransitionActorEntryList[LENGTH_spot18_scene_020000C4_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020000C4_TransitionActorEntryList.inc.c"
};

RomFile spot18_scene_020000F4_RoomList[LENGTH_spot18_scene_020000F4_RoomList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020000F4_RoomList.inc.c"
};

Spawn spot18_scene_02000114_SpawnList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000114_SpawnList.inc.c"
};

s16 spot18_scene_0200011C_ExitList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_0200011C_ExitList.inc.c"
};

EnvLightSettings spot18_scene_02000124_EnvLightSettingsList[LENGTH_spot18_scene_02000124_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000124_EnvLightSettingsList.inc.c"
};

Vec3s spot18_scene_02000190_PathList_0200013C_Points[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000190_PathList_0200013C_Points.inc.c"
};

Path spot18_scene_02000190_PathList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000190_PathList.inc.c"
};

Vec3s spot18_scene_020059AC_BgCamList_020001A0_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020059AC_BgCamList_020001A0_BgCamFuncData.inc.c"
};

BgCamInfo spot18_scene_020059AC_BgCamList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020059AC_BgCamList.inc.c"
};

SurfaceType spot18_scene_020059AC_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020059AC_SurfaceTypes.inc.c"
};

CollisionPoly spot18_scene_020059AC_PolyList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020059AC_PolyList.inc.c"
};

Vec3s spot18_scene_020059AC_VtxList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_020059AC_VtxList.inc.c"
};

CollisionHeader spot18_scene_020059AC_Col = {
#include "assets/scenes/overworld/spot18/spot18_scene_020059AC_Col.inc.c"
};

CutsceneData gGoronCityDaruniaCorrectSongCs[] = {
#include "assets/scenes/overworld/spot18/gGoronCityDaruniaCorrectSongCs.csdata.inc.c"
};

CutsceneData gGoronCityDaruniaDancingCs[] = {
#include "assets/scenes/overworld/spot18/gGoronCityDaruniaDancingCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gGoronCityCreditsCs[] = {
#include "assets/scenes/overworld/spot18/pal/gGoronCityCreditsCs.csdata.inc.c"
};
#else
CutsceneData gGoronCityCreditsCs[] = {
#include "assets/scenes/overworld/spot18/ntsc/gGoronCityCreditsCs.csdata.inc.c"
};
#endif

SceneCmd spot18_scene_02000070_AltHeaders_02007A40_Cmds[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds.inc.c"
};

ActorEntry spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007AA8_PlayerEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007AA8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007AA8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007AE8_TransitionActorEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007AE8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007AE8_TransitionActorEntryList.inc.c"
};

RomFile spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B18_RoomList[LENGTH_spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B18_RoomList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B18_RoomList.inc.c"
};

Spawn spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B38_SpawnList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B38_SpawnList.inc.c"
};

s16 spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B40_ExitList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B40_ExitList.inc.c"
};

EnvLightSettings spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B48_EnvLightSettingsList[LENGTH_spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B48_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007B48_EnvLightSettingsList.inc.c"
};

Vec3s spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007BA4_PathList_02007B60_Points[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007BA4_PathList_02007B60_Points.inc.c"
};

Path spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007BA4_PathList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007A40_Cmds_02007BA4_PathList.inc.c"
};

SceneCmd spot18_scene_02000070_AltHeaders_02007BB0_Cmds[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds.inc.c"
};

ActorEntry spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C20_PlayerEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C20_PlayerEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C20_PlayerEntryList.inc.c"
};

ActorEntry spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C30_ActorEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C30_ActorEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C30_ActorEntryList.inc.c"
};

TransitionActorEntry spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C40_TransitionActorEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C40_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C40_TransitionActorEntryList.inc.c"
};

RomFile spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C70_RoomList[LENGTH_spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C70_RoomList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C70_RoomList.inc.c"
};

Spawn spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C90_SpawnList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C90_SpawnList.inc.c"
};

s16 spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C94_ExitList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C94_ExitList.inc.c"
};

EnvLightSettings spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C9C_EnvLightSettingsList[LENGTH_spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C9C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007BB0_Cmds_02007C9C_EnvLightSettingsList.inc.c"
};

SceneCmd spot18_scene_02000070_AltHeaders_02007D00_Cmds[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds.inc.c"
};

ActorEntry spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007D68_PlayerEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007D68_PlayerEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007D68_PlayerEntryList.inc.c"
};

TransitionActorEntry spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007D78_TransitionActorEntryList[LENGTH_spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007D78_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007D78_TransitionActorEntryList.inc.c"
};

RomFile spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DA8_RoomList[LENGTH_spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DA8_RoomList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DA8_RoomList.inc.c"
};

Spawn spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DC8_SpawnList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DC8_SpawnList.inc.c"
};

s16 spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DCC_ExitList[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DCC_ExitList.inc.c"
};

EnvLightSettings spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DD4_EnvLightSettingsList[LENGTH_spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DD4_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot18/spot18_scene_02000070_AltHeaders_02007D00_Cmds_02007DD4_EnvLightSettingsList.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gGoronCityDaruniaWrongSongCs[] = {
#include "assets/scenes/overworld/spot18/pal/gGoronCityDaruniaWrongSongCs.csdata.inc.c"
};
#else
CutsceneData gGoronCityDaruniaWrongSongCs[] = {
#include "assets/scenes/overworld/spot18/ntsc/gGoronCityDaruniaWrongSongCs.csdata.inc.c"
};
#endif

CutsceneData gGoronCityIntroCs[] = {
#include "assets/scenes/overworld/spot18/gGoronCityIntroCs.csdata.inc.c"
};

u64 spot18_scene_00008540_TLUT[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_00008540_TLUT.tlut.rgba16.inc.c"
};

u8 spot18_scene_unaccounted_008740[] = {
#include "assets/scenes/overworld/spot18/spot18_scene_unaccounted_008740.bin.inc.c"
};

u64 spot18_scene_00008748_Tex[TEX_LEN(u64, spot18_scene_00008748_Tex_WIDTH, spot18_scene_00008748_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot18/spot18_scene_00008748_Tex.rgba16.inc.c"
};

u64 gGoronCityNightEntranceTex[TEX_LEN(u64, gGoronCityNightEntranceTex_WIDTH, gGoronCityNightEntranceTex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot18/gGoronCityNightEntranceTex.ia8.inc.c"
};

u64 spot18_scene_00008F88_CITex[TEX_LEN(u64, spot18_scene_00008F88_CITex_WIDTH, spot18_scene_00008F88_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot18/spot18_scene_00008F88_CITex.ci8.tlut_spot18_scene_00008540_TLUT.inc.c"
};

u64 gGoronCityDayEntranceTex[TEX_LEN(u64, gGoronCityDayEntranceTex_WIDTH, gGoronCityDayEntranceTex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot18/gGoronCityDayEntranceTex.ia8.inc.c"
};

u64 spot18_scene_000097C8_Tex[TEX_LEN(u64, spot18_scene_000097C8_Tex_WIDTH, spot18_scene_000097C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot18/spot18_scene_000097C8_Tex.rgba16.inc.c"
};

u64 spot18_scene_00009BC8_CITex[TEX_LEN(u64, spot18_scene_00009BC8_CITex_WIDTH, spot18_scene_00009BC8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot18/spot18_scene_00009BC8_CITex.ci8.tlut_spot18_scene_00008540_TLUT.inc.c"
};
