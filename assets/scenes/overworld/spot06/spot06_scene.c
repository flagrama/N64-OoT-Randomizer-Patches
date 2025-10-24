#include "spot06_scene.h"
#include "assets/scenes/overworld/spot06/spot06_room_0.h"

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

SceneCmd spot06_scene[] = {
#include "assets/scenes/overworld/spot06/spot06_scene.inc.c"
};

SceneCmd* spot06_scene_02000070_AltHeaders[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders.inc.c"
};

ActorEntry spot06_scene_02000084_PlayerEntryList[LENGTH_spot06_scene_02000084_PlayerEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000084_PlayerEntryList.inc.c"
};

TransitionActorEntry spot06_scene_02000114_TransitionActorEntryList[LENGTH_spot06_scene_02000114_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000114_TransitionActorEntryList.inc.c"
};

RomFile spot06_scene_02000134_RoomList[LENGTH_spot06_scene_02000134_RoomList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000134_RoomList.inc.c"
};

Spawn spot06_scene_0200013C_SpawnList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0200013C_SpawnList.inc.c"
};

s16 spot06_scene_02000150_ExitList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000150_ExitList.inc.c"
};

EnvLightSettings spot06_scene_02000160_EnvLightSettingsList[LENGTH_spot06_scene_02000160_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000160_EnvLightSettingsList.inc.c"
};

Vec3s spot06_scene_02000294_PathList_02000268_Points[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000294_PathList_02000268_Points.inc.c"
};

Path spot06_scene_02000294_PathList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000294_PathList.inc.c"
};

Vec3s spot06_scene_020055AC_BgCamList_020002A0_BgCamFuncData[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_BgCamList_020002A0_BgCamFuncData.inc.c"
};

BgCamInfo spot06_scene_020055AC_BgCamList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_BgCamList.inc.c"
};

SurfaceType spot06_scene_020055AC_SurfaceTypes[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_SurfaceTypes.inc.c"
};

CollisionPoly spot06_scene_020055AC_PolyList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_PolyList.inc.c"
};

Vec3s spot06_scene_020055AC_VtxList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_VtxList.inc.c"
};

WaterBox spot06_scene_020055AC_WaterBoxes[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_WaterBoxes.inc.c"
};

CollisionHeader spot06_scene_020055AC_Col = {
#include "assets/scenes/overworld/spot06/spot06_scene_020055AC_Col.inc.c"
};

CutsceneData gLakeHyliaRestoredCs[] = {
#include "assets/scenes/overworld/spot06/gLakeHyliaRestoredCs.csdata.inc.c"
};

#if OOT_REGION == REGION_EU
CutsceneData gLakeHyliaCreditsCs[] = {
#include "assets/scenes/overworld/spot06/pal/gLakeHyliaCreditsCs.csdata.inc.c"
};
#else
CutsceneData gLakeHyliaCreditsCs[] = {
#include "assets/scenes/overworld/spot06/ntsc/gLakeHyliaCreditsCs.csdata.inc.c"
};
#endif

CutsceneData gLakeHyliaFireArrowsCS[] = {
#include "assets/scenes/overworld/spot06/gLakeHyliaFireArrowsCS.csdata.inc.c"
};

SceneCmd spot06_scene_02000070_AltHeaders_02007460_Cmds[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds.inc.c"
};

ActorEntry spot06_scene_02000070_AltHeaders_02007460_Cmds_020074C8_PlayerEntryList[LENGTH_spot06_scene_02000070_AltHeaders_02007460_Cmds_020074C8_PlayerEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds_020074C8_PlayerEntryList.inc.c"
};

TransitionActorEntry spot06_scene_02000070_AltHeaders_02007460_Cmds_02007568_TransitionActorEntryList[LENGTH_spot06_scene_02000070_AltHeaders_02007460_Cmds_02007568_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds_02007568_TransitionActorEntryList.inc.c"
};

RomFile spot06_scene_02000070_AltHeaders_02007460_Cmds_02007588_RoomList[LENGTH_spot06_scene_02000070_AltHeaders_02007460_Cmds_02007588_RoomList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds_02007588_RoomList.inc.c"
};

