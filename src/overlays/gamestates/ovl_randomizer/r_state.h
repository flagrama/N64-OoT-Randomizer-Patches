#ifndef R_STATE_H
#define R_STATE_H 1
#include "r_item.h"

typedef struct State State;
struct State {
    int solvItems[0xff];
};

State* State_Init();
void State_Collect(State* state, Item item);
void State_Remove(State* state, Item item);

#endif
