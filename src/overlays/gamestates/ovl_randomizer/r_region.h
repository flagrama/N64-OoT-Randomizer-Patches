#ifndef R_REGION_H
#define R_REGION_H 1

#include "randomizer.h"
#include "r_containers.h"
#include "r_item.h"

typedef struct Region Region;
struct Region {
    char const* name;
    EntranceVector entrances;
    EntranceVector exits;
    LocationVector locations;
    SceneID dungeon;
};

struct Region_v {
    Region* data;
};

Region* Region_Init(RegionEnum regionTableIndex);
void Region_Destroy(Region* region);
bool Region_CanFill(Region region, Item item);

#endif
