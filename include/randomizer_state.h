#ifndef RANDOMIZER_STATE_H
#define RANDOMIZER_STATE_H

#include "game.h"
#include "sram.h"
#include "view.h"

typedef enum {
    RM_RUNNING,
    RM_FINISHING,
    RM_FINISHED,
    RM_ERROR,
    RM_FINISHED_ERROR,
} RandomizerMode;

typedef struct RandomizerState {
    GameState state;
    View view;
    SramContext sramCtx;
    RandomizerMode mode;
    bool threadStarted;
} RandomizerState;;

void Randomizer_Init(GameState *gameState);
void Randomizer_Destroy(GameState *gameState);

#endif
