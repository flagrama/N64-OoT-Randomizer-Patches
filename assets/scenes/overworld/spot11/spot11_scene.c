#include "spot11_scene.h"
#include "assets/scenes/overworld/spot11/spot11_room_0.h"

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

SceneCmd spot11_scene[] = {
#include "assets/scenes/overworld/spot11/spot11_scene.inc.c"
};

SceneCmd* spot11_scene_02000060_AltHeaders[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders.inc.c"
};

ActorEntry spot11_scene_02000074_PlayerEntryList[LENGTH_spot11_scene_02000074_PlayerEntryList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000074_PlayerEntryList.inc.c"
};

RomFile spot11_scene_020000F4_RoomList[LENGTH_spot11_scene_020000F4_RoomList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_020000F4_RoomList.inc.c"
};

Spawn spot11_scene_020000FC_SpawnList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_020000FC_SpawnList.inc.c"
};

s16 spot11_scene_0200010C_ExitList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0200010C_ExitList.inc.c"
};

EnvLightSettings spot11_scene_02000118_EnvLightSettingsList[LENGTH_spot11_scene_02000118_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000118_EnvLightSettingsList.inc.c"
};

Vec3s spot11_scene_02004EE4_BgCamList_02000220_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_BgCamList_02000220_BgCamFuncData.inc.c"
};

BgCamInfo spot11_scene_02004EE4_BgCamList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_BgCamList.inc.c"
};

u8 spot11_scene_unaccounted_00025C[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_unaccounted_00025C.bin.inc.c"
};

SurfaceType spot11_scene_02004EE4_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_SurfaceTypes.inc.c"
};

CollisionPoly spot11_scene_02004EE4_PolyList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_PolyList.inc.c"
};

Vec3s spot11_scene_02004EE4_VtxList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_VtxList.inc.c"
};

WaterBox spot11_scene_02004EE4_WaterBoxes[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_WaterBoxes.inc.c"
};

CollisionHeader spot11_scene_02004EE4_Col = {
#include "assets/scenes/overworld/spot11/spot11_scene_02004EE4_Col.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gDesertColossusRequiemOfSpiritCs[] = {
#include "assets/scenes/overworld/spot11/pal/gDesertColossusRequiemOfSpiritCs.csdata.inc.c"
};
#else
CutsceneData gDesertColossusRequiemOfSpiritCs[] = {
#include "assets/scenes/overworld/spot11/ntsc/gDesertColossusRequiemOfSpiritCs.csdata.inc.c"
};
#endif

CutsceneData gDesertColossusNabooruCapturedCs[] = {
#include "assets/scenes/overworld/spot11/gDesertColossusNabooruCapturedCs.csdata.inc.c"
};

SceneCmd spot11_scene_02000060_AltHeaders_02007540_Cmds[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds.inc.c"
};

ActorEntry spot11_scene_02000060_AltHeaders_02007540_Cmds_020075A0_PlayerEntryList[LENGTH_spot11_scene_02000060_AltHeaders_02007540_Cmds_020075A0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_020075A0_PlayerEntryList.inc.c"
};

RomFile spot11_scene_02000060_AltHeaders_02007540_Cmds_02007630_RoomList[LENGTH_spot11_scene_02000060_AltHeaders_02007540_Cmds_02007630_RoomList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_02007630_RoomList.inc.c"
};

Spawn spot11_scene_02000060_AltHeaders_02007540_Cmds_02007638_SpawnList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_02007638_SpawnList.inc.c"
};

s16 spot11_scene_02000060_AltHeaders_02007540_Cmds_0200764C_ExitList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_0200764C_ExitList.inc.c"
};

EnvLightSettings spot11_scene_02000060_AltHeaders_02007540_Cmds_02007658_EnvLightSettingsList[LENGTH_spot11_scene_02000060_AltHeaders_02007540_Cmds_02007658_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_02007658_EnvLightSettingsList.inc.c"
};

Vec3s spot11_scene_02000060_AltHeaders_02007540_Cmds_020077D8_PathList_02007760_Points[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_020077D8_PathList_02007760_Points.inc.c"
};

Path spot11_scene_02000060_AltHeaders_02007540_Cmds_020077D8_PathList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_02007540_Cmds_020077D8_PathList.inc.c"
};

SceneCmd spot11_scene_02000060_AltHeaders_020077E0_Cmds[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020077E0_Cmds.inc.c"
};

ActorEntry spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007840_PlayerEntryList[LENGTH_spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007840_PlayerEntryList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007840_PlayerEntryList.inc.c"
};

RomFile spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007850_RoomList[LENGTH_spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007850_RoomList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007850_RoomList.inc.c"
};

Spawn spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007858_SpawnList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007858_SpawnList.inc.c"
};

s16 spot11_scene_02000060_AltHeaders_020077E0_Cmds_0200785C_ExitList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020077E0_Cmds_0200785C_ExitList.inc.c"
};

EnvLightSettings spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007860_EnvLightSettingsList[LENGTH_spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007860_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020077E0_Cmds_02007860_EnvLightSettingsList.inc.c"
};

SceneCmd spot11_scene_02000060_AltHeaders_020078C0_Cmds[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020078C0_Cmds.inc.c"
};

ActorEntry spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007920_PlayerEntryList[LENGTH_spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007920_PlayerEntryList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007920_PlayerEntryList.inc.c"
};

RomFile spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007930_RoomList[LENGTH_spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007930_RoomList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007930_RoomList.inc.c"
};

Spawn spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007938_SpawnList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007938_SpawnList.inc.c"
};

s16 spot11_scene_02000060_AltHeaders_020078C0_Cmds_0200793C_ExitList[] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020078C0_Cmds_0200793C_ExitList.inc.c"
};

