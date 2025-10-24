#include "ice_doukutu_scene.h"

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

SceneCmd ice_doukutu_scene[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.inc.c"
};

SceneCmd* ice_doukutu_scene_02000068_AltHeaders[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders.inc.c"
};

ActorEntry ice_doukutu_scene_02000078_PlayerEntryList[LENGTH_ice_doukutu_scene_02000078_PlayerEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000078_PlayerEntryList.inc.c"
};

TransitionActorEntry ice_doukutu_scene_02000098_TransitionActorEntryList[LENGTH_ice_doukutu_scene_02000098_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000098_TransitionActorEntryList.inc.c"
};

RomFile ice_doukutu_scene_02000158_RoomList[LENGTH_ice_doukutu_scene_02000158_RoomList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000158_RoomList.inc.c"
};

Spawn ice_doukutu_scene_020001B8_SpawnList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_020001B8_SpawnList.inc.c"
};

s16 ice_doukutu_scene_020001BC_ExitList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_020001BC_ExitList.inc.c"
};

EnvLightSettings ice_doukutu_scene_020001C0_EnvLightSettingsList[LENGTH_ice_doukutu_scene_020001C0_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_020001C0_EnvLightSettingsList.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gIceCavernSerenadeCs[] = {
#include "assets/scenes/dungeons/ice_doukutu/pal/gIceCavernSerenadeCs.csdata.inc.c"
};
#else
CutsceneData gIceCavernSerenadeCs[] = {
#include "assets/scenes/dungeons/ice_doukutu/ntsc/gIceCavernSerenadeCs.csdata.inc.c"
};
#endif

BgCamInfo ice_doukutu_scene_0200F5A8_BgCamList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_BgCamList.inc.c"
};

SurfaceType ice_doukutu_scene_0200F5A8_SurfaceTypes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_SurfaceTypes.inc.c"
};

CollisionPoly ice_doukutu_scene_0200F5A8_PolyList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_PolyList.inc.c"
};

Vec3s ice_doukutu_scene_0200F5A8_VtxList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_VtxList.inc.c"
};

WaterBox ice_doukutu_scene_0200F5A8_WaterBoxes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_WaterBoxes.inc.c"
};

CollisionHeader ice_doukutu_scene_0200F5A8_Col = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_Col.inc.c"
};

SceneCmd ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds.inc.c"
};

ActorEntry ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F648_PlayerEntryList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F648_PlayerEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F648_PlayerEntryList.inc.c"
};

TransitionActorEntry ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F658_TransitionActorEntryList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F658_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F658_TransitionActorEntryList.inc.c"
};

RomFile ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F718_RoomList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F718_RoomList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F718_RoomList.inc.c"
};

Spawn ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F778_SpawnList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F778_SpawnList.inc.c"
};

s16 ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F77C_ExitList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F77C_ExitList.inc.c"
};

EnvLightSettings ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F780_EnvLightSettingsList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F780_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F780_EnvLightSettingsList.inc.c"
};

u64 ice_doukutu_scene_0000F7E0_TLUT[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0000F7E0_TLUT.tlut.rgba16.inc.c"
};

u64 gIceCavernNightEntranceTex[TEX_LEN(u64, gIceCavernNightEntranceTex_WIDTH, gIceCavernNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernNightEntranceTex.ia16.inc.c"
};

u64 gIceCavernDayEntranceTex[TEX_LEN(u64, gIceCavernDayEntranceTex_WIDTH, gIceCavernDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernDayEntranceTex.ia16.inc.c"
};

u64 ice_doukutu_scene_0000FC00_Tex[TEX_LEN(u64, ice_doukutu_scene_0000FC00_Tex_WIDTH, ice_doukutu_scene_0000FC00_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0000FC00_Tex.i8.inc.c"
};

u64 ice_doukutu_scene_00010000_Tex[TEX_LEN(u64, ice_doukutu_scene_00010000_Tex_WIDTH, ice_doukutu_scene_00010000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_00010000_Tex.rgba16.inc.c"
};

u64 ice_doukutu_scene_00010800_Tex[TEX_LEN(u64, ice_doukutu_scene_00010800_Tex_WIDTH, ice_doukutu_scene_00010800_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_00010800_Tex.rgba16.inc.c"
};

u64 ice_doukutu_scene_00010A00_Tex[TEX_LEN(u64, ice_doukutu_scene_00010A00_Tex_WIDTH, ice_doukutu_scene_00010A00_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_00010A00_Tex.i8.inc.c"
};

u64 ice_doukutu_scene_00010E00_Tex[TEX_LEN(u64, ice_doukutu_scene_00010E00_Tex_WIDTH, ice_doukutu_scene_00010E00_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_00010E00_Tex.rgba16.inc.c"
};