Spawn spot06_scene_02000070_AltHeaders_02007460_Cmds_02007590_SpawnList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds_02007590_SpawnList.inc.c"
};

s16 spot06_scene_02000070_AltHeaders_02007460_Cmds_020075A4_ExitList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds_020075A4_ExitList.inc.c"
};

EnvLightSettings spot06_scene_02000070_AltHeaders_02007460_Cmds_020075B4_EnvLightSettingsList[LENGTH_spot06_scene_02000070_AltHeaders_02007460_Cmds_020075B4_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007460_Cmds_020075B4_EnvLightSettingsList.inc.c"
};

Vec3s spot06_scenePathList_007764_020076BC_Points[] = {
#include "assets/scenes/overworld/spot06/spot06_scenePathList_007764_020076BC_Points.inc.c"
};

Vec3s spot06_scenePathList_007764_020076E8_Points[] = {
#include "assets/scenes/overworld/spot06/spot06_scenePathList_007764_020076E8_Points.inc.c"
};

Path spot06_scenePathList_007764[] = {
#include "assets/scenes/overworld/spot06/spot06_scenePathList_007764.inc.c"
};

SceneCmd spot06_scene_02000070_AltHeaders_02007790_Cmds[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds.inc.c"
};

ActorEntry spot06_scene_02000070_AltHeaders_02007790_Cmds_02007800_PlayerEntryList[LENGTH_spot06_scene_02000070_AltHeaders_02007790_Cmds_02007800_PlayerEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007800_PlayerEntryList.inc.c"
};

TransitionActorEntry spot06_scene_02000070_AltHeaders_02007790_Cmds_02007810_TransitionActorEntryList[LENGTH_spot06_scene_02000070_AltHeaders_02007790_Cmds_02007810_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007810_TransitionActorEntryList.inc.c"
};

RomFile spot06_scene_02000070_AltHeaders_02007790_Cmds_02007830_RoomList[LENGTH_spot06_scene_02000070_AltHeaders_02007790_Cmds_02007830_RoomList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007830_RoomList.inc.c"
};

Spawn spot06_scene_02000070_AltHeaders_02007790_Cmds_02007838_SpawnList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007838_SpawnList.inc.c"
};

s16 spot06_scene_02000070_AltHeaders_02007790_Cmds_0200783C_ExitList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_0200783C_ExitList.inc.c"
};

EnvLightSettings spot06_scene_02000070_AltHeaders_02007790_Cmds_02007848_EnvLightSettingsList[LENGTH_spot06_scene_02000070_AltHeaders_02007790_Cmds_02007848_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007848_EnvLightSettingsList.inc.c"
};

Vec3s spot06_scene_02000070_AltHeaders_02007790_Cmds_02007924_PathList_020078F8_Points[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007924_PathList_020078F8_Points.inc.c"
};

Path spot06_scene_02000070_AltHeaders_02007790_Cmds_02007924_PathList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007790_Cmds_02007924_PathList.inc.c"
};

SceneCmd spot06_scene_02000070_AltHeaders_02007930_Cmds[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds.inc.c"
};

ActorEntry spot06_scene_02000070_AltHeaders_02007930_Cmds_020079A0_PlayerEntryList[LENGTH_spot06_scene_02000070_AltHeaders_02007930_Cmds_020079A0_PlayerEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_020079A0_PlayerEntryList.inc.c"
};

TransitionActorEntry spot06_scene_02000070_AltHeaders_02007930_Cmds_020079B0_TransitionActorEntryList[LENGTH_spot06_scene_02000070_AltHeaders_02007930_Cmds_020079B0_TransitionActorEntryList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_020079B0_TransitionActorEntryList.inc.c"
};

RomFile spot06_scene_02000070_AltHeaders_02007930_Cmds_020079D0_RoomList[LENGTH_spot06_scene_02000070_AltHeaders_02007930_Cmds_020079D0_RoomList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_020079D0_RoomList.inc.c"
};

Spawn spot06_scene_02000070_AltHeaders_02007930_Cmds_020079D8_SpawnList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_020079D8_SpawnList.inc.c"
};

s16 spot06_scene_02000070_AltHeaders_02007930_Cmds_020079DC_ExitList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_020079DC_ExitList.inc.c"
};

