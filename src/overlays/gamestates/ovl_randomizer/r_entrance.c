#include "r_entrance.h"

#include "r_region.h"

#include "zelda_arena.h"

Entrance* Entrance_Init(char const* name) {
    if (name == NULL) {
        return NULL;
    }

    Entrance* entrance = ZELDA_ARENA_MALLOC(sizeof(Entrance), __FILE_NAME__, __LINE__);
    memset(entrance, 0, sizeof(Entrance));

    entrance->name = name;

    return entrance;
}

void Entrance_Connect(Entrance* entrance, Region* region) {
    entrance->connectedRegion = region;
}
