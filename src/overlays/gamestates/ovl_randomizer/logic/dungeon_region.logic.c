/*
REGION                              NAME
    AST COMMANDS
total = 37
*/
{ DEKU_TREE_LOBBY,                  "Kokiri Forest", {
    { AST_END }
} },
{ DEKU_TREE_LOBBY,                  "Gohma", {
    { AST_HAS, ITEM_SLINGSHOT }, { AST_END }
} },
{ DEKU_TREE_BOSS,                   "Deku Tree Lobby", {
    { AST_END }
} },
{ DODONGOS_CAVERN_LOBBY,            "Death Mountain Trail", {
    { AST_END }
} },
{ DODONGOS_CAVERN_LOBBY,            "King Dodongo", {
    { AST_HAS, ITEM_BOMB_BAG_20 }, { AST_HAS, ITEM_SLINGSHOT }, { AST_END }
} },
{ DODONGOS_CAVERN_BOSS,             "Dodongo's Cavern Lobby", {
    { AST_END }
} },
{ JABU_JABUS_BELLY_LOBBY,           "Zora's Fountain", {
    { AST_END }
} },
{ JABU_JABUS_BELLY_LOBBY,           "Barinade", {
    { AST_HAS, ITEM_BOOMERANG }, { AST_END }
} },
{ JABU_JABUS_BELLY_BOSS,            "Jabu-Jabu's Belly Lobby", {
    { AST_IS_CHILD }, { AST_END }
} },
{ BOTTOM_OF_THE_WELL_LOBBY,         "Kakariko Village", {
    { AST_END }
} },
{ FOREST_TEMPLE_LOBBY,              "Sacred Forest Meadow", {
    { AST_END }
} },
{ FOREST_TEMPLE_LOBBY,              "Phantom Ganon", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FOREST_TEMPLE, 5 }, { AST_HAS, ITEM_DUNGEON_BOSS_KEY_FOREST_TEMPLE }, { AST_CAN_USE, ITEM_BOW }, { AST_END }
} },
{ FOREST_TEMPLE_BOSS,               "Forest Temple Lobby", {
    { AST_END }
} },
{ FOREST_TEMPLE_LOBBY,              "Forest Temple Block Push Room", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FOREST_TEMPLE, 1 }, { AST_END }
} },
{ FOREST_TEMPLE_BLOCK_PUSH_ROOM,    "Forest Temple Outside Upper Ledge", {
    { AST_CAN_USE, ITEM_BOOTS_HOVER }, { AST_END }
} },
{ FOREST_TEMPLE_BLOCK_PUSH_ROOM,    "Forest Temple Bow Region", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FOREST_TEMPLE, 3 }, { AST_END }
} },
{ FOREST_TEMPLE_BLOCK_PUSH_ROOM,    "Forest Temple Straightened Hall", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FOREST_TEMPLE, 2 }, { AST_CAN_USE, ITEM_BOW }, { AST_END }
} },
{ FOREST_TEMPLE_STRAIGHT_HALL,      "Forest Temple Outside Upper Ledge", {
    { AST_END }
} },
{ FOREST_TEMPLE_OUTSIDE_UPPER,      "Forest Temple Lobby", {
    { AST_END }
} },
{ FOREST_TEMPLE_BOW_REGION,         "Forest Temple Frozen Eye Switch Room", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FOREST_TEMPLE, 5 }, { AST_END }
} },
{ FOREST_TEMPLE_FROZEN_EYE,         "Forest Temple Lobby", {
    { AST_END }
} },
{ FIRE_TEMPLE_LOBBY,                "Death Mountain Crater Central", {
    { AST_END }
} },
{ FIRE_TEMPLE_LOBBY,                "Volvagia", {
    { AST_HAS, ITEM_DUNGEON_BOSS_KEY_FIRE_TEMPLE }, { AST_HAS, ITEM_HAMMER }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_END }
} },
{ FIRE_TEMPLE_BOSS,                 "Fire Temple Lobby", {
    { AST_END }
} },
{ FIRE_TEMPLE_LOBBY, "Fire Temple Big Lava Room", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 2 }, { AST_END }
} },
{ FIRE_TEMPLE_BIG_LAVA_ROOM, "Fire Temple Elevator Room", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 3 }, { AST_END }
} },
{ FIRE_TEMPLE_ELEVATOR_ROOM, "Fire Temple Boulder Maze Lower", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 4 }, { AST_END }
} },
{ FIRE_TEMPLE_MAZE_LOWER, "Fire Temple Narrow Path Room", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 5 }, { AST_END }
} },
{ FIRE_TEMPLE_NARROW_PATH, "Fire Temple Boulder Maze Upper", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 6 }, { AST_END }
} },
{ FIRE_TEMPLE_MAZE_UPPER, "Fire Temple Flame Maze", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 7 }, { AST_END }
} },
{ FIRE_TEMPLE_FLAME_MAZE, "Fire Temple Upper", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 8 }, { AST_OR }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_HAS, ITEM_HAMMER }, { AST_END }
} },
{ FIRE_TEMPLE_UPPER, "Volvagia", {
    { AST_HAS, ITEM_DUNGEON_BOSS_KEY_FIRE_TEMPLE }, { AST_HAS, ITEM_HAMMER }, { AST_END }
} },
{ WATER_TEMPLE_LOBBY,               "Lake Hylia", {
    { AST_END }
} },
{ WATER_TEMPLE_LOBBY,               "Morpha", {
    { AST_HAS, ITEM_DUNGEON_BOSS_KEY_WATER_TEMPLE }, { AST_HAS, ITEM_LONGSHOT }, { AST_END }
} },
{ WATER_TEMPLE_BOSS,                "Water Temple Lobby", {
    { AST_END }
} },
{ SHADOW_TEMPLE_LOBBY,              "Graveyard", {
    { AST_END }
} },
{ SHADOW_TEMPLE_LOBBY,              "Bongo-Bongo", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 4 }, { AST_HAS, ITEM_DUNGEON_BOSS_KEY_SHADOW_TEMPLE }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_END }
} },
{ SHADOW_TEMPLE_BOSS,               "Shadow Temple Lobby", {
    { AST_END }
} },
{ SPIRIT_TEMPLE_LOBBY,              "Desert Colossus", {
    { AST_END }
} },
{ SPIRIT_TEMPLE_LOBBY,              "Twinrova", {
    { AST_IS_ADULT }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5 }, { AST_HAS, ITEM_DUNGEON_BOSS_KEY_SPIRIT_TEMPLE }, { AST_HAS, ITEM_SHIELD_MIRROR }, { AST_HAS, ITEM_LONGSHOT }, { AST_END }
} },
{ SPIRIT_TEMPLE_BOSS,               "Spirit Temple Lobby", {
    { AST_END }
} },
{ ICE_CAVERN_LOBBY,                 "Zora's Fountain", {
    { AST_END }
} },
{ GERUDO_TRAINING_GROUND_LOBBY,     "Gerudo Fortress", {
    { AST_END }
} },
{ GANONS_CASTLE_LOBBY,              "Outside Ganon's Castle", {
    { AST_END }
} },
{ GANONS_CASTLE_LOBBY,              "Ganon's Castle Tower", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_GANONS_CASTLE, 2 }, { AST_END }
} },
