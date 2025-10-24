#include "spot12_scene.h"

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

SceneCmd spot12_scene[] = {
#include "assets/scenes/overworld/spot12/spot12_scene.inc.c"
};

SceneCmd* spot12_scene_02000068_AltHeaders[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders.inc.c"
};

ActorEntry spot12_scene_02000080_PlayerEntryList[LENGTH_spot12_scene_02000080_PlayerEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000080_PlayerEntryList.inc.c"
};

TransitionActorEntry spot12_scene_020001A0_TransitionActorEntryList[LENGTH_spot12_scene_020001A0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_020001A0_TransitionActorEntryList.inc.c"
};

RomFile spot12_scene_020001B0_RoomList[LENGTH_spot12_scene_020001B0_RoomList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_020001B0_RoomList.inc.c"
};

Spawn spot12_scene_020001C0_SpawnList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_020001C0_SpawnList.inc.c"
};

s16 spot12_scene_020001E4_ExitList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_020001E4_ExitList.inc.c"
};

EnvLightSettings spot12_scene_02000204_EnvLightSettingsList[LENGTH_spot12_scene_02000204_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000204_EnvLightSettingsList.inc.c"
};

Vec3s spot12_scene_02005030_BgCamList_02000310_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02005030_BgCamList_02000310_BgCamFuncData.inc.c"
};

BgCamInfo spot12_scene_02005030_BgCamList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02005030_BgCamList.inc.c"
};

SurfaceType spot12_scene_02005030_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02005030_SurfaceTypes.inc.c"
};

CollisionPoly spot12_scene_02005030_PolyList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02005030_PolyList.inc.c"
};

Vec3s spot12_scene_02005030_VtxList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02005030_VtxList.inc.c"
};

CollisionHeader spot12_scene_02005030_Col = {
#include "assets/scenes/overworld/spot12/spot12_scene_02005030_Col.inc.c"
};

CutsceneData gGerudoFortressArcheryIntroCs[] = {
#include "assets/scenes/overworld/spot12/gGerudoFortressArcheryIntroCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gGerudoFortressCreditsCs[] = {
#include "assets/scenes/overworld/spot12/pal/gGerudoFortressCreditsCs.csdata.inc.c"
};
#else
CutsceneData gGerudoFortressCreditsCs[] = {
#include "assets/scenes/overworld/spot12/ntsc/gGerudoFortressCreditsCs.csdata.inc.c"
};
#endif

CutsceneData gGerudoFortressFirstCaptureCs[] = {
#include "assets/scenes/overworld/spot12/gGerudoFortressFirstCaptureCs.csdata.inc.c"
};

SceneCmd spot12_scene_02000068_AltHeaders_020059C0_Cmds[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds.inc.c"
};

ActorEntry spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005A20_PlayerEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005A20_PlayerEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005A20_PlayerEntryList.inc.c"
};

TransitionActorEntry spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B50_TransitionActorEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B50_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B50_TransitionActorEntryList.inc.c"
};

RomFile spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B60_RoomList[LENGTH_spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B60_RoomList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B60_RoomList.inc.c"
};

Spawn spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B70_SpawnList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B70_SpawnList.inc.c"
};

s16 spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B98_ExitList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005B98_ExitList.inc.c"
};

EnvLightSettings spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005BB8_EnvLightSettingsList[LENGTH_spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005BB8_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020059C0_Cmds_02005BB8_EnvLightSettingsList.inc.c"
};

SceneCmd spot12_scene_02000068_AltHeaders_02005CC0_Cmds[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds.inc.c"
};

ActorEntry spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005D20_PlayerEntryList[LENGTH_spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005D20_PlayerEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005D20_PlayerEntryList.inc.c"
};

TransitionActorEntry spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E50_TransitionActorEntryList[LENGTH_spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E50_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E50_TransitionActorEntryList.inc.c"
};

RomFile spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E60_RoomList[LENGTH_spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E60_RoomList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E60_RoomList.inc.c"
};

Spawn spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E70_SpawnList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E70_SpawnList.inc.c"
};

s16 spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E98_ExitList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005E98_ExitList.inc.c"
};

EnvLightSettings spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005EB8_EnvLightSettingsList[LENGTH_spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005EB8_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005CC0_Cmds_02005EB8_EnvLightSettingsList.inc.c"
};

SceneCmd spot12_scene_02000068_AltHeaders_02005FC0_Cmds[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds.inc.c"
};

ActorEntry spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006028_PlayerEntryList[LENGTH_spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006028_PlayerEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006028_PlayerEntryList.inc.c"
};

TransitionActorEntry spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006128_TransitionActorEntryList[LENGTH_spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006128_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006128_TransitionActorEntryList.inc.c"
};

RomFile spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006138_RoomList[LENGTH_spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006138_RoomList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006138_RoomList.inc.c"
};

Spawn spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006148_SpawnList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006148_SpawnList.inc.c"
};

s16 spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006168_ExitList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006168_ExitList.inc.c"
};

EnvLightSettings spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006188_EnvLightSettingsList[LENGTH_spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006188_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_02005FC0_Cmds_02006188_EnvLightSettingsList.inc.c"
};

SceneCmd spot12_scene_02000068_AltHeaders_020061E0_Cmds[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds.inc.c"
};

