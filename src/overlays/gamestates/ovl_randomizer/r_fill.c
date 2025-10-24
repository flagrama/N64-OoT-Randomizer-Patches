#include "r_fill.h"
#include "randomizer.h"

#include "vector.h"

#include "r_ast.h"
#include "r_item_info.h"
#include "r_location.h"
#include "r_search.h"


#include "fault.h"
#include "printf.h"
#include "randomizer_state.h"
#include "game.h"
#include "zelda_arena.h"
#include "libc64/sprintf.h"

void FillDungeonItemsRestrictive(GameState* gameState, World* world, Search* search, LocationVector* fillLocations, ItemVector* dungeonItems, ItemVector* itemPool);
void FillRestrictive(GameState* gameState, World* world, Search* baseSearch, LocationVector* locations, ItemVector* itemPool, signed count);
void FastFill(LocationVector* locations, ItemVector* itemPool);

void DistributeItemsRestrictive(GameState* gameState, World* world) {
    RandomizerState* this = (RandomizerState*)gameState;

    LocationVector fillLocations = fillLocations = World_GetUnfilledLocations(world);

    /* Start a search cache here */
    Search search = Search_Init(world);
    Search_CollectProgressionLocations(world, &search);

    ItemVector dungeonItems = World_GetRestrictedDungeonItems(world);
    FillDungeonItemsRestrictive(&this->state, world, &search, &fillLocations, &dungeonItems, &world->itemPool);
    VECTOR_FOR_EACH(&dungeonItems, items) {
        Item_v container = ITERATOR_GET_AS(Item_v, &items);
        ZELDA_ARENA_FREE(container.data, __FILE_NAME__, __LINE__);
    }
    vector_destroy(&dungeonItems);

    if (this->mode == RM_ERROR) { return; }

    Search_CollectProgressionLocations(world, &search);

    ItemVector progItemPool;
    vector_setup(&progItemPool, VECTOR_MINIMUM_CAPACITY, sizeof(Item_v));
    VECTOR_FOR_EACH(&world->itemPool, items) {
        Item_v item = ITERATOR_GET_AS(Item_v, &items);
        if (item.data->info->advancement == TRUE) {
            vector_push_back(&progItemPool, &item);
        }
    }
    vector_shuffle(&progItemPool);

    ItemVector restItemPool;
    vector_setup(&restItemPool, VECTOR_MINIMUM_CAPACITY, sizeof(Item_v));
    VECTOR_FOR_EACH(&world->itemPool, items) {
        Item_v item = ITERATOR_GET_AS(Item_v, &items);
        if (item.data->info->advancement == NONE) {
            vector_push_back(&restItemPool, &item);
        }
    }
    vector_shuffle(&restItemPool);

    FillRestrictive(&this->state, world, &search, &fillLocations, &progItemPool, -1);

    if (this->mode == RM_ERROR) { return; }

    vector_destroy(&progItemPool);
    Search_Destroy(&search);

    FastFill(&fillLocations, &restItemPool);

    vector_destroy(&restItemPool);
    vector_destroy(&fillLocations);
}

void FillDungeonItemsRestrictive(GameState* gameState, World* world, Search* search, LocationVector* fillLocations, ItemVector* dungeonItems, ItemVector* itemPool) {
    RandomizerState* this = (RandomizerState*)gameState;

    Search baseSearch = Search_Copy(search);
    Search_CollectAll(&baseSearch, *itemPool);
    Search_CollectProgressionLocations(world, &baseSearch);

    Vector bossKeys;
    vector_setup(&bossKeys, VECTOR_MINIMUM_CAPACITY, dungeonItems->element_size);

    Vector smallKeys;
    vector_setup(&smallKeys, VECTOR_MINIMUM_CAPACITY, dungeonItems->element_size);

    size_t counter = 0;
    unsigned eraseIndexes[50] = { };

    VECTOR_FOR_EACH(dungeonItems, items) {
        Item_v item = ITERATOR_GET_AS(Item_v, &items);
        if (item.data->info->type == BOSS_KEY) {
            vector_push_front(&bossKeys, &item);
            eraseIndexes[counter++] = iterator_index(dungeonItems, &items);
        } else if (item.data->info->type == SMALL_KEY) {
            vector_push_front(&smallKeys, &item);
            eraseIndexes[counter++] = iterator_index(dungeonItems, &items);
        }
    }

    for (size_t i = counter; i > 0; i--) {
        vector_erase(dungeonItems, eraseIndexes[i - 1]);
    }

    /* Sort small keys before maps/compasses */
    VECTOR_FOR_EACH(&smallKeys, keys) {
        Item_v key = ITERATOR_GET_AS(Item_v, &keys);
        vector_push_front(dungeonItems, &key);
    }

    /* Sort boss keys before other items */
    VECTOR_FOR_EACH(&bossKeys, keys) {
        Item_v key = ITERATOR_GET_AS(Item_v, &keys);
        vector_push_front(dungeonItems, &key);
    }

    vector_destroy(&bossKeys);
    vector_destroy(&smallKeys);

    FillRestrictive(&this->state, world, &baseSearch, fillLocations, dungeonItems, -1);

    Search_Destroy(&baseSearch);
}

