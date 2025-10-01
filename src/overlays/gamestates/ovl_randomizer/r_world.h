#ifndef R_WORLD_H
#define R_WORLD_H 1

#include "r_containers.h"
#include "r_search.h"
#include "ultra64/ultratypes.h"

typedef struct Dungeon Dungeon;
typedef struct World World;

struct Dungeon {
    const char* name;
    bool map;
    bool compass;
    bool bossKey;
    u8 smallKeys;
};

struct World {
    RegionVector regions;
    ItemVector itemPool;
    ItemHashTable eventItems;
    Dungeon dungeons[12];
};

World World_BuildWorldGraph();
void World_SetDungeonNames(World* world);
void World_InitializeEntrances(World* world);
Region* World_GetRegion(World* world, char const* name);
LocationVector World_GetLocations(World* world);
LocationVector World_GetUnfilledLocations(World* world);
ItemVector World_GetRestrictedDungeonItems(World* world);
void World_Destroy(World* world);

#endif
