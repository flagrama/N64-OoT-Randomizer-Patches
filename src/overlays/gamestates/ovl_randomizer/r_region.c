#include "r_region.h"

#include "r_item.h"
#include "r_item_info.h"
#include "r_tables.h"

#include "array_count.h"
#include "r_entrance.h"
#include "r_location.h"
#include "zelda_arena.h"

Region* Region_Init(RegionEnum regionTableIndex) {
    if (regionTable[regionTableIndex].name == NULL) {
        return NULL;
    }

    Region* region = ZELDA_ARENA_MALLOC(sizeof(Region), __FILE_NAME__, __LINE__);
    memset(region, 0, sizeof(Region));

    region->name = regionTable[regionTableIndex].name;
    region->dungeon = regionTable[regionTableIndex].dungeon;

    vector_setup(&region->locations, VECTOR_MINIMUM_CAPACITY, sizeof(Location_v));
    for (size_t locationTableIndex = 0; locationTableIndex < ARRAY_COUNT(locationTable); locationTableIndex++) {
        if (locationTable[locationTableIndex].regionKey != regionTableIndex) {
            continue;
        }
        Location* location = Location_Factory(locationTableIndex);
        if (location == NULL) {
            continue;
        }

        location->parentRegion = region;
        for (size_t ruleIndex = 0; ruleIndex < ARRAY_COUNT(locationTable[locationTableIndex].accessRule); ruleIndex++) {
            location->accessRule[ruleIndex] = &locationTable[locationTableIndex].accessRule[ruleIndex];
            if (location->accessRule[ruleIndex]->tag == AST_END) {
                break;
            }
        }

        Location_v container = { location };
        vector_push_back(&region->locations, &container);
    }

    vector_setup(&region->exits, VECTOR_MINIMUM_CAPACITY, sizeof(Entrance_v));
    for (size_t exitTableIndex = 0; exitTableIndex < ARRAY_COUNT(exitTable); exitTableIndex++) {
        if (exitTable[exitTableIndex].regionKey != regionTableIndex) {
            continue;
        }
        Entrance* exit = Entrance_Init(exitTable[exitTableIndex].name);
        if (exit == NULL) {
            continue;
        }

        exit->parentRegion = region;
        for (size_t ruleIndex = 0; ruleIndex < ARRAY_COUNT(exitTable[exitTableIndex].accessRule); ruleIndex++) {
            exit->accessRule[ruleIndex] = &exitTable[exitTableIndex].accessRule[ruleIndex];
            if (exit->accessRule[ruleIndex]->tag == AST_END) {
                break;
            }
        }

        Entrance_v container = { exit };
        vector_push_back(&region->exits, &container);
    }

    return region;
}

bool Region_CanFill(Region region, Item item) {
    bool isSelfDungeonRestricted = false;

    if (item.info->type >= BOSS_KEY && item.info->type <= SMALL_KEY) {
        isSelfDungeonRestricted = true;
    }

    if (isSelfDungeonRestricted) {
        return region.dungeon == item.scene;
    }

    return true;
}

void Region_Destroy(Region* region) {
    if (region == NULL) { return; }

    VECTOR_FOR_EACH(&region->locations, locations) {
        Location_v locationContainer = ITERATOR_GET_AS(Location_v, &locations);
        if (locationContainer.data == NULL) {
            continue;
        }
        VECTOR_FOR_EACH(&locationContainer.data->itemRules, rules) {
            Ast_v astContainer = ITERATOR_GET_AS(Ast_v, &rules);
            ZELDA_ARENA_FREE(astContainer.data, __FILE_NAME__, __LINE__);
        }
        ZELDA_ARENA_FREE(locationContainer.data, __FILE_NAME__, __LINE__);
    }
    vector_destroy(&region->locations);

    VECTOR_FOR_EACH(&region->exits, exits) {
        Entrance_v exitContainer = ITERATOR_GET_AS(Entrance_v, &exits);
        ZELDA_ARENA_FREE(exitContainer.data, __FILE_NAME__, __LINE__);
    }
    vector_destroy(&region->exits);

    ZELDA_ARENA_FREE(region, __FILE_NAME__, __LINE__);
}