void FillRestrictive(GameState* gameState, World* world, Search* baseSearch, LocationVector* locations, ItemVector* itemPool, signed count) {
    RandomizerState* this = (RandomizerState*)gameState;

    ItemVector unplacedItems;
    vector_setup(&unplacedItems, VECTOR_MINIMUM_CAPACITY, sizeof(Item_v));

    Search itemSearch = Search_Copy(baseSearch);
    Search_CollectAll(&itemSearch, *itemPool);

    while (itemPool->size && locations->size) {
        if (count == 0) {
            break;
        }

        Item_v itemToPlace = *(Item_v*)vector_get(itemPool, 0);
        vector_pop_front(itemPool);

        vector_shuffle(locations);

        Search_Uncollect(&itemSearch, *itemToPlace.data);
        Search maxSearch = Search_Copy(&itemSearch);
        Search_CollectProgressionLocations(world, &maxSearch);

        PRINTF("Trying to place %u %s\n", itemToPlace.data->scene, itemToPlace.data->name);
        size_t spotToFill = UINT32_MAX;
        // PRINTF("Trying to place %s for dungeon %d\n", itemToPlace.data->name, itemToPlace.data->scene);
        VECTOR_FOR_EACH(locations, locs) {
            Location_v location = ITERATOR_GET_AS(Location_v, &locs);
            if (Location_CanFill(*location.data, &maxSearch, *itemToPlace.data, true)) {
                PRINTF("Placed at %s\n", location.data->name);
                spotToFill = iterator_index(locations, &locs);
                break;
            }
        }

        if (spotToFill == UINT32_MAX) {
            if (count > 0) {
                vector_push_back(&unplacedItems, &itemToPlace);
                Search_Collect(&itemSearch, *itemToPlace.data);
                continue;
            }
#if RANDOMIZER_ERROR_ON_RETRY
            char msg[0x100];
            sprintf(msg, "Game unbeatable: Can't place %s", itemToPlace.data->name);
            PRINTF("Randomizer error! %s\n", msg);
            Fault_AddHungupAndCrashImpl(" RANDOMIZER ERROR", msg);
#else
            this->mode = RM_ERROR;
            return;
#endif
        }

        Search_Destroy(&maxSearch);

        //World_PushItem
        Location* location = ((Location_v*)vector_get(locations, spotToFill))->data;
        location->item = *itemToPlace.data;
        vector_erase(locations, spotToFill);
        --count;

        ZELDA_ARENA_FREE(itemToPlace.data, __FILE_NAME__, __LINE__);
    }

    Search_Destroy(&itemSearch);

    if (count > 0) {
#if RANDOMIZER_ERROR_ON_RETRY
        char msg[0x100];
        sprintf(msg, "Number of items not placed: %i", count);
        PRINTF("Randomizer error! %s\n", msg);
        Fault_AddHungupAndCrashImpl(" RANDOMIZER ERROR", msg);
#else
        this->mode = RM_ERROR;
        return;
#endif
    }
     if (count < 0 && 0 < itemPool->size) {
#if RANDOMIZER_ERROR_ON_RETRY
        char msg[0x100];
        sprintf(msg, "Items remaining to place %zu", itemPool->size);
        PRINTF("Randomizer error! %s\n", msg);
        Fault_AddHungupAndCrashImpl(" RANDOMIZER ERROR", msg);
#else
         this->mode = RM_ERROR;
        return;
#endif
    }

    VECTOR_FOR_EACH(&unplacedItems, unplaced) {
        Item_v item = ITERATOR_GET_AS(Item_v, &unplaced);
        vector_push_back(itemPool, &item);
    }

    vector_destroy(&unplacedItems);
}

void FastFill(LocationVector* locations, ItemVector* itemPool) {
    vector_shuffle(locations);
    while (itemPool->size && locations->size) {
        Location* location = ((Location_v*)vector_front(locations))->data;
        Item* item = ((Item_v*)vector_front(itemPool))->data;
        location->item = *item;
        vector_pop_front(locations);
        vector_pop_front(itemPool);
        ZELDA_ARENA_FREE(item, __FILE_NAME__, __LINE__);
    }
}
