#include "r_world.h"

#include "fault.h"
#include "hashtable.h"
#include "printf.h"
#include "randomizer.h"
#include "r_ast.h"
#include "r_containers.h"
#include "r_entrance.h"
#include "r_location.h"
#include "r_region.h"
#include "r_tables.h"
#include "vector.h"
#include "scene.h"
#include "zelda_arena.h"
#include "libc64/sprintf.h"

LocationHashTable locationCache = { };
RegionHashTable regionCache = { };
EntranceVector allLocationsCache;

void LoadRegionsFromTable(World* world);
void SetRules(World* world);
Location* GetLocation(World* world, char const* name);
void GenerateItemPool(World* world);

void World_SetDungeonNames(World* world) {
    world->dungeons[SCENE_DEKU_TREE].name = "Deku Tree";
    world->dungeons[SCENE_DODONGOS_CAVERN].name = "Dodongo's Cavern";
    world->dungeons[SCENE_JABU_JABU].name = "Jabu Jabu";
    world->dungeons[SCENE_FOREST_TEMPLE].name = "Forest Temple";
    world->dungeons[SCENE_FIRE_TEMPLE].name = "Fire Temple";
    world->dungeons[SCENE_WATER_TEMPLE].name = "Water Temple";
    world->dungeons[SCENE_SPIRIT_TEMPLE].name = "Spirit Temple";
    world->dungeons[SCENE_SHADOW_TEMPLE].name = "Shadow Temple";
    world->dungeons[SCENE_BOTTOM_OF_THE_WELL].name = "Bottom of the Well";
    world->dungeons[SCENE_ICE_CAVERN].name = "Ice Cavern";
    world->dungeons[SCENE_GANONS_TOWER].name = "Ganon's Castle";
    world->dungeons[SCENE_GERUDO_TRAINING_GROUND].name = "Gerudo Training Ground";
}

World World_BuildWorldGraph() {
    World world = { };
    ht_setup(&locationCache, sizeof(hashKeyBuffer), sizeof(Location_v), HT_MINIMUM_CAPACITY);
    ht_setup(&regionCache, sizeof(hashKeyBuffer), sizeof(Region_v), HT_MINIMUM_CAPACITY);

    LoadRegionsFromTable(&world);
    World_InitializeEntrances(&world);
    GenerateItemPool(&world);

    return world;
}

void World_Destroy(World* world) {
    vector_destroy(&world->itemPool);
    VECTOR_FOR_EACH(&world->regions, regions) {
        Region_v region = ITERATOR_GET_AS(Region_v, &regions);
        Region_Destroy(region.data);
    }
    vector_destroy(&world->regions);
    VECTOR_FOR_EACH(&allLocationsCache, locs) {
        Location_v loc = ITERATOR_GET_AS(Location_v, &locs);
        if (vector_is_initialized(&loc.data->itemRules)) {
            VECTOR_FOR_EACH(&loc.data->itemRules, rules) {
                Ast_v rule = ITERATOR_GET_AS(Ast_v, &rules);
                Ast_Free(rule.data);
            }
            vector_destroy(&loc.data->itemRules);
        }
    }
    vector_destroy(&allLocationsCache);
    ht_iterate(&locationCache, ht_free);
    ht_destroy(&locationCache);
    ht_iterate(&locationCache, ht_free);
    ht_destroy(&regionCache);
}

void LoadRegionsFromTable(World* world) {
    vector_setup(&world->regions, REGION_MAX, sizeof(Region_v));
    for (size_t i = 0; i < REGION_MAX; i++) {
        Region* region = Region_Init(i);
        if (region == NULL) {
            continue;
        }

        Region_v container = { region };
        vector_push_back(&world->regions, &container);
    }
}

void SetRules(World* world) {
    /* Ganon can only carry triforce */
    Location* location = GetLocation(world, "Ganon");
    vector_setup(&location->itemRules, VECTOR_MINIMUM_CAPACITY, sizeof(Ast_v));
    Ast* rule = AST_NEW(AST_NAME, "Triforce");
    Ast_v container = { rule };
    vector_push_back(&location->itemRules, &container);
    rule = AST_NEW(AST_END);
    container.data = rule;
    vector_push_back(&location->itemRules, &container);
}

