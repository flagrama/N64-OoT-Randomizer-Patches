#include "r_search.h"

#include "hashtable.h"
#include "printf.h"
#include "r_containers.h"
#include "r_entrance.h"
#include "r_item_info.h"
#include "r_location.h"
#include "r_region.h"
#include "r_state.h"
#include "r_world.h"
#include "string.h"
#include "vector.h"
#include "z64save.h"
#include "zelda_arena.h"

void NextSphere(Search* search);
void ExpandRegions(Search* search, EntranceVector* failed, LinkAge age);

void Search_InitWithoutIteration(Search* search) {
    vector_setup(&search->childQueue, VECTOR_MINIMUM_CAPACITY, sizeof(Entrance_v));
    vector_setup(&search->adultQueue, VECTOR_MINIMUM_CAPACITY, sizeof(Entrance_v));

    ht_setup(&search->childRegions, sizeof(hashKeyBuffer), sizeof(Region_v), HT_MINIMUM_CAPACITY);
    ht_setup(&search->adultRegions, sizeof(hashKeyBuffer), sizeof(Region_v), HT_MINIMUM_CAPACITY);
}

Search Search_Init(World* world) {
    Search search = { };
    search.state = State_Init();

    Search_InitWithoutIteration(&search);

    Region* rootRegion = World_GetRegion(world, "Root");

    VECTOR_FOR_EACH(&rootRegion->exits, exits) {
        Entrance_v exit = ITERATOR_GET_AS(Entrance_v, &exits);
        vector_push_back(&search.childQueue, &exit);
        vector_push_back(&search.adultQueue, &exit);
    }

    Region_v container = { rootRegion };
    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, rootRegion->name);

    ht_insert(&search.childRegions, hashKeyBuffer, &container);
    ht_insert(&search.adultRegions, hashKeyBuffer, &container);

    NextSphere(&search);

    return search;
}

void Search_Destroy(Search* search) {
    ht_iterate(&search->adultRegions, ht_free);
    ht_destroy(&search->adultRegions);
    ht_iterate(&search->childRegions, ht_free);
    ht_destroy(&search->childRegions);
    if (ht_is_initialized(&search->visitedLocations) && !ht_is_empty(&search->visitedLocations)) {
        ht_iterate(&search->visitedLocations, ht_free);
        ht_destroy(&search->visitedLocations);
    }
    vector_destroy(&search->adultQueue);
    vector_destroy(&search->childQueue);

    ZELDA_ARENA_FREE(search->state, __FILE_NAME__, __LINE__);
}

Search Search_Copy(Search* search) {
    Search newSearch = { };
    newSearch.state = State_Init();
    memcpy(newSearch.state->solvItems, search->state->solvItems, 0xff * sizeof(int));

    vector_copy(&newSearch.childQueue, &search->childQueue);
    vector_copy(&newSearch.adultQueue, &search->adultQueue);
    if (ht_is_initialized(&search->visitedLocations) && !ht_is_empty(&search->visitedLocations)) {
        ht_copy(&newSearch.visitedLocations, &search->visitedLocations);
    }
    ht_copy(&newSearch.childRegions, &search->childRegions);
    ht_copy(&newSearch.adultRegions, &search->adultRegions);

    NextSphere(&newSearch);

    return newSearch;
}

void NextSphere(Search* search) {
    EntranceVector temp;
    vector_setup(&temp, search->adultQueue.size, sizeof(Entrance_v));

    ExpandRegions(search, &temp, LINK_AGE_ADULT);
    vector_swap(&search->adultQueue, &temp);

    vector_clear(&temp);

    ExpandRegions(search, &temp, LINK_AGE_CHILD);
    vector_swap(&search->childQueue, &temp);

    vector_destroy(&temp);
}

void ExpandRegions(Search* search, EntranceVector* failed, LinkAge age) {
    EntranceVector* exitQueue;
    RegionHashTable* regions;

    if (age == LINK_AGE_ADULT) {
        exitQueue = &search->adultQueue;
        regions = &search->adultRegions;
    } else {
        exitQueue = &search->childQueue;
        regions = &search->childRegions;
    }

    /* Can't change exitQueue while iterating on it */
    EntranceVector currentExits;
    currentExits.data = NULL;
    vector_copy(&currentExits, exitQueue);
    EntranceVector newExits;
    vector_setup(&newExits, VECTOR_MINIMUM_CAPACITY, sizeof(Entrance_v));
    do {
        PRINTF("REGIONS EXPANDING\n");
        /* Clear out new exits added to currentExits from the previous iteration */
        vector_clear(&newExits);

        VECTOR_FOR_EACH(&currentExits, queued) {
            Entrance_v queuedContainer = ITERATOR_GET_AS(Entrance_v, &queued);
            Entrance exit = *queuedContainer.data;
            // PRINTF("Searching queued exit: %s\n", exit.name);

            if (age == LINK_AGE_ADULT && exit.accessRule[0][0].tag == AST_IS_CHILD) {
                continue;
            }
            if (age == LINK_AGE_CHILD && exit.accessRule[0][0].tag == AST_IS_ADULT) {
                continue;
            }

            memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
            strcpy(hashKeyBuffer, exit.connectedRegion->name);

            if (exit.connectedRegion != NULL && !ht_contains(regions, hashKeyBuffer)) {
                // PRINTF("Region %s is new!\n", hashKeyBuffer);
                if (Ast_Eval_Entrance(exit.accessRule, search, exit, age)) {
                    Region_v regionContainer = { exit.connectedRegion };
                    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
                    strcpy(hashKeyBuffer, exit.connectedRegion->name);
                    ht_insert(regions, hashKeyBuffer, &regionContainer);
                    VECTOR_FOR_EACH(&exit.connectedRegion->exits, exits) {
                        Entrance_v exitContainer = ITERATOR_GET_AS(Entrance_v, &exits);
                        // PRINTF("Queuing exit %s\n", exitContainer.data->name);
                        vector_push_back(&newExits, &exitContainer);
                    }
                } else {
                    // PRINTF("Cannot access exit!\n");
                    vector_push_back(failed, &queuedContainer);
                }
            }
        }

        vector_clear(&currentExits);

        VECTOR_FOR_EACH(&newExits, itr) {
            Entrance_v container = ITERATOR_GET_AS(Entrance_v, &itr);
            vector_push_back(&currentExits, &container);
        }

    } while (newExits.size);
    vector_destroy(&newExits);
    vector_destroy(&currentExits);
}

