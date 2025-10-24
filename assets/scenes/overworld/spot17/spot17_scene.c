#include "spot17_scene.h"

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

SceneCmd spot17_scene[] = {
#include "assets/scenes/overworld/spot17/spot17_scene.inc.c"
};

SceneCmd* spot17_scene_02000068_AltHeaders[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders.inc.c"
};

ActorEntry spot17_scene_0200007C_PlayerEntryList[LENGTH_spot17_scene_0200007C_PlayerEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0200007C_PlayerEntryList.inc.c"
};

TransitionActorEntry spot17_scene_020000CC_TransitionActorEntryList[LENGTH_spot17_scene_020000CC_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020000CC_TransitionActorEntryList.inc.c"
};

RomFile spot17_scene_020000DC_RoomList[LENGTH_spot17_scene_020000DC_RoomList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020000DC_RoomList.inc.c"
};

Spawn spot17_scene_020000EC_SpawnList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020000EC_SpawnList.inc.c"
};

s16 spot17_scene_020000F8_ExitList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020000F8_ExitList.inc.c"
};

EnvLightSettings spot17_scene_02000100_EnvLightSettingsList[LENGTH_spot17_scene_02000100_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000100_EnvLightSettingsList.inc.c"
};

Vec3s spot17_scene_020045A4_BgCamList_02000210_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020045A4_BgCamList_02000210_BgCamFuncData.inc.c"
};

BgCamInfo spot17_scene_020045A4_BgCamList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020045A4_BgCamList.inc.c"
};

SurfaceType spot17_scene_020045A4_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020045A4_SurfaceTypes.inc.c"
};

CollisionPoly spot17_scene_020045A4_PolyList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020045A4_PolyList.inc.c"
};

Vec3s spot17_scene_020045A4_VtxList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_020045A4_VtxList.inc.c"
};

CollisionHeader spot17_scene_020045A4_Col = {
#include "assets/scenes/overworld/spot17/spot17_scene_020045A4_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gDeathMountainCraterBoleroCs[] = {
#include "assets/scenes/overworld/spot17/pal/gDeathMountainCraterBoleroCs.csdata.inc.c"
};
#else
CutsceneData gDeathMountainCraterBoleroCs[] = {
#include "assets/scenes/overworld/spot17/ntsc/gDeathMountainCraterBoleroCs.csdata.inc.c"
};
#endif

CutsceneData gDeathMountainCraterTitleCs[] = {
#include "assets/scenes/overworld/spot17/gDeathMountainCraterTitleCs.csdata.inc.c"
};

SceneCmd spot17_scene_02000068_AltHeaders_02007230_Cmds[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds.inc.c"
};

ActorEntry spot17_scene_02000068_AltHeaders_02007230_Cmds_02007298_PlayerEntryList[LENGTH_spot17_scene_02000068_AltHeaders_02007230_Cmds_02007298_PlayerEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_02007298_PlayerEntryList.inc.c"
};

TransitionActorEntry spot17_scene_02000068_AltHeaders_02007230_Cmds_020072F8_TransitionActorEntryList[LENGTH_spot17_scene_02000068_AltHeaders_02007230_Cmds_020072F8_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_020072F8_TransitionActorEntryList.inc.c"
};

RomFile spot17_scene_02000068_AltHeaders_02007230_Cmds_02007308_RoomList[LENGTH_spot17_scene_02000068_AltHeaders_02007230_Cmds_02007308_RoomList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_02007308_RoomList.inc.c"
};

Spawn spot17_scene_02000068_AltHeaders_02007230_Cmds_02007318_SpawnList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_02007318_SpawnList.inc.c"
};

s16 spot17_scene_02000068_AltHeaders_02007230_Cmds_02007324_ExitList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_02007324_ExitList.inc.c"
};

EnvLightSettings spot17_scene_02000068_AltHeaders_02007230_Cmds_0200732C_EnvLightSettingsList[LENGTH_spot17_scene_02000068_AltHeaders_02007230_Cmds_0200732C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_0200732C_EnvLightSettingsList.inc.c"
};

Vec3s spot17_scene_02000068_AltHeaders_02007230_Cmds_020074D0_PathList_02007434_Points[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_020074D0_PathList_02007434_Points.inc.c"
};

Path spot17_scene_02000068_AltHeaders_02007230_Cmds_020074D0_PathList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_02007230_Cmds_020074D0_PathList.inc.c"
};

SceneCmd spot17_scene_02000068_AltHeaders_020074E0_Cmds[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds.inc.c"
};

ActorEntry spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007548_PlayerEntryList[LENGTH_spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007548_PlayerEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007548_PlayerEntryList.inc.c"
};

TransitionActorEntry spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007558_TransitionActorEntryList[LENGTH_spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007558_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007558_TransitionActorEntryList.inc.c"
};

RomFile spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007568_RoomList[LENGTH_spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007568_RoomList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007568_RoomList.inc.c"
};

Spawn spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007578_SpawnList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007578_SpawnList.inc.c"
};

s16 spot17_scene_02000068_AltHeaders_020074E0_Cmds_0200757C_ExitList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds_0200757C_ExitList.inc.c"
};

u8 spot17_scene_unaccounted_007584[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_unaccounted_007584.bin.inc.c"
};

