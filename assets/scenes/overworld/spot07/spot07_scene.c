#include "spot07_scene.h"

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

SceneCmd spot07_scene[] = {
#include "assets/scenes/overworld/spot07/spot07_scene.inc.c"
};

SceneCmd* spot07_scene_02000070_AltHeaders[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders.inc.c"
};

ActorEntry spot07_scene_02000080_PlayerEntryList[LENGTH_spot07_scene_02000080_PlayerEntryList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000080_PlayerEntryList.inc.c"
};

TransitionActorEntry spot07_scene_020000D0_TransitionActorEntryList[LENGTH_spot07_scene_020000D0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_020000D0_TransitionActorEntryList.inc.c"
};

RomFile spot07_scene_020000F0_RoomList[LENGTH_spot07_scene_020000F0_RoomList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_020000F0_RoomList.inc.c"
};

Spawn spot07_scene_02000100_SpawnList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000100_SpawnList.inc.c"
};

s16 spot07_scene_0200010C_ExitList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_0200010C_ExitList.inc.c"
};

EnvLightSettings spot07_scene_02000114_EnvLightSettingsList[LENGTH_spot07_scene_02000114_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000114_EnvLightSettingsList.inc.c"
};

Vec3s spot07_scenePathList_000234_0200021C_Points[] = {
#include "assets/scenes/overworld/spot07/spot07_scenePathList_000234_0200021C_Points.inc.c"
};

Vec3s spot07_scenePathList_000234_02000228_Points[] = {
#include "assets/scenes/overworld/spot07/spot07_scenePathList_000234_02000228_Points.inc.c"
};

Path spot07_scenePathList_000234[] = {
#include "assets/scenes/overworld/spot07/spot07_scenePathList_000234.inc.c"
};

Vec3s spot07_scene_02003824_BgCamList_02000250_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_BgCamList_02000250_BgCamFuncData.inc.c"
};

BgCamInfo spot07_scene_02003824_BgCamList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_BgCamList.inc.c"
};

SurfaceType spot07_scene_02003824_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_SurfaceTypes.inc.c"
};

CollisionPoly spot07_scene_02003824_PolyList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_PolyList.inc.c"
};

Vec3s spot07_scene_02003824_VtxList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_VtxList.inc.c"
};

WaterBox spot07_scene_02003824_WaterBoxes[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_WaterBoxes.inc.c"
};

CollisionHeader spot07_scene_02003824_Col = {
#include "assets/scenes/overworld/spot07/spot07_scene_02003824_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gZorasDomainCreditsCs[] = {
#include "assets/scenes/overworld/spot07/pal/gZorasDomainCreditsCs.csdata.inc.c"
};
#else
CutsceneData gZorasDomainCreditsCs[] = {
#include "assets/scenes/overworld/spot07/ntsc/gZorasDomainCreditsCs.csdata.inc.c"
};
#endif

SceneCmd spot07_scene_02000070_AltHeaders_02003A50_Cmds[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds.inc.c"
};

ActorEntry spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003AB8_PlayerEntryList[LENGTH_spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003AB8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003AB8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B08_TransitionActorEntryList[LENGTH_spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B08_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B08_TransitionActorEntryList.inc.c"
};

RomFile spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B28_RoomList[LENGTH_spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B28_RoomList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B28_RoomList.inc.c"
};

Spawn spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B38_SpawnList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B38_SpawnList.inc.c"
};

s16 spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B44_ExitList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B44_ExitList.inc.c"
};

EnvLightSettings spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B4C_EnvLightSettingsList[LENGTH_spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B4C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003B4C_EnvLightSettingsList.inc.c"
};

Vec3s spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003C60_PathList_02003C54_Points[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003C60_PathList_02003C54_Points.inc.c"
};

Path spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003C60_PathList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003A50_Cmds_02003C60_PathList.inc.c"
};

SceneCmd spot07_scene_02000070_AltHeaders_02003C70_Cmds[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds.inc.c"
};

ActorEntry spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003CD8_PlayerEntryList[LENGTH_spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003CD8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003CD8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003CE8_TransitionActorEntryList[LENGTH_spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003CE8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003CE8_TransitionActorEntryList.inc.c"
};

RomFile spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D08_RoomList[LENGTH_spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D08_RoomList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D08_RoomList.inc.c"
};

Spawn spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D18_SpawnList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D18_SpawnList.inc.c"
};