EnvLightSettings spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007940_EnvLightSettingsList[LENGTH_spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007940_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot11/spot11_scene_02000060_AltHeaders_020078C0_Cmds_02007940_EnvLightSettingsList.inc.c"
};

CutsceneData gDesertColossusIntroCs[] = {
#include "assets/scenes/overworld/spot11/gDesertColossusIntroCs.csdata.inc.c"
};

u64 spot11_scene_00007CB0_Tex[TEX_LEN(u64, spot11_scene_00007CB0_Tex_WIDTH, spot11_scene_00007CB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00007CB0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000084B0_Tex[TEX_LEN(u64, spot11_scene_000084B0_Tex_WIDTH, spot11_scene_000084B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000084B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00008CB0_Tex[TEX_LEN(u64, spot11_scene_00008CB0_Tex_WIDTH, spot11_scene_00008CB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00008CB0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000090B0_Tex[TEX_LEN(u64, spot11_scene_000090B0_Tex_WIDTH, spot11_scene_000090B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000090B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000A0B0_Tex[TEX_LEN(u64, spot11_scene_0000A0B0_Tex_WIDTH, spot11_scene_0000A0B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000A0B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000A8B0_Tex[TEX_LEN(u64, spot11_scene_0000A8B0_Tex_WIDTH, spot11_scene_0000A8B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000A8B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000B8B0_Tex[TEX_LEN(u64, spot11_scene_0000B8B0_Tex_WIDTH, spot11_scene_0000B8B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000B8B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000BCB0_Tex[TEX_LEN(u64, spot11_scene_0000BCB0_Tex_WIDTH, spot11_scene_0000BCB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000BCB0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000C4B0_Tex[TEX_LEN(u64, spot11_scene_0000C4B0_Tex_WIDTH, spot11_scene_0000C4B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000C4B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000CCB0_Tex[TEX_LEN(u64, spot11_scene_0000CCB0_Tex_WIDTH, spot11_scene_0000CCB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000CCB0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000D4B0_Tex[TEX_LEN(u64, spot11_scene_0000D4B0_Tex_WIDTH, spot11_scene_0000D4B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000D4B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000DCB0_Tex[TEX_LEN(u64, spot11_scene_0000DCB0_Tex_WIDTH, spot11_scene_0000DCB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000DCB0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000ECB0_Tex[TEX_LEN(u64, spot11_scene_0000ECB0_Tex_WIDTH, spot11_scene_0000ECB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000ECB0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000F4B0_Tex[TEX_LEN(u64, spot11_scene_0000F4B0_Tex_WIDTH, spot11_scene_0000F4B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000F4B0_Tex.rgba16.inc.c"
};

u64 spot11_scene_0000FCB0_Tex[TEX_LEN(u64, spot11_scene_0000FCB0_Tex_WIDTH, spot11_scene_0000FCB0_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000FCB0_Tex.ia8.inc.c"
};

u64 spot11_scene_0000FCF0_Tex[TEX_LEN(u64, spot11_scene_0000FCF0_Tex_WIDTH, spot11_scene_0000FCF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_0000FCF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000104F0_Tex[TEX_LEN(u64, spot11_scene_000104F0_Tex_WIDTH, spot11_scene_000104F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000104F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00010CF0_Tex[TEX_LEN(u64, spot11_scene_00010CF0_Tex_WIDTH, spot11_scene_00010CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00010CF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00011CF0_Tex[TEX_LEN(u64, spot11_scene_00011CF0_Tex_WIDTH, spot11_scene_00011CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00011CF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000124F0_Tex[TEX_LEN(u64, spot11_scene_000124F0_Tex_WIDTH, spot11_scene_000124F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000124F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00012CF0_Tex[TEX_LEN(u64, spot11_scene_00012CF0_Tex_WIDTH, spot11_scene_00012CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00012CF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000134F0_Tex[TEX_LEN(u64, spot11_scene_000134F0_Tex_WIDTH, spot11_scene_000134F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000134F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00013CF0_Tex[TEX_LEN(u64, spot11_scene_00013CF0_Tex_WIDTH, spot11_scene_00013CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00013CF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000144F0_Tex[TEX_LEN(u64, spot11_scene_000144F0_Tex_WIDTH, spot11_scene_000144F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000144F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000154F0_Tex[TEX_LEN(u64, spot11_scene_000154F0_Tex_WIDTH, spot11_scene_000154F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000154F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00015CF0_Tex[TEX_LEN(u64, spot11_scene_00015CF0_Tex_WIDTH, spot11_scene_00015CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00015CF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000164F0_Tex[TEX_LEN(u64, spot11_scene_000164F0_Tex_WIDTH, spot11_scene_000164F0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000164F0_Tex.ia4.inc.c"
};

u64 spot11_scene_00016CF0_Tex[TEX_LEN(u64, spot11_scene_00016CF0_Tex_WIDTH, spot11_scene_00016CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00016CF0_Tex.rgba16.inc.c"
};

u64 spot11_scene_000174F0_Tex[TEX_LEN(u64, spot11_scene_000174F0_Tex_WIDTH, spot11_scene_000174F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000174F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00017CF0_Tex[TEX_LEN(u64, spot11_scene_00017CF0_Tex_WIDTH, spot11_scene_00017CF0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00017CF0_Tex.ia4.inc.c"
};

u64 spot11_scene_000184F0_Tex[TEX_LEN(u64, spot11_scene_000184F0_Tex_WIDTH, spot11_scene_000184F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_000184F0_Tex.rgba16.inc.c"
};

u64 spot11_scene_00018CF0_Tex[TEX_LEN(u64, spot11_scene_00018CF0_Tex_WIDTH, spot11_scene_00018CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot11/spot11_scene_00018CF0_Tex.rgba16.inc.c"
};