ActorEntry spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006250_PlayerEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006250_PlayerEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006250_PlayerEntryList.inc.c"
};

ActorEntry spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006260_ActorEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006260_ActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006260_ActorEntryList.inc.c"
};

TransitionActorEntry spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006270_TransitionActorEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006270_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006270_TransitionActorEntryList.inc.c"
};

RomFile spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006280_RoomList[LENGTH_spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006280_RoomList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006280_RoomList.inc.c"
};

Spawn spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006290_SpawnList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006290_SpawnList.inc.c"
};

s16 spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006294_ExitList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_02006294_ExitList.inc.c"
};

EnvLightSettings spot12_scene_02000068_AltHeaders_020061E0_Cmds_020062B4_EnvLightSettingsList[LENGTH_spot12_scene_02000068_AltHeaders_020061E0_Cmds_020062B4_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020061E0_Cmds_020062B4_EnvLightSettingsList.inc.c"
};

SceneCmd spot12_scene_02000068_AltHeaders_020062D0_Cmds[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds.inc.c"
};

ActorEntry spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006338_PlayerEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006338_PlayerEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006338_PlayerEntryList.inc.c"
};

TransitionActorEntry spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006348_TransitionActorEntryList[LENGTH_spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006348_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006348_TransitionActorEntryList.inc.c"
};

RomFile spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006358_RoomList[LENGTH_spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006358_RoomList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006358_RoomList.inc.c"
};

Spawn spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006368_SpawnList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds_02006368_SpawnList.inc.c"
};

s16 spot12_scene_02000068_AltHeaders_020062D0_Cmds_0200636C_ExitList[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds_0200636C_ExitList.inc.c"
};

EnvLightSettings spot12_scene_02000068_AltHeaders_020062D0_Cmds_0200638C_EnvLightSettingsList[LENGTH_spot12_scene_02000068_AltHeaders_020062D0_Cmds_0200638C_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot12/spot12_scene_02000068_AltHeaders_020062D0_Cmds_0200638C_EnvLightSettingsList.inc.c"
};

CutsceneData gGerudoFortressIntroCs[] = {
#include "assets/scenes/overworld/spot12/gGerudoFortressIntroCs.csdata.inc.c"
};

u64 spot12_scene_00006660_TLUT[] = {
#include "assets/scenes/overworld/spot12/spot12_scene_00008E88_CITex.tlut.rgba16.inc.c"
};

u64 spot12_scene_00006688_Tex[TEX_LEN(u64, spot12_scene_00006688_Tex_WIDTH, spot12_scene_00006688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_00006688_Tex.rgba16.inc.c"
};

u64 spot12_scene_00007688_Tex[TEX_LEN(u64, spot12_scene_00007688_Tex_WIDTH, spot12_scene_00007688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_00007688_Tex.rgba16.inc.c"
};

u64 spot12_scene_00008688_Tex[TEX_LEN(u64, spot12_scene_00008688_Tex_WIDTH, spot12_scene_00008688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_00008688_Tex.rgba16.inc.c"
};

u64 spot12_scene_00008E88_CITex[TEX_LEN(u64, spot12_scene_00008E88_CITex_WIDTH, spot12_scene_00008E88_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_00008E88_CITex.ci4.inc.c"
};

u64 gGerudoFortressNightWallTex[TEX_LEN(u64, gGerudoFortressNightWallTex_WIDTH, gGerudoFortressNightWallTex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/gGerudoFortressNightWallTex.rgba16.inc.c"
};

u64 spot12_scene_0000A688_Tex[TEX_LEN(u64, spot12_scene_0000A688_Tex_WIDTH, spot12_scene_0000A688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000A688_Tex.rgba16.inc.c"
};

u64 spot12_scene_0000B688_Tex[TEX_LEN(u64, spot12_scene_0000B688_Tex_WIDTH, spot12_scene_0000B688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000B688_Tex.rgba16.inc.c"
};

u64 spot12_scene_0000BE88_Tex[TEX_LEN(u64, spot12_scene_0000BE88_Tex_WIDTH, spot12_scene_0000BE88_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000BE88_Tex.rgba16.inc.c"
};

u64 spot12_scene_0000C688_Tex[TEX_LEN(u64, spot12_scene_0000C688_Tex_WIDTH, spot12_scene_0000C688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000C688_Tex.rgba16.inc.c"
};

u64 spot12_scene_0000CE88_Tex[TEX_LEN(u64, spot12_scene_0000CE88_Tex_WIDTH, spot12_scene_0000CE88_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000CE88_Tex.rgba16.inc.c"
};

u64 spot12_scene_0000D688_Tex[TEX_LEN(u64, spot12_scene_0000D688_Tex_WIDTH, spot12_scene_0000D688_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000D688_Tex.rgba16.inc.c"
};

u64 gGerudoFortressDayWallTex[TEX_LEN(u64, gGerudoFortressDayWallTex_WIDTH, gGerudoFortressDayWallTex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/gGerudoFortressDayWallTex.rgba16.inc.c"
};

u64 spot12_scene_0000EE88_Tex[TEX_LEN(u64, spot12_scene_0000EE88_Tex_WIDTH, spot12_scene_0000EE88_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot12/spot12_scene_0000EE88_Tex.rgba16.inc.c"
};