EnvLightSettings spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007588_EnvLightSettingsList[LENGTH_spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007588_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020074E0_Cmds_02007588_EnvLightSettingsList.inc.c"
};

SceneCmd spot17_scene_02000068_AltHeaders_020075E0_Cmds[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds.inc.c"
};

ActorEntry spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007648_PlayerEntryList[LENGTH_spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007648_PlayerEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007648_PlayerEntryList.inc.c"
};

TransitionActorEntry spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007658_TransitionActorEntryList[LENGTH_spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007658_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007658_TransitionActorEntryList.inc.c"
};

RomFile spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007668_RoomList[LENGTH_spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007668_RoomList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007668_RoomList.inc.c"
};

Spawn spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007678_SpawnList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007678_SpawnList.inc.c"
};

s16 spot17_scene_02000068_AltHeaders_020075E0_Cmds_0200767C_ExitList[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds_0200767C_ExitList.inc.c"
};

u8 spot17_scene_unaccounted_007684[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_unaccounted_007684.bin.inc.c"
};

EnvLightSettings spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007688_EnvLightSettingsList[LENGTH_spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007688_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot17/spot17_scene_02000068_AltHeaders_020075E0_Cmds_02007688_EnvLightSettingsList.inc.c"
};

CutsceneData gDeathMountainCraterIntroCs[] = {
#include "assets/scenes/overworld/spot17/gDeathMountainCraterIntroCs.csdata.inc.c"
};

u64 spot17_scene_000078A0_TLUT[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_000078A0_TLUT.tlut.rgba16.inc.c"
};

u8 spot17_scene_unaccounted_007AA0[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_unaccounted_007AA0.bin.inc.c"
};

u64 spot17_scene_00007AA8_TLUT[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000AEE8_CITex.tlut.rgba16.inc.c"
};

u64 spot17_scene_00007AC8_TLUT[] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000E0E8_CITex.tlut.rgba16.inc.c"
};

u64 spot17_scene_00007AE8_CITex[TEX_LEN(u64, spot17_scene_00007AE8_CITex_WIDTH, spot17_scene_00007AE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_00007AE8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_000082E8_CITex[TEX_LEN(u64, spot17_scene_000082E8_CITex_WIDTH, spot17_scene_000082E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_000082E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_000086E8_CITex[TEX_LEN(u64, spot17_scene_000086E8_CITex_WIDTH, spot17_scene_000086E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_000086E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_00008EE8_CITex[TEX_LEN(u64, spot17_scene_00008EE8_CITex_WIDTH, spot17_scene_00008EE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_00008EE8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_000096E8_CITex[TEX_LEN(u64, spot17_scene_000096E8_CITex_WIDTH, spot17_scene_000096E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_000096E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_00009EE8_Tex[TEX_LEN(u64, spot17_scene_00009EE8_Tex_WIDTH, spot17_scene_00009EE8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_00009EE8_Tex.rgba16.inc.c"
};

u64 spot17_scene_0000A6E8_Tex[TEX_LEN(u64, spot17_scene_0000A6E8_Tex_WIDTH, spot17_scene_0000A6E8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000A6E8_Tex.rgba16.inc.c"
};

u64 spot17_scene_0000AEE8_CITex[TEX_LEN(u64, spot17_scene_0000AEE8_CITex_WIDTH, spot17_scene_0000AEE8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000AEE8_CITex.ci4.inc.c"
};

u64 spot17_scene_0000B6E8_CITex[TEX_LEN(u64, spot17_scene_0000B6E8_CITex_WIDTH, spot17_scene_0000B6E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000B6E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000BEE8_CITex[TEX_LEN(u64, spot17_scene_0000BEE8_CITex_WIDTH, spot17_scene_0000BEE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000BEE8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000C6E8_Tex[TEX_LEN(u64, spot17_scene_0000C6E8_Tex_WIDTH, spot17_scene_0000C6E8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000C6E8_Tex.rgba16.inc.c"
};

u64 spot17_scene_0000D6E8_CITex[TEX_LEN(u64, spot17_scene_0000D6E8_CITex_WIDTH, spot17_scene_0000D6E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000D6E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000D8E8_CITex[TEX_LEN(u64, spot17_scene_0000D8E8_CITex_WIDTH, spot17_scene_0000D8E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000D8E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000E0E8_CITex[TEX_LEN(u64, spot17_scene_0000E0E8_CITex_WIDTH, spot17_scene_0000E0E8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000E0E8_CITex.ci4.inc.c"
};

u64 spot17_scene_0000E8E8_CITex[TEX_LEN(u64, spot17_scene_0000E8E8_CITex_WIDTH, spot17_scene_0000E8E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000E8E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000F0E8_CITex[TEX_LEN(u64, spot17_scene_0000F0E8_CITex_WIDTH, spot17_scene_0000F0E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000F0E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000F8E8_CITex[TEX_LEN(u64, spot17_scene_0000F8E8_CITex_WIDTH, spot17_scene_0000F8E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000F8E8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};

u64 spot17_scene_0000FCE8_CITex[TEX_LEN(u64, spot17_scene_0000FCE8_CITex_WIDTH, spot17_scene_0000FCE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot17/spot17_scene_0000FCE8_CITex.ci8.tlut_spot17_scene_000078A0_TLUT.inc.c"
};