Region* World_GetRegion(World* world, char const* name) {
    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, name);

    Region* region = NULL;

    if (!ht_is_empty(&regionCache)) {
        region = ((Region_v*)ht_lookup(&regionCache, hashKeyBuffer))->data;
    }

    if (region != NULL) {
        return region;
    }

    VECTOR_FOR_EACH(&world->regions, regions) {
        Region_v regionContainer = ITERATOR_GET_AS(Region_v, &regions);
        memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
        strcpy(hashKeyBuffer, regionContainer.data->name);
        ht_insert(&regionCache, hashKeyBuffer, &regionContainer);
    }
    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, name);

    region = ((Region_v*)ht_lookup(&regionCache, hashKeyBuffer))->data;
    if (region != NULL) {
        return region;
    }

    char msg[0x100];
    sprintf(msg, "No such region %s", name);
    PRINTF("Randomizer error! %s\n", msg);
    Fault_AddHungupAndCrashImpl(" RANDOMIZER ERROR", msg);
}

Location* GetLocation(World* world, char const* name) {
    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, name);

    Location* location = NULL;

    if (!ht_is_empty(&regionCache)) {
        location = ((Location_v*)ht_lookup(&locationCache, hashKeyBuffer))->data;
    }

    if (location != NULL) {
        return location;
    }

    VECTOR_FOR_EACH(&world->regions, regions) {
        Region_v regionContainer = ITERATOR_GET_AS(Region_v, &regions);
        VECTOR_FOR_EACH(&regionContainer.data->locations, locations) {
            Location_v container = ITERATOR_GET_AS(Location_v, &locations);
            memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
            strcpy(hashKeyBuffer, container.data->name);
            ht_insert(&locationCache, hashKeyBuffer, &container);
        }
    }
    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, name);

    location = ((Location_v*)ht_lookup(&locationCache, hashKeyBuffer))->data;

    if (location != NULL) {
        return location;
    }

    char msg[0x100];
    sprintf(msg, "No such location %s", name);
    PRINTF("Randomizer error! %s\n", msg);
    Fault_AddHungupAndCrashImpl(" RANDOMIZER ERROR", msg);
}

LocationVector World_GetLocations(World* world) {
    if (vector_is_initialized(&allLocationsCache)) {
        return allLocationsCache;
    }

    vector_setup(&allLocationsCache, VECTOR_MINIMUM_CAPACITY, sizeof(Location_v));
    VECTOR_FOR_EACH(&world->regions, regions) {
        Region_v regionContainer = ITERATOR_GET_AS(Region_v, &regions);
        VECTOR_FOR_EACH(&regionContainer.data->locations, locations) {
            Location_v locationContainer = ITERATOR_GET_AS(Location_v, &locations);
            vector_push_back(&allLocationsCache, &locationContainer);
        }
    }

    return allLocationsCache;
}

LocationVector World_GetUnfilledLocations(World* world) {
    LocationVector unfilledLocations;
    vector_setup(&unfilledLocations, VECTOR_MINIMUM_CAPACITY, sizeof(Location_v));

    LocationVector allLocations = World_GetLocations(world);
    VECTOR_FOR_EACH(&allLocations, locations) {
        Location_v container = ITERATOR_GET_AS(Location_v, &locations);
        if (container.data->item.info == NULL) {
            vector_push_back(&unfilledLocations, &container);
        }
    }

    return unfilledLocations;
}

