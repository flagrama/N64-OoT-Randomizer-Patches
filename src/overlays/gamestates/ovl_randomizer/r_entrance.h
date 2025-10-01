#ifndef R_ENTRANCE_H
#define R_ENTRANCE_H 1
#include "randomizer.h"

#include "r_ast.h"
#include "r_region.h"

typedef struct Entrance Entrance;
struct Entrance {
    char const* name;
    Region* parentRegion;
    Region* connectedRegion;
    Ast* accessRule[MAX_AST_EVENTS];
};

struct Entrance_v {
    Entrance* data;
};

Entrance* Entrance_Init(char const* name);
void Entrance_Connect(Entrance* entrance, Region* region);

#endif
