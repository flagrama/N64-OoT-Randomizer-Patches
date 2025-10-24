#ifndef R_SEARCH_H
#define R_SEARCH_H 1

#include "r_region.h"
#include "r_state.h"
#include "r_world.h"

#include "save.h"

typedef struct World World;
typedef struct Region Region;
typedef struct Location Location;

typedef struct Search Search;
struct Search {
    EntranceVector childQueue;
    EntranceVector adultQueue;
    LocationHashTable visitedLocations;
    RegionHashTable childRegions;
    RegionHashTable adultRegions;
    State* state;
};

Search Search_Init(World* world);
void Search_Destroy(Search* search);
Search Search_Copy(Search* search);
void Search_Collect(Search* search, Item item);
void Search_CollectAll(Search* search, ItemVector itemPool);
void Search_CollectProgressionLocations(World* world, Search* search);
void Search_Uncollect(Search* search, Item item);
bool Search_CanReach(Search* search, char const* regionName, LinkAge age);
bool Search_LocationAccess(Search* search, Location location, LinkAge age);

#endif