void GenerateItemPool(World* world) {
    LocationVector locations = World_GetLocations(world);
    StringVector pool;

    vector_setup(&pool, VECTOR_MINIMUM_CAPACITY, sizeof(String_v));
    VECTOR_FOR_EACH(&locations, locationI) {
        Location_v locationContainer = ITERATOR_GET_AS(Location_v, &locationI);
        Location location = *locationContainer.data;

        TriState shuffleItem = NONE;

        if (itemTable[location.vanillaItem].type == EVENT_ITEM) {
            /* Always placed items */
            shuffleItem = FALSE;
        } else if (location.scene <= SCENE_GERUDO_TRAINING_GROUND || location.scene == SCENE_INSIDE_GANONS_CASTLE) {
            /* Dungeon Items */
            SceneID dungeon = location.scene;
            if (location.scene == SCENE_INSIDE_GANONS_CASTLE) {
                dungeon = SCENE_GANONS_TOWER;
            }
            ItemType dungeonItemType = ITEM;

            if (location.vanillaItem >= ITEM_DUNGEON_BOSS_KEY_FOREST_TEMPLE && location.vanillaItem <= ITEM_DUNGEON_BOSS_KEY_GANONS_CASTLE) {
                dungeonItemType = BOSS_KEY;
                shuffleItem = NONE;
            } else if (location.vanillaItem >= ITEM_SMALL_KEY_FOREST_TEMPLE && location.vanillaItem <= ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND) {
                dungeonItemType = SMALL_KEY;
                shuffleItem = NONE;
            } else if (location.vanillaItem == ITEM_DUNGEON_MAP) {
                dungeonItemType = MAP;
                shuffleItem = NONE;
            } else if (location.vanillaItem == ITEM_DUNGEON_COMPASS) {
                dungeonItemType = COMPASS;
                shuffleItem = NONE;
            } else {
                dungeonItemType = ITEM;
                shuffleItem = TRUE;
            }

            switch (dungeonItemType) {
                case BOSS_KEY:
                    world->dungeons[dungeon].bossKey = true;
                    break;
                case MAP:
                    world->dungeons[dungeon].map = true;
                    break;
                case COMPASS:
                    world->dungeons[dungeon].compass = true;
                    break;
                case SMALL_KEY:
                    world->dungeons[dungeon].smallKeys += 1;
                    break;
                default:
            }
        } else if (location.type == CHEST_LOCATION) {
            /* Rest of the items */
            shuffleItem = TRUE;
        }

        if (shuffleItem == TRUE) {
            String_v container = { itemTable[location.vanillaItem].name };
            vector_push_back(&pool, &container);
        } else if (shuffleItem != NONE) {
            Item* newItem = Item_Init(itemTable[location.vanillaItem].name, false);
            locationContainer.data->item = *newItem;
            ZELDA_ARENA_FREE(newItem, __FILE_NAME__, __LINE__);
        }
    }

    vector_setup(&world->itemPool, VECTOR_MINIMUM_CAPACITY, sizeof(Item_v));
    world->itemPool = Item_Factory(pool);
}

ItemVector World_GetRestrictedDungeonItems(World* world) {
    ItemVector dungeonItems;
    vector_setup(&dungeonItems, VECTOR_MINIMUM_CAPACITY, sizeof(Item_v));
    Item_v container = { };

    for (SceneID dungeon = SCENE_DEKU_TREE; dungeon <= SCENE_GERUDO_TRAINING_GROUND; dungeon++) {
        if (world->dungeons[dungeon].bossKey) {
            container.data = Item_Init(itemTable[ITEM_DUNGEON_BOSS_KEY_DEKU_TREE + dungeon].name, false);
            container.data->scene = dungeon;
            vector_push_back(&dungeonItems, &container);
        }
        if (world->dungeons[dungeon].map) {
            container.data = Item_Init("Dungeon Map", false);
            container.data->scene = dungeon;
            vector_push_back(&dungeonItems, &container);
        }
        if (world->dungeons[dungeon].compass) {
            container.data = Item_Init("Compass", false);
            container.data->scene = dungeon;
            vector_push_back(&dungeonItems, &container);
        }
        for (size_t i = 0; i < world->dungeons[dungeon].smallKeys; i++) {
            container.data = Item_Init(itemTable[ITEM_SMALL_KEY_DEKU_TREE + dungeon].name, false);
            container.data->scene = dungeon;
            vector_push_back(&dungeonItems, &container);
        }
    }

    return dungeonItems;
}

void World_InitializeEntrances(World* world) {
    VECTOR_FOR_EACH(&world->regions, regions) {
        Region_v regionContainer = ITERATOR_GET_AS(Region_v, &regions);
        VECTOR_FOR_EACH(&regionContainer.data->exits, exits) {
            Entrance_v exitContainer = ITERATOR_GET_AS(Entrance_v, &exits);
            Entrance_Connect(exitContainer.data, World_GetRegion(world, exitContainer.data->name));
        }
    }
}