s16 spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D1C_ExitList[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D1C_ExitList.inc.c"
};

EnvLightSettings spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D24_EnvLightSettingsList[LENGTH_spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D24_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot07/spot07_scene_02000070_AltHeaders_02003C70_Cmds_02003D24_EnvLightSettingsList.inc.c"
};

CutsceneData gZorasDomainIntroCs[] = {
#include "assets/scenes/overworld/spot07/gZorasDomainIntroCs.csdata.inc.c"
};

u64 spot07_scene_00003F80_TLUT[] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00003F80_TLUT.tlut.rgba16.inc.c"
};

u64 spot07_scene_00003FA8_Tex[TEX_LEN(u64, spot07_scene_00003FA8_Tex_WIDTH, spot07_scene_00003FA8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00003FA8_Tex.rgba16.inc.c"
};

u64 spot07_scene_00004FA8_CITex[TEX_LEN(u64, spot07_scene_00004FA8_CITex_WIDTH, spot07_scene_00004FA8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00004FA8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_000053A8_CITex[TEX_LEN(u64, spot07_scene_000053A8_CITex_WIDTH, spot07_scene_000053A8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_000053A8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_000057A8_CITex[TEX_LEN(u64, spot07_scene_000057A8_CITex_WIDTH, spot07_scene_000057A8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_000057A8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00005BA8_CITex[TEX_LEN(u64, spot07_scene_00005BA8_CITex_WIDTH, spot07_scene_00005BA8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00005BA8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00005FA8_CITex[TEX_LEN(u64, spot07_scene_00005FA8_CITex_WIDTH, spot07_scene_00005FA8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00005FA8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_000063A8_CITex[TEX_LEN(u64, spot07_scene_000063A8_CITex_WIDTH, spot07_scene_000063A8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_000063A8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_000067A8_CITex[TEX_LEN(u64, spot07_scene_000067A8_CITex_WIDTH, spot07_scene_000067A8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_000067A8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00006BA8_CITex[TEX_LEN(u64, spot07_scene_00006BA8_CITex_WIDTH, spot07_scene_00006BA8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00006BA8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00006FA8_Tex[TEX_LEN(u64, spot07_scene_00006FA8_Tex_WIDTH, spot07_scene_00006FA8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00006FA8_Tex.rgba16.inc.c"
};

u64 spot07_scene_000077A8_CITex[TEX_LEN(u64, spot07_scene_000077A8_CITex_WIDTH, spot07_scene_000077A8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_000077A8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00007BA8_CITex[TEX_LEN(u64, spot07_scene_00007BA8_CITex_WIDTH, spot07_scene_00007BA8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00007BA8_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00007FA8_Tex[TEX_LEN(u64, spot07_scene_00007FA8_Tex_WIDTH, spot07_scene_00007FA8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00007FA8_Tex.rgba16.inc.c"
};

u64 spot07_scene_000087A8_Tex[TEX_LEN(u64, spot07_scene_000087A8_Tex_WIDTH, spot07_scene_000087A8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_000087A8_Tex.ia4.inc.c"
};

u64 gZorasDomainDayEntranceTex[TEX_LEN(u64, gZorasDomainDayEntranceTex_WIDTH, gZorasDomainDayEntranceTex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot07/gZorasDomainDayEntranceTex.ia8.inc.c"
};

u64 gZorasDomainNightEntranceTex[TEX_LEN(u64, gZorasDomainNightEntranceTex_WIDTH, gZorasDomainNightEntranceTex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot07/gZorasDomainNightEntranceTex.ia8.inc.c"
};

u64 spot07_scene_00009028_CITex[TEX_LEN(u64, spot07_scene_00009028_CITex_WIDTH, spot07_scene_00009028_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00009028_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};

u64 spot07_scene_00009428_CITex[TEX_LEN(u64, spot07_scene_00009428_CITex_WIDTH, spot07_scene_00009428_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot07/spot07_scene_00009428_CITex.ci4.tlut_spot07_scene_00003F80_TLUT.inc.c"
};