EnvLightSettings spot06_scene_02000070_AltHeaders_02007930_Cmds_020079E8_EnvLightSettingsList[LENGTH_spot06_scene_02000070_AltHeaders_02007930_Cmds_020079E8_EnvLightSettingsList] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_020079E8_EnvLightSettingsList.inc.c"
};

Vec3s spot06_scene_02000070_AltHeaders_02007930_Cmds_02007A2C_PathList_02007A00_Points[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_02007A2C_PathList_02007A00_Points.inc.c"
};

Path spot06_scene_02000070_AltHeaders_02007930_Cmds_02007A2C_PathList[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_02000070_AltHeaders_02007930_Cmds_02007A2C_PathList.inc.c"
};

CutsceneData gLakeHyliaIntroCs[] = {
#include "assets/scenes/overworld/spot06/gLakeHyliaIntroCs.csdata.inc.c"
};

u64 spot06_scene_00007C20_TLUT[] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00017CC8_CITex.tlut.rgba16.inc.c"
};

u64 spot06_scene_00007C48_Tex[TEX_LEN(u64, spot06_scene_00007C48_Tex_WIDTH, spot06_scene_00007C48_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00007C48_Tex.rgba16.inc.c"
};

u64 spot06_scene_00008048_Tex[TEX_LEN(u64, spot06_scene_00008048_Tex_WIDTH, spot06_scene_00008048_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00008048_Tex.rgba16.inc.c"
};

u64 spot06_scene_00008448_Tex[TEX_LEN(u64, spot06_scene_00008448_Tex_WIDTH, spot06_scene_00008448_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00008448_Tex.rgba16.inc.c"
};

u64 spot06_scene_00008848_Tex[TEX_LEN(u64, spot06_scene_00008848_Tex_WIDTH, spot06_scene_00008848_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00008848_Tex.rgba16.inc.c"
};

u64 spot06_scene_00009848_Tex[TEX_LEN(u64, spot06_scene_00009848_Tex_WIDTH, spot06_scene_00009848_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00009848_Tex.rgba16.inc.c"
};

u64 spot06_scene_000098C8_Tex[TEX_LEN(u64, spot06_scene_000098C8_Tex_WIDTH, spot06_scene_000098C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000098C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00009AC8_Tex[TEX_LEN(u64, spot06_scene_00009AC8_Tex_WIDTH, spot06_scene_00009AC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00009AC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000AAC8_Tex[TEX_LEN(u64, spot06_scene_0000AAC8_Tex_WIDTH, spot06_scene_0000AAC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000AAC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000AEC8_Tex[TEX_LEN(u64, spot06_scene_0000AEC8_Tex_WIDTH, spot06_scene_0000AEC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000AEC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000B6C8_Tex[TEX_LEN(u64, spot06_scene_0000B6C8_Tex_WIDTH, spot06_scene_0000B6C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000B6C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000BAC8_Tex[TEX_LEN(u64, spot06_scene_0000BAC8_Tex_WIDTH, spot06_scene_0000BAC8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000BAC8_Tex.ia8.inc.c"
};

u64 spot06_scene_0000BEC8_Tex[TEX_LEN(u64, spot06_scene_0000BEC8_Tex_WIDTH, spot06_scene_0000BEC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000BEC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000C2C8_Tex[TEX_LEN(u64, spot06_scene_0000C2C8_Tex_WIDTH, spot06_scene_0000C2C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000C2C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000C4C8_Tex[TEX_LEN(u64, spot06_scene_0000C4C8_Tex_WIDTH, spot06_scene_0000C4C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000C4C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000CCC8_Tex[TEX_LEN(u64, spot06_scene_0000CCC8_Tex_WIDTH, spot06_scene_0000CCC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000CCC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000DCC8_Tex[TEX_LEN(u64, spot06_scene_0000DCC8_Tex_WIDTH, spot06_scene_0000DCC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000DCC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000ECC8_Tex[TEX_LEN(u64, spot06_scene_0000ECC8_Tex_WIDTH, spot06_scene_0000ECC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000ECC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000F4C8_Tex[TEX_LEN(u64, spot06_scene_0000F4C8_Tex_WIDTH, spot06_scene_0000F4C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000F4C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000F6C8_Tex[TEX_LEN(u64, spot06_scene_0000F6C8_Tex_WIDTH, spot06_scene_0000F6C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000F6C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0000FEC8_Tex[TEX_LEN(u64, spot06_scene_0000FEC8_Tex_WIDTH, spot06_scene_0000FEC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0000FEC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00010EC8_Tex[TEX_LEN(u64, spot06_scene_00010EC8_Tex_WIDTH, spot06_scene_00010EC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00010EC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000116C8_Tex[TEX_LEN(u64, spot06_scene_000116C8_Tex_WIDTH, spot06_scene_000116C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000116C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00011EC8_Tex[TEX_LEN(u64, spot06_scene_00011EC8_Tex_WIDTH, spot06_scene_00011EC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00011EC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000122C8_Tex[TEX_LEN(u64, spot06_scene_000122C8_Tex_WIDTH, spot06_scene_000122C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000122C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000126C8_Tex[TEX_LEN(u64, spot06_scene_000126C8_Tex_WIDTH, spot06_scene_000126C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000126C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00012EC8_Tex[TEX_LEN(u64, spot06_scene_00012EC8_Tex_WIDTH, spot06_scene_00012EC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00012EC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000130C8_Tex[TEX_LEN(u64, spot06_scene_000130C8_Tex_WIDTH, spot06_scene_000130C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000130C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000140C8_Tex[TEX_LEN(u64, spot06_scene_000140C8_Tex_WIDTH, spot06_scene_000140C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000140C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000148C8_Tex[TEX_LEN(u64, spot06_scene_000148C8_Tex_WIDTH, spot06_scene_000148C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000148C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00014CC8_Tex[TEX_LEN(u64, spot06_scene_00014CC8_Tex_WIDTH, spot06_scene_00014CC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00014CC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000154C8_Tex[TEX_LEN(u64, spot06_scene_000154C8_Tex_WIDTH, spot06_scene_000154C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000154C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00015CC8_Tex[TEX_LEN(u64, spot06_scene_00015CC8_Tex_WIDTH, spot06_scene_00015CC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00015CC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000164C8_Tex[TEX_LEN(u64, spot06_scene_000164C8_Tex_WIDTH, spot06_scene_000164C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000164C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00016CC8_Tex[TEX_LEN(u64, spot06_scene_00016CC8_Tex_WIDTH, spot06_scene_00016CC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00016CC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000170C8_Tex[TEX_LEN(u64, spot06_scene_000170C8_Tex_WIDTH, spot06_scene_000170C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000170C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000178C8_Tex[TEX_LEN(u64, spot06_scene_000178C8_Tex_WIDTH, spot06_scene_000178C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000178C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00017CC8_CITex[TEX_LEN(u64, spot06_scene_00017CC8_CITex_WIDTH, spot06_scene_00017CC8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00017CC8_CITex.ci4.inc.c"
};

u64 spot06_scene_000184C8_Tex[TEX_LEN(u64, spot06_scene_000184C8_Tex_WIDTH, spot06_scene_000184C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000184C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_00018CC8_Tex[TEX_LEN(u64, spot06_scene_00018CC8_Tex_WIDTH, spot06_scene_00018CC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_00018CC8_Tex.rgba16.inc.c"
};

u64 spot06_scene_000194C8_Tex[TEX_LEN(u64, spot06_scene_000194C8_Tex_WIDTH, spot06_scene_000194C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_000194C8_Tex.rgba16.inc.c"
};

u64 spot06_scene_0001A4C8_Tex[TEX_LEN(u64, spot06_scene_0001A4C8_Tex_WIDTH, spot06_scene_0001A4C8_Tex_HEIGHT, 4)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0001A4C8_Tex.i4.inc.c"
};

u64 spot06_scene_0001ACC8_Tex[TEX_LEN(u64, spot06_scene_0001ACC8_Tex_WIDTH, spot06_scene_0001ACC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/overworld/spot06/spot06_scene_0001ACC8_Tex.rgba16.inc.c"
};

CutsceneData gLakeHyliaOwlCs[] = {
#include "assets/scenes/overworld/spot06/gLakeHyliaOwlCs.csdata.inc.c"
};
