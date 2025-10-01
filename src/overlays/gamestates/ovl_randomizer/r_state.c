#include "r_state.h"

#include "fault.h"
#include "hashtable.h"
#include "r_ast.h"
#include "r_item_info.h"
#include "zelda_arena.h"

State* State_Init() {
    State* state = ZELDA_ARENA_MALLOC(sizeof(State), __FILE_NAME__, __LINE__);
    memset(state, 0, sizeof(State));

    for (size_t i = 0; i < ItemInfo_SolverIds.size; i++) {
        state->solvItems[i] = 0;
    }

    return state;
}

void State_Collect(State* state, Item item) {
    state->solvItems[item.info->solverId] += 1;
}

void State_Remove(State* state, Item item) {
    if (state->solvItems[item.info->solverId] > 0) {
        state->solvItems[item.info->solverId] -= 1;
    }
}