void Search_CollectAll(Search* search, ItemVector itemPool) {
    VECTOR_FOR_EACH(&itemPool, items) {
        Item_v item = ITERATOR_GET_AS(Item_v, &items);
        State_Collect(search->state, *item.data);
    }
}

void Search_Collect(Search* search, Item item) {
    State_Collect(search->state, item);
}

void Search_Uncollect(Search* search, Item item) {
    State_Remove(search->state, item);
}

bool Search_CanReach(Search* search, char const* regionName, LinkAge age) {
    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, regionName);

    if (age == LINK_AGE_ADULT) {
        return ht_contains(&search->adultRegions, hashKeyBuffer);
    }
    if (age == LINK_AGE_CHILD) {
        return ht_contains(&search->childRegions, hashKeyBuffer);
    }
    if (age == LINK_AGE_BOTH) {
        return ht_contains(&search->adultRegions, hashKeyBuffer)
            && ht_contains(&search->childRegions, hashKeyBuffer);
    }
    return ht_contains(&search->adultRegions, hashKeyBuffer)
        || ht_contains(&search->childRegions, hashKeyBuffer);
}

bool Search_LocationAccess(Search* search, Location location, LinkAge age) {
    if (age == LINK_AGE_ADULT || age == LINK_AGE_CHILD) {
        return Search_CanReach(search, location.parentRegion->name, age) && Ast_Eval_Location(location.accessRule, search, location, age);
    }
    if (age == LINK_AGE_BOTH) {
        return (Search_CanReach(search, location.parentRegion->name, age) && Ast_Eval_Location(location.accessRule, search, location, LINK_AGE_ADULT))
               && (Ast_Eval_Location(location.accessRule, search, location, LINK_AGE_CHILD));
    }
    return (Search_CanReach(search, location.parentRegion->name, LINK_AGE_ADULT) && Ast_Eval_Location(location.accessRule, search, location, LINK_AGE_ADULT))
           || (Search_CanReach(search, location.parentRegion->name, LINK_AGE_CHILD) && Ast_Eval_Location(location.accessRule, search, location, LINK_AGE_CHILD));
}

void CollectReachableLocations(Search* search, LocationVector itemLocations) {
    bool hadReachableLocations = true;

    if (!ht_is_initialized(&search->visitedLocations)) {
        ht_setup(&search->visitedLocations, sizeof(hashKeyBuffer), sizeof(Location_v), HT_MINIMUM_CAPACITY);
    }

    while (hadReachableLocations) {
        NextSphere(search);
        hadReachableLocations = false;

        VECTOR_FOR_EACH(&itemLocations, locs) {
            Location_v loc = ITERATOR_GET_AS(Location_v, &locs);
            memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
            strcpy(hashKeyBuffer, loc.data->name);
            if (ht_contains(&search->visitedLocations, hashKeyBuffer)) {
                continue;
            }

            memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
            strcpy(hashKeyBuffer, loc.data->parentRegion->name);
            if (ht_contains(&search->adultRegions, hashKeyBuffer) && Ast_Eval_Location(loc.data->accessRule, search, *loc.data, LINK_AGE_ADULT)) {
                hadReachableLocations = true;
                memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
                strcpy(hashKeyBuffer, loc.data->name);
                ht_insert(&search->visitedLocations, hashKeyBuffer, &loc);
                Search_Collect(search, loc.data->item);
            } else if (ht_contains(&search->childRegions, hashKeyBuffer) && Ast_Eval_Location(loc.data->accessRule, search, *loc.data, LINK_AGE_CHILD)) {
                hadReachableLocations = true;
                memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
                strcpy(hashKeyBuffer, loc.data->name);
                ht_insert(&search->visitedLocations, hashKeyBuffer, &loc);
                Search_Collect(search, loc.data->item);
            }
        }
    }
}

void Search_CollectProgressionLocations(World* world, Search* search) {
    LocationVector itemLocations;
    vector_setup(&itemLocations, VECTOR_MINIMUM_CAPACITY, sizeof(Location_v));

    LocationVector allLocations = World_GetLocations(world);
    VECTOR_FOR_EACH(&allLocations, locs) {
        Location_v loc = ITERATOR_GET_AS(Location_v, &locs);
        if (loc.data->item.info != NULL && loc.data->item.info->advancement == TRUE) {
            vector_push_back(&itemLocations, &loc);
        }
    }
    CollectReachableLocations(search, itemLocations);
    vector_destroy(&itemLocations);
}
