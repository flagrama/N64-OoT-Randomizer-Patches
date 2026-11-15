#ifndef R_KALEIDO_SCOPE_H
#define R_KALEIDO_SCOPE_H

#include "ultra64.h"
#include "libu64/pad.h"
#include "pause.h"
#include "play_state.h"

bool KaleidoMapSpoiler_IsOpen(void);
void KaleidoMapSpoiler_HandleDungeonMapInput(Input* input, SceneID sceneId);
void KaleidoMapSpoiler_HandleWorldMapInput(Input* input, WorldMapPoint hoveredPoint);
void KaleidoMapSpoiler_Draw(PlayState* play);

#endif // R_KALEIDO_SCOPE_H
