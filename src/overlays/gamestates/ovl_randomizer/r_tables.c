#include "randomizer.h"
#include "randomizer_state.h"

#include "r_ast.h"
#include "r_tables.h"

#include "array_count.h"
#include "z64item.h"

LocationTableRow locationTable[] = {
    { KOKIRI_FOREST, "KF Mido's Top Left Chest",                                 CHEST_LOCATION,          SCENE_MIDOS_HOUSE,                  0x00, ITEM_RUPEE_BLUE, {
        { AST_END }
    }},
    { KOKIRI_FOREST, "KF Mido's Top Right Chest",                                CHEST_LOCATION,          SCENE_MIDOS_HOUSE,                  0x01, ITEM_RUPEE_BLUE, {
        { AST_END }
    }},
    { KOKIRI_FOREST, "KF Mido's Bottom Left Chest",                              CHEST_LOCATION,          SCENE_MIDOS_HOUSE,                  0x02, ITEM_RUPEE_GREEN, {
        { AST_END }
    }},
    { KOKIRI_FOREST, "KF Mido's Bottom Right Chest",                             CHEST_LOCATION,          SCENE_MIDOS_HOUSE,                  0x03, ITEM_RECOVERY_HEART, {
        { AST_END }
    }},
    { KOKIRI_FOREST, "KF Kokiri Sword Chest",                                    CHEST_LOCATION,          SCENE_KOKIRI_FOREST,                0x00, ITEM_SWORD_KOKIRI, {
        { AST_IS_CHILD }, { AST_END }
    }},
    { CASTLE_TOWN, "Market Treasure Chest Game Reward",                        CHEST_LOCATION,          SCENE_TREASURE_BOX_SHOP,            0x0A, ITEM_HEART_PIECE_2, {
        { AST_IS_CHILD }, { AST_AND }, { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { GRAVEYARD, "Graveyard Shield Grave Chest",                             CHEST_LOCATION,          SCENE_GRAVE_WITH_FAIRYS_FOUNTAIN,   0x00, ITEM_SHIELD_HYLIAN, {
        { AST_END }
    }},
    { GRAVEYARD, "Graveyard Heart Piece Grave Chest",                        CHEST_LOCATION,          SCENE_REDEAD_GRAVE,                 0x00, ITEM_HEART_PIECE, {
        { AST_CAN_PLAY, ITEM_SONG_LULLABY }, { AST_END }
    }},
    { GRAVEYARD, "Graveyard Royal Family's Tomb Chest",                      CHEST_LOCATION,          SCENE_ROYAL_FAMILYS_TOMB,           0x00, ITEM_BOMBS_5, {
        { AST_CAN_PLAY, ITEM_SONG_LULLABY }, { AST_END }
    }},
    { GRAVEYARD, "Graveyard Dampé Race Hookshot Chest",                      CHEST_LOCATION,          SCENE_WINDMILL_AND_DAMPES_GRAVE,    0x00, ITEM_HOOKSHOT, {
        { AST_IS_ADULT }, { AST_END }
    }},
    { DEATH_MOUNTAIN, "DMT Chest",                                                CHEST_LOCATION,          SCENE_DEATH_MOUNTAIN_TRAIL,         0x01, ITEM_RUPEE_PURPLE, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { GORON_CITY, "GC Maze Left Chest",                                       CHEST_LOCATION,          SCENE_GORON_CITY,                   0x00, ITEM_RUPEE_GOLD, {
        { AST_CAN_USE, ITEM_HAMMER }, { AST_OR }, { AST_CAN_USE, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_END }
    }},
    { GORON_CITY, "GC Maze Right Chest",                                      CHEST_LOCATION,          SCENE_GORON_CITY,                   0x01, ITEM_RUPEE_PURPLE, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { GORON_CITY, "GC Maze Center Chest",                                     CHEST_LOCATION,          SCENE_GORON_CITY,                   0x02, ITEM_RUPEE_PURPLE, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { ZORAS_DOMAIN, "ZD Chest",                                                 CHEST_LOCATION,          SCENE_ZORAS_DOMAIN,                 0x00, ITEM_HEART_PIECE, {
        { AST_IS_CHILD }, { AST_END }
    }},
    { GERUDO_VALLEY_FAR_SIDE, "GV Chest",                                                 CHEST_LOCATION,          SCENE_GERUDO_VALLEY,                0x00, ITEM_RUPEE_PURPLE, {
        { AST_HAS, ITEM_HAMMER }, { AST_END }
    }},
    { GERUDO_FORTRESS, "GF Chest",                                                 CHEST_LOCATION,          SCENE_GERUDOS_FORTRESS,             0x00, ITEM_HEART_PIECE, {
        { AST_HAS, ITEM_HOOKSHOT }, { AST_END }
    }},
    { HAUNTED_WASTELAND, "Wasteland Chest",                                          CHEST_LOCATION,          SCENE_HAUNTED_WASTELAND,            0x00, ITEM_RUPEE_PURPLE, {
        { AST_CAN_REACH, DEATH_MOUNTAIN_CRATER_UPPER, LINK_AGE_EITHER }, { AST_END }
    }},
    { HYRULE_FIELD, "HF Near Market Grotto Chest",                              CHEST_LOCATION,          SCENE_GROTTOS,                      0x00, ITEM_RUPEE_BLUE, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { HYRULE_FIELD, "HF Southeast Grotto Chest",                                CHEST_LOCATION,          SCENE_GROTTOS,                      0x02, ITEM_RUPEE_RED, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { HYRULE_FIELD, "HF Open Grotto Chest",                                     CHEST_LOCATION,          SCENE_GROTTOS,                      0x03, ITEM_RUPEE_BLUE, {
        { AST_END }
    }},
    { KAKARIKO_VILLAGE, "Kak Open Grotto Chest",                                    CHEST_LOCATION,          SCENE_GROTTOS,                      0x08, ITEM_RUPEE_RED, {
        { AST_END }
    }},
    { ZORA_RIVER, "ZR Open Grotto Chest",                                     CHEST_LOCATION,          SCENE_GROTTOS,                      0x09, ITEM_RUPEE_RED, {
        { AST_END }
    }},
    { KAKARIKO_VILLAGE, "Kak Redead Grotto Chest",                                  CHEST_LOCATION,          SCENE_GROTTOS,                      0x0A, ITEM_RUPEE_GOLD, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { KOKIRI_FOREST, "KF Storms Grotto Chest",                                   CHEST_LOCATION,          SCENE_GROTTOS,                      0x0C, ITEM_RUPEE_RED, {
        { AST_CAN_PLAY, ITEM_SONG_STORMS }, { AST_END }
    }},
    { SACRED_FOREST_MEADOW_ENTRY, "SFM Wolfos Grotto Chest",                                  CHEST_LOCATION,          SCENE_GROTTOS,                      0x11, ITEM_RUPEE_PURPLE, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { LOST_WOODS, "LW Near Shortcuts Grotto Chest",                           CHEST_LOCATION,          SCENE_GROTTOS,                      0x14, ITEM_RUPEE_BLUE, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { DEATH_MOUNTAIN, "DMT Storms Grotto Chest",                                  CHEST_LOCATION,          SCENE_GROTTOS,                      0x17, ITEM_RUPEE_GOLD, {
        { AST_CAN_PLAY, ITEM_SONG_STORMS }, { AST_END }
    }},
    { DEATH_MOUNTAIN_CRATER_UPPER, "DMC Upper Grotto Chest",                                   CHEST_LOCATION,          SCENE_GROTTOS,                      0x1A, ITEM_BOMBS_20, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_END }
    }},
    { DEKU_TREE_LOBBY, "Deku Tree Map Chest",                                      CHEST_LOCATION,          SCENE_DEKU_TREE,                0x03, ITEM_DUNGEON_MAP, {
        { AST_END }
    }},
    { DEKU_TREE_LOBBY, "Deku Tree Slingshot Room Side Chest",                      CHEST_LOCATION,          SCENE_DEKU_TREE, 0x05, ITEM_RECOVERY_HEART, {
        { AST_END }
    }},
    { DEKU_TREE_LOBBY, "Deku Tree Slingshot Chest",                                CHEST_LOCATION,          SCENE_DEKU_TREE, 0x01, ITEM_SLINGSHOT, {
        { AST_END }
    }},
    { DEKU_TREE_LOBBY, "Deku Tree Compass Chest",                                  CHEST_LOCATION,          SCENE_DEKU_TREE, 0x02, ITEM_DUNGEON_COMPASS, {
        { AST_END }
    }},
    { DEKU_TREE_LOBBY, "Deku Tree Compass Room Side Chest",                        CHEST_LOCATION,          SCENE_DEKU_TREE, 0x06, ITEM_RECOVERY_HEART, {
        { AST_END }
    }},
    { DEKU_TREE_LOBBY, "Deku Tree Basement Chest",                                 CHEST_LOCATION,          SCENE_DEKU_TREE, 0x04, ITEM_RECOVERY_HEART, {
        { AST_END }
    }},
    { DEKU_TREE_BOSS, "Defeat Gohma", EVENT_LOCATION, SCENE_DEKU_TREE_BOSS, 0, EVENT_DEFEAT_GOHMA, {
        { AST_END }
    }},
    { DODONGOS_CAVERN_LOBBY, "Dodongo's Cavern Map Chest",                               CHEST_LOCATION,          SCENE_DODONGOS_CAVERN,0x08, ITEM_DUNGEON_MAP, {
        { AST_END }
    }},
    { DODONGOS_CAVERN_LOBBY, "Dodongo's Cavern Compass Chest",                           CHEST_LOCATION,          SCENE_DODONGOS_CAVERN,0x05, ITEM_DUNGEON_COMPASS, {
        { AST_END }
    }},
    { DODONGOS_CAVERN_LOBBY, "Dodongo's Cavern Bomb Flower Platform Chest",              CHEST_LOCATION,          SCENE_DODONGOS_CAVERN, 0x06, ITEM_RUPEE_RED, {
        { AST_END }
    }},
    { DODONGOS_CAVERN_LOBBY, "Dodongo's Cavern Bomb Bag Chest",                          CHEST_LOCATION,          SCENE_DODONGOS_CAVERN, 0x04, ITEM_BOMB_BAG_20, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_AND }, { AST_HAS, ITEM_SLINGSHOT }, { AST_END }
    }},
    { DODONGOS_CAVERN_LOBBY, "Dodongo's Cavern End of Bridge Chest",                     CHEST_LOCATION,          SCENE_DODONGOS_CAVERN,0x0A,  ITEM_SHIELD_DEKU, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_AND }, { AST_HAS, ITEM_SLINGSHOT }, { AST_END }
    }},
    { DODONGOS_CAVERN_LOBBY, "Dodongo's Cavern Boss Room Chest",                         CHEST_LOCATION,          SCENE_DODONGOS_CAVERN_BOSS, 0x00, ITEM_BOMBS_5, {
        { AST_CAN_BLAST_OR_SMASH }, { AST_AND }, { AST_HAS, ITEM_SLINGSHOT }, { AST_END }
    }},
    { DODONGOS_CAVERN_BOSS, "Defeat King Dodongo", EVENT_LOCATION, SCENE_DODONGOS_CAVERN_BOSS, 0, EVENT_DEFEAT_KING_DODONGO, {
        { AST_END }
    }},
    { JABU_JABUS_BELLY_LOBBY, "Jabu Jabu's Belly Boomerang Chest",                        CHEST_LOCATION,          SCENE_JABU_JABU, 0x01, ITEM_BOOMERANG, {
        { AST_END }
    }},
    { JABU_JABUS_BELLY_LOBBY, "Jabu Jabu's Belly Map Chest",                              CHEST_LOCATION,          SCENE_JABU_JABU, 0x02, ITEM_DUNGEON_MAP, {
        { AST_HAS, ITEM_BOOMERANG }, { AST_END }
    }},
    { JABU_JABUS_BELLY_LOBBY, "Jabu Jabu's Belly Compass Chest",                          CHEST_LOCATION,          SCENE_JABU_JABU, 0x04, ITEM_DUNGEON_COMPASS, {
        { AST_HAS, ITEM_BOOMERANG }, { AST_END }
    }},
    { JABU_JABUS_BELLY_BOSS, "Defeat Barinade", EVENT_LOCATION, SCENE_JABU_JABU_BOSS, 0, EVENT_DEFEAT_BARINADE, {
        { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Front Left Fake Wall Chest",            CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x08, ITEM_SMALL_KEY_BOTTOM_OF_THE_WELL, {
        { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Front Center Bombable Chest",           CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x02, ITEM_BOMBCHU, {
        { AST_HAS, ITEM_BOMB_BAG_20 }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Back Left Bombable Chest",              CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x04, ITEM_DEKU_NUTS_10, {
        { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_AND }, { AST_HAS, ITEM_BOMB_BAG_20 }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Underwater Left Chest",                 CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x09, ITEM_RECOVERY_HEART, {
        { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Compass Chest",                         CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x01, ITEM_DUNGEON_COMPASS, {
        { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Center Skulltula Chest",                CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x0E, ITEM_DEKU_NUTS_5, {
        { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Right Bottom Fake Wall Chest",          CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x05, ITEM_SMALL_KEY_BOTTOM_OF_THE_WELL, {
        { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Fire Keese Chest",                      CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x0A, ITEM_SHIELD_DEKU, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_BOTTOM_OF_THE_WELL, 2 }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Like-Like Chest",                       CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x0C, ITEM_SHIELD_HYLIAN, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_BOTTOM_OF_THE_WELL, 2 }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Map Chest",                             CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x07, ITEM_DUNGEON_MAP, {
        { AST_HAS, ITEM_BOMB_BAG_20 }, { AST_OR }, { AST_CAN_REACH, DEATH_MOUNTAIN_CRATER_UPPER, LINK_AGE_EITHER }, { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Underwater Front Chest",                CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x10, ITEM_BOMBS_10, {
        { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Invisible Chest",                       CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x14, ITEM_RUPEE_GOLD, {
        { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_AND }, { AST_HAS, ITEM_SWORD_KOKIRI },  { AST_END }
    }},
    { BOTTOM_OF_THE_WELL_LOBBY, "Bottom of the Well Lens of Truth Chest",                   CHEST_LOCATION,          SCENE_BOTTOM_OF_THE_WELL, 0x03, ITEM_LENS_OF_TRUTH, {
        { AST_HAS, ITEM_SWORD_KOKIRI },  { AST_END }
    }},
    { FOREST_TEMPLE_LOBBY, "Forest Temple First Room Chest",                           CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x03, ITEM_SMALL_KEY_FOREST_TEMPLE, {
        { AST_END }
    }},
    { FOREST_TEMPLE_LOBBY, "Forest Temple First Stalfos Chest",                        CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x00, ITEM_SMALL_KEY_FOREST_TEMPLE, {
        { AST_END }
    }},
    { FOREST_TEMPLE_LOBBY, "Forest Temple Raised Island Courtyard Chest",              CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x05, ITEM_RECOVERY_HEART, {
        { AST_CAN_USE, ITEM_BOW }, {AST_OR}, {AST_HAS_COUNT, ITEM_SMALL_KEY_FOREST_TEMPLE, 5}, { AST_GROUP_CLOSE }, { AST_END }
    }},
    { FOREST_TEMPLE_LOBBY, "Forest Temple Map Chest",                                  CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x01, ITEM_DUNGEON_MAP, {
        { AST_END }
    }},
    { FOREST_TEMPLE_LOBBY, "Forest Temple Well Chest",                                 CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x09, ITEM_SMALL_KEY_FOREST_TEMPLE, {
        { AST_END }
    }},
    { FOREST_TEMPLE_BLOCK_PUSH_ROOM, "Forest Temple Eye Switch Chest",                           CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x04, ITEM_ARROWS_30, {
        { AST_CAN_USE, ITEM_BOW }, { AST_END }
    }},
    { FOREST_TEMPLE_STRAIGHT_HALL, "Forest Temple Boss Key Chest",                             CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x0E, ITEM_DUNGEON_BOSS_KEY_FOREST_TEMPLE, {
        { AST_END }
    }},
    { FOREST_TEMPLE_OUTSIDE_UPPER, "Forest Temple Floormaster Chest",                          CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x02, ITEM_SMALL_KEY_FOREST_TEMPLE, {
        { AST_END }
    }},
    { FOREST_TEMPLE_BOW_REGION, "Forest Temple Red Poe Chest",                              CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x0D, ITEM_SMALL_KEY_FOREST_TEMPLE, {
        { AST_CAN_USE, ITEM_BOW }, { AST_END }
    }},
    { FOREST_TEMPLE_BOW_REGION, "Forest Temple Bow Chest",                                  CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x0C, ITEM_BOW, {
        { AST_END }
    }},
    { FOREST_TEMPLE_BOW_REGION, "Forest Temple Blue Poe Chest",                             CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x0F, ITEM_DUNGEON_COMPASS, {
        { AST_CAN_USE, ITEM_BOW }, { AST_END }
    }},
    { FOREST_TEMPLE_FROZEN_EYE, "Forest Temple Falling Ceiling Room Chest",                 CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x07, ITEM_ARROWS_10, {
        { AST_END }
    }},
    { FOREST_TEMPLE_FROZEN_EYE, "Forest Temple Basement Chest",                             CHEST_LOCATION,          SCENE_FOREST_TEMPLE, 0x0B, ITEM_ARROWS_5, {
        { AST_END }
    }},
    { FOREST_TEMPLE_BOSS, "Defeat Phantom Ganon", EVENT_LOCATION, SCENE_FOREST_TEMPLE_BOSS, 0, EVENT_DEFEAT_PHANTOM_GANON, {
        { AST_END }
    }},
    { FIRE_TEMPLE_LOBBY, "Fire Temple Near Boss Chest",                              CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x01, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_END }
    }},
    { FIRE_TEMPLE_LOBBY, "Fire Temple Flare Dancer Chest",                           CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x00, ITEM_BOMBS_10, {
        { AST_HAS, ITEM_HAMMER }, { AST_END }
    }},
    { FIRE_TEMPLE_LOBBY, "Fire Temple Boss Key Chest",                               CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x0C, ITEM_DUNGEON_BOSS_KEY_FIRE_TEMPLE, {
        { AST_HAS, ITEM_HAMMER }, { AST_END }
    }},
    { FIRE_TEMPLE_BIG_LAVA_ROOM, "Fire Temple Big Lava Room Lower Open Door Chest",          CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x04, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_END }
    }},
    { FIRE_TEMPLE_BIG_LAVA_ROOM, "Fire Temple Big Lava Room Blocked Door Chest",             CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x02, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_END }
    }},
    { FIRE_TEMPLE_MAZE_LOWER, "Fire Temple Boulder Maze Lower Chest",                     CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x03, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_END }
    }},
    { FIRE_TEMPLE_MAZE_LOWER, "Fire Temple Boulder Maze Side Room Chest",                 CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x08, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_END }
    }},
    { FIRE_TEMPLE_NARROW_PATH, "Fire Temple Map Chest",                                    CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x0A, ITEM_DUNGEON_MAP, {
        { AST_HAS, ITEM_BOW }, { AST_OR }, { AST_HAS_COUNT, ITEM_SMALL_KEY_FIRE_TEMPLE, 6 }, { AST_END }
    }},
    { FIRE_TEMPLE_MAZE_UPPER, "Fire Temple Boulder Maze Shortcut Chest",                  CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x0B, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_END }
    }},
    { FIRE_TEMPLE_MAZE_UPPER, "Fire Temple Boulder Maze Upper Chest",                     CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x06, ITEM_SMALL_KEY_FIRE_TEMPLE, {
    { AST_END }
    }},
    { FIRE_TEMPLE_MAZE_UPPER, "Fire Temple Scarecrow Chest",                              CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x0D, ITEM_RUPEE_GOLD, {
        { AST_HAS, ITEM_HOOKSHOT }, { AST_END }
    }},
    { FIRE_TEMPLE_FLAME_MAZE, "Fire Temple Compass Chest",                                CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x07, ITEM_DUNGEON_COMPASS, {
        { AST_END }
    }},
    { FIRE_TEMPLE_UPPER, "Fire Temple Megaton Hammer Chest",                         CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x05, ITEM_HAMMER, {
        { AST_END }
    }},
    { FIRE_TEMPLE_UPPER, "Fire Temple Highest Goron Chest",                          CHEST_LOCATION,          SCENE_FIRE_TEMPLE, 0x09, ITEM_SMALL_KEY_FIRE_TEMPLE, {
        { AST_HAS, ITEM_HAMMER }, { AST_END }
    }},
    { FIRE_TEMPLE_BOSS, "Defeat Volvagia", EVENT_LOCATION, SCENE_FIRE_TEMPLE_BOSS, 0, EVENT_DEFEAT_VOLVAGIA, {
        { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Compass Chest",                               CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x09, ITEM_DUNGEON_COMPASS, {
        { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Map Chest",                                   CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x02, ITEM_DUNGEON_MAP, {
        { AST_HAS, ITEM_HOOKSHOT }, { AST_OR }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_OR }, { AST_HAS, ITEM_BOW }, { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Cracked Wall Chest",                          CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x00, ITEM_SMALL_KEY_WATER_TEMPLE, {
        { AST_HAS, ITEM_HOOKSHOT }, { AST_OR }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_OR }, { AST_HAS, ITEM_BOW }, { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Torches Chest",                               CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x01, ITEM_SMALL_KEY_WATER_TEMPLE, {
        { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Boss Key Chest",                              CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x05, ITEM_DUNGEON_BOSS_KEY_WATER_TEMPLE, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_WATER_TEMPLE, 6 }, { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Central Pillar Chest",                        CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x06, ITEM_SMALL_KEY_WATER_TEMPLE, {
        { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Central Bow Target Chest",                    CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x08, ITEM_SMALL_KEY_WATER_TEMPLE, {
        { AST_HAS, ITEM_BOW }, { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Longshot Chest",                              CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x07, ITEM_LONGSHOT, {
        { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_WATER_TEMPLE, 6 }, { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple River Chest",                                 CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x03, ITEM_SMALL_KEY_WATER_TEMPLE, {
        { AST_HAS, ITEM_BOW }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_WATER_TEMPLE, 6 }, { AST_END }
    }},
    { WATER_TEMPLE_BOSS, "Defeat Morpha", EVENT_LOCATION, SCENE_WATER_TEMPLE_BOSS, 0, EVENT_DEFEAT_MORPHA, {
        { AST_END }
    }},
    { WATER_TEMPLE_LOBBY, "Water Temple Dragon Chest",                                CHEST_LOCATION,          SCENE_WATER_TEMPLE, 0x0A, ITEM_SMALL_KEY_WATER_TEMPLE, {
        { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Map Chest",                                  CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x01, ITEM_DUNGEON_MAP, {
        { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Hover Boots Chest",                          CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x07, ITEM_BOOTS_HOVER, {
        { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Compass Chest",                              CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x03, ITEM_DUNGEON_COMPASS, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Early Silver Rupee Chest",                   CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x02, ITEM_SMALL_KEY_SHADOW_TEMPLE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Invisible Blades Visible Chest",             CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x0C, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 1 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Invisible Blades Invisible Chest",           CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x16, ITEM_ARROWS_30, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 1 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Falling Spikes Lower Chest",                 CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x05, ITEM_ARROWS_10, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 1 },  { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Falling Spikes Upper Chest",                 CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x06, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 1 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Falling Spikes Switch Chest",                CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x04, ITEM_SMALL_KEY_SHADOW_TEMPLE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 1 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Invisible Spikes Chest",                     CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x09, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 2 }, { AST_AND }, { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Wind Hint Chest",                            CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x15, ITEM_ARROWS_10, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 3 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple After Wind Enemy Chest",                     CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x08, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 3 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple After Wind Hidden Chest",                    CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x14, ITEM_SMALL_KEY_SHADOW_TEMPLE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 3 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Spike Walls Left Chest",                     CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x0A, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 3 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Boss Key Chest",                             CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x0B, ITEM_DUNGEON_BOSS_KEY_SHADOW_TEMPLE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 3 }, { AST_END }
    }},
    { SHADOW_TEMPLE_LOBBY, "Shadow Temple Invisible Floormaster Chest",                CHEST_LOCATION,          SCENE_SHADOW_TEMPLE, 0x0D, ITEM_SMALL_KEY_SHADOW_TEMPLE, {
        { AST_HAS, ITEM_BOOTS_HOVER }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SHADOW_TEMPLE, 3 }, { AST_END }
    }},
    { SHADOW_TEMPLE_BOSS, "Defeat Bongo-Bongo", EVENT_LOCATION, SCENE_SHADOW_TEMPLE_BOSS, 0, EVENT_DEFEAT_BONGO_BONGO, {
        { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Child Bridge Chest",                         CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x08, ITEM_SHIELD_DEKU, {
        { AST_IS_CHILD }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Child Early Torches Chest",                  CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x00, ITEM_SMALL_KEY_SPIRIT_TEMPLE, {
        { AST_IS_CHILD }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Child Climb North Chest",                    CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x06, ITEM_BOMBCHU, {
        { AST_GROUP_OPEN },
        { AST_IS_CHILD }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5},
        { AST_GROUP_CLOSE }, { AST_OR },
        { AST_GROUP_OPEN },
        { AST_IS_ADULT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 },
        { AST_GROUP_CLOSE },
        { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Child Climb East Chest",                     CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x0C, ITEM_SHIELD_DEKU, {
        { AST_GROUP_OPEN },
        { AST_IS_CHILD }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5},
        { AST_GROUP_CLOSE }, { AST_OR },
        { AST_GROUP_OPEN },
        { AST_IS_ADULT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 },
        { AST_GROUP_CLOSE },
        { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Map Chest",                                  CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x03, ITEM_DUNGEON_MAP, {
        { AST_GROUP_OPEN },
        { AST_IS_CHILD }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5},
        { AST_GROUP_CLOSE }, { AST_OR },
        { AST_GROUP_OPEN },
        { AST_IS_ADULT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 },
        { AST_GROUP_CLOSE },
        { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Sun Block Room Chest",                       CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x01, ITEM_SMALL_KEY_SPIRIT_TEMPLE, {
        { AST_GROUP_OPEN },
        { AST_IS_CHILD }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5},
        { AST_GROUP_CLOSE }, { AST_OR },
        { AST_GROUP_OPEN },
        { AST_IS_ADULT }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 },
        { AST_GROUP_CLOSE },
        { AST_END }
    }},
    { SPIRIT_TEMPLE_HANDS, "Spirit Temple Silver Gauntlets Chest",                     CHEST_LOCATION,          SCENE_DESERT_COLOSSUS, 0x0B, ITEM_STRENGTH_SILVER_GAUNTLETS, {
        { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Compass Chest",                              CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x04, ITEM_DUNGEON_COMPASS,   {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT}, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Early Adult Right Chest",                    CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x07, ITEM_SMALL_KEY_SPIRIT_TEMPLE, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS, ITEM_HOOKSHOT}, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple First Mirror Left Chest",                    CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x0D, ITEM_INVALID_1, { // Ice trap
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple First Mirror Right Chest",                   CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x0E, ITEM_RECOVERY_HEART, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Statue Room Northeast Chest",                CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x0F, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Statue Room Hand Chest",                     CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x02, ITEM_SMALL_KEY_SPIRIT_TEMPLE, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Near Four Armos Chest",                      CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x05, ITEM_SMALL_KEY_SPIRIT_TEMPLE, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 4 }, { AST_AND }, { AST_HAS, ITEM_SHIELD_MIRROR }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Hallway Right Invisible Chest",              CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x14, ITEM_RECOVERY_HEART, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 4 }, { AST_AND }, { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Hallway Left Invisible Chest",               CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x15, ITEM_RECOVERY_HEART, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 4 }, { AST_AND }, { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { SPIRIT_TEMPLE_HANDS, "Spirit Temple Mirror Shield Chest",                        CHEST_LOCATION,          SCENE_DESERT_COLOSSUS, 0x09, ITEM_SHIELD_MIRROR, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 4 }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Boss Key Chest",                             CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x0A, ITEM_DUNGEON_BOSS_KEY_SPIRIT_TEMPLE, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5 }, { AST_AND }, { AST_HAS, ITEM_SHIELD_MIRROR }, { AST_END }
    }},
    { SPIRIT_TEMPLE_LOBBY, "Spirit Temple Topmost Chest",                              CHEST_LOCATION,          SCENE_SPIRIT_TEMPLE, 0x12, ITEM_BOMBS_20, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5 }, { AST_AND }, { AST_HAS, ITEM_SHIELD_MIRROR }, { AST_END }
    }},
    { SPIRIT_TEMPLE_BOSS, "Defeat Twinrova", EVENT_LOCATION, SCENE_SPIRIT_TEMPLE_BOSS, 0, EVENT_DEFEAT_TWINROVA, {
        { AST_END }
    }},
    { ICE_CAVERN_LOBBY, "Ice Cavern Map Chest",                                     CHEST_LOCATION,          SCENE_ICE_CAVERN, 0x00, ITEM_DUNGEON_MAP, {
        { AST_END }
    }},
    { ICE_CAVERN_LOBBY, "Ice Cavern Compass Chest",                                 CHEST_LOCATION,          SCENE_ICE_CAVERN, 0x01, ITEM_DUNGEON_COMPASS, {
        { AST_END }
    }},
    { ICE_CAVERN_LOBBY, "Ice Cavern Iron Boots Chest",                              CHEST_LOCATION,          SCENE_ICE_CAVERN, 0x02, ITEM_BOOTS_IRON, {
        { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Lobby Left Chest",                  CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x13, ITEM_RUPEE_BLUE, {
        { AST_CAN_USE, ITEM_BOW }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Lobby Right Chest",                 CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x07, ITEM_ARROWS_10, {
        { AST_CAN_USE, ITEM_BOW }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Stalfos Chest",                     CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x00, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Before Heavy Block Chest",          CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x11, ITEM_ARROWS_10, {
        { AST_HAS, ITEM_HOOKSHOT }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Heavy Block First Chest",           CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x0F, ITEM_RUPEE_GOLD, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Heavy Block Second Chest",          CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x0E, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Heavy Block Third Chest",           CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x14, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Heavy Block Fourth Chest",          CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x02, ITEM_INVALID_1, {
        { AST_HAS, ITEM_STRENGTH_SILVER_GAUNTLETS }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Eye Statue Chest",                  CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x03, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_HAS, ITEM_BOW }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Near Scarecrow Chest",              CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x04, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_HAS, ITEM_BOW }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Hammer Room Clear Chest",           CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x12, ITEM_ARROWS_10, {
        { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Hammer Room Switch Chest",          CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x10, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_HAS, ITEM_HAMMER }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Maze Right Central Chest",          CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x05, ITEM_BOMBCHUS_5, {
        { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Maze Right Side Chest",             CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x08, ITEM_ARROWS_30, {
        { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Underwater Silver Rupee Chest",     CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x0D, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_CAN_USE, ITEM_BOOTS_IRON }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Beamos Chest",                      CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x01, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Hidden Ceiling Chest",              CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x0B, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, 2 }, { AST_AND }, { AST_CAN_USE, ITEM_LENS_OF_TRUTH }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Maze Path First Chest",             CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x06, ITEM_RUPEE_PURPLE, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, 3 }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Maze Path Second Chest",            CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x0A, ITEM_RUPEE_RED, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, 5 }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Maze Path Third Chest",             CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x09, ITEM_ARROWS_30, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, 6 }, { AST_END }
    }},
    { GERUDO_TRAINING_GROUND_LOBBY, "Gerudo Training Ground Maze Path Fourth Chest",            CHEST_LOCATION,          SCENE_GERUDO_TRAINING_GROUND, 0x0C, ITEM_ARROW_ICE, {
        { AST_HAS_COUNT, ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND, 8 }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Forest Trial Chest",                        CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x09, ITEM_RUPEE_BLUE, {
        { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Water Trial Left Chest",                    CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x07, ITEM_INVALID_1, {
        { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Water Trial Right Chest",                   CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x06, ITEM_RECOVERY_HEART, {
        { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Shadow Trial Front Chest",                  CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x08, ITEM_RUPEE_BLUE, {
        { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Shadow Trial Golden Gauntlets Chest",       CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x05, ITEM_STRENGTH_GOLD_GAUNTLETS, {
        { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial First Left Chest",              CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x0C, ITEM_RUPEE_BLUE, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial Second Left Chest",             CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x0B, ITEM_INVALID_1, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial Third Left Chest",              CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x0D, ITEM_RECOVERY_HEART, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial First Right Chest",             CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x0E, ITEM_INVALID_1, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial Second Right Chest",            CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x0A, ITEM_ARROWS_30, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial Third Right Chest",             CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x0F, ITEM_INVALID_1, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial Invisible Enemies Chest",       CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x10, ITEM_SMALL_KEY_GANONS_CASTLE, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Light Trial Lullaby Chest",                 CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x11, ITEM_SMALL_KEY_GANONS_CASTLE, {
        { AST_HAS, ITEM_SMALL_KEY_GANONS_CASTLE }, { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Spirit Trial Crystal Switch Chest",         CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x12, ITEM_BOMBCHUS_20, {
        { AST_END }
    }},
    { GANONS_CASTLE_LOBBY, "Ganon's Castle Spirit Trial Invisible Chest",              CHEST_LOCATION,          SCENE_INSIDE_GANONS_CASTLE, 0x14, ITEM_ARROWS_30, {
        { AST_END }
    }},
    { GANONS_CASTLE_TOWER, "Ganon's Tower Boss Key Chest",                             CHEST_LOCATION,          SCENE_GANONS_TOWER, 0x0B, ITEM_DUNGEON_BOSS_KEY_GANONS_CASTLE, {
        { AST_HAS, ITEM_STRENGTH_GOLD_GAUNTLETS }, { AST_END }
    }},
    { GANONS_CASTLE_TOWER, "Ganon",                                                    EVENT_LOCATION,         SCENE_GANONS_TOWER, 0x00, EVENT_TRIFORCE, {
        { AST_END }
    }},
};

ItemTableRow itemTable[] = {
    [ITEM_BOW]                                  = { GI_BOW,                 "Bow",                                  ITEM,       TRUE,   false },
    [ITEM_SLINGSHOT]                            = { GI_SLINGSHOT,           "Slingshot",                            ITEM,       TRUE,   false },
    [ITEM_BOMBCHU]                              = { GI_BOMBCHUS_10,         "Bombchus (10)",                        ITEM,       TRUE,   false },
    [ITEM_HOOKSHOT]                             = { GI_HOOKSHOT,            "Hookshot",                             ITEM,       TRUE,   false },
    [ITEM_LONGSHOT]                             = { GI_LONGSHOT,            "Longshot",                             ITEM,       TRUE,   false },
    [ITEM_ARROW_ICE]                            = { GI_ARROW_ICE,           "Ice Arrows",                           ITEM,       NONE,   false },
    [ITEM_BOOMERANG]                            = { GI_BOOMERANG,           "Boomerang",                            ITEM,       TRUE,   false },
    [ITEM_LENS_OF_TRUTH]                        = { GI_LENS_OF_TRUTH,       "Lens of Truth",                        ITEM,       TRUE,   false },
    [ITEM_HAMMER]                               = { GI_HAMMER,              "Megaton Hammer",                       ITEM,       TRUE,   false },
    [ITEM_SWORD_KOKIRI]                         = { GI_SWORD_KOKIRI,        "Kokiri Sword",                         ITEM,       TRUE,   false },
    [ITEM_SHIELD_DEKU]                          = { GI_SHIELD_DEKU,         "Deku Shield",                          ITEM,       NONE,   false },
    [ITEM_SHIELD_HYLIAN]                        = { GI_SHIELD_HYLIAN,       "Hylian Shield",                        ITEM,       NONE,   false },
    [ITEM_SHIELD_MIRROR]                        = { GI_SHIELD_MIRROR,       "Mirror Shield",                        ITEM,       TRUE,   false },
    [ITEM_BOOTS_IRON]                           = { GI_BOOTS_IRON,          "Iron Boots",                           ITEM,       TRUE,   false },
    [ITEM_BOOTS_HOVER]                          = { GI_BOOTS_HOVER,         "Hover Boots",                          ITEM,       TRUE,   false },
    [ITEM_BOMB_BAG_20]                          = { GI_BOMB_BAG_20,         "Bomb Bag",                             ITEM,       TRUE,   false },
    [ITEM_STRENGTH_SILVER_GAUNTLETS]            = { GI_SILVER_GAUNTLETS,    "Silver Gauntlets",                     ITEM,       TRUE,   false },
    [ITEM_STRENGTH_GOLD_GAUNTLETS]              = { GI_GOLD_GAUNTLETS,      "Gold Gauntlets",                       ITEM,       TRUE,   false },
    [ITEM_HEART_PIECE]                          = { GI_HEART_PIECE,         "Heart Piece",                          ITEM,       TRUE,   false },
    [ITEM_DUNGEON_COMPASS]                      = { GI_COMPASS,             "Compass",                              COMPASS,    NONE,   false },
    [ITEM_DUNGEON_MAP]                          = { GI_DUNGEON_MAP,         "Dungeon Map",                          MAP,        NONE,   false },
    [ITEM_HEART_PIECE_2]                        = { GI_HEART_PIECE_WIN,     "Winner Heart",                         ITEM,       NONE,   false },
    [ITEM_INVALID_1]                            = { GI_ICE_TRAP,            "Ice Trap",                             ITEM,       NONE,   true },
    [ITEM_RECOVERY_HEART]                       = { GI_RECOVERY_HEART,      "Recovery Heart",                       ITEM,       NONE,   true },
    [ITEM_RUPEE_GREEN]                          = { GI_RUPEE_GREEN,         "Rupee (1)",                            ITEM,       NONE,   true },
    [ITEM_RUPEE_BLUE]                           = { GI_RUPEE_BLUE,          "Rupees (5)",                           ITEM,       NONE,   true },
    [ITEM_RUPEE_RED]                            = { GI_RUPEE_RED,           "Rupees (20)",                          ITEM,       NONE,   true },
    [ITEM_RUPEE_PURPLE]                         = { GI_RUPEE_PURPLE,        "Rupees (50)",                          ITEM,       NONE,   true },
    [ITEM_RUPEE_GOLD]                           = { GI_RUPEE_GOLD,          "Rupees (200)",                         ITEM,       NONE,   true },
    [ITEM_DEKU_NUTS_5]                          = { GI_DEKU_NUTS_5,         "Deku Nuts (5)",                        ITEM,       NONE,   true },
    [ITEM_DEKU_NUTS_10]                         = { GI_DEKU_NUTS_10,        "Deku Nuts (10)",                       ITEM,       NONE,   true },
    [ITEM_BOMBS_5]                              = { GI_BOMBS_5,             "Bombs (5)",                            ITEM,       NONE,   true },
    [ITEM_BOMBS_10]                             = { GI_BOMBS_10,            "Bombs (10)",                           ITEM,       NONE,   true },
    [ITEM_BOMBS_20]                             = { GI_BOMBS_20,            "Bombs (20)",                           ITEM,       NONE,   true },
    [ITEM_ARROWS_5]                             = { GI_ARROWS_5,            "Arrows (5)",                           ITEM,       NONE,   true },
    [ITEM_ARROWS_10]                            = { GI_ARROWS_10,           "Arrows (10)",                          ITEM,       NONE,   true },
    [ITEM_ARROWS_30]                            = { GI_ARROWS_30,           "Arrows (30)",                          ITEM,       NONE,   true },
    [ITEM_BOMBCHUS_5]                           = { GI_BOMBCHUS_5,          "Bombchus (5)",                         ITEM,       TRUE,   false },
    [ITEM_BOMBCHUS_20]                          = { GI_BOMBCHUS_20,         "Bombchus (20)",                        ITEM,       TRUE,   false },
    [ITEM_SMALL_KEY_FOREST_TEMPLE]              = { GI_SMALL_KEY,           "Small Key (Forest Temple)",            SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_FIRE_TEMPLE]                = { GI_SMALL_KEY,           "Small Key (Fire Temple)",              SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_WATER_TEMPLE]               = { GI_SMALL_KEY,           "Small Key (Water Temple)",             SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_SPIRIT_TEMPLE]              = { GI_SMALL_KEY,           "Small Key (Spirit Temple)",            SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_SHADOW_TEMPLE]              = { GI_SMALL_KEY,           "Small Key (Shadow Temple)",            SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_BOTTOM_OF_THE_WELL]         = { GI_SMALL_KEY,           "Small Key (Bottom of the Well)",       SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_GERUDO_TRAINING_GROUND]     = { GI_SMALL_KEY,           "Small Key (Gerudo Training Ground)",   SMALL_KEY,  TRUE,   false },
    [ITEM_SMALL_KEY_GANONS_CASTLE]              = { GI_SMALL_KEY,           "Small Key (Ganon's Castle)",           SMALL_KEY,  TRUE,   false },
    [ITEM_DUNGEON_BOSS_KEY_FOREST_TEMPLE]       = { GI_BOSS_KEY,            "Boss Key (Forest Temple)",             BOSS_KEY,   TRUE,   false },
    [ITEM_DUNGEON_BOSS_KEY_FIRE_TEMPLE]         = { GI_BOSS_KEY,            "Boss Key (Fire Temple)",               BOSS_KEY,   TRUE,   false },
    [ITEM_DUNGEON_BOSS_KEY_WATER_TEMPLE]        = { GI_BOSS_KEY,            "Boss Key (Water Temple)",              BOSS_KEY,   TRUE,   false },
    [ITEM_DUNGEON_BOSS_KEY_SPIRIT_TEMPLE]       = { GI_BOSS_KEY,            "Boss Key (Spirit Temple)",             BOSS_KEY,   TRUE,   false },
    [ITEM_DUNGEON_BOSS_KEY_SHADOW_TEMPLE]       = { GI_BOSS_KEY,            "Boss Key (Shadow Temple)",             BOSS_KEY,   TRUE,   false },
    [ITEM_DUNGEON_BOSS_KEY_GANONS_CASTLE]       = { GI_BOSS_KEY,            "Boss Key (Ganon's Castle)",            BOSS_KEY,   TRUE,   false },
    [EVENT_DEFEAT_GOHMA]                        = { GI_NONE,                "Defeat Gohma",                         EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_KING_DODONGO]                 = { GI_NONE,                "Defeat King Dodongo",                  EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_BARINADE]                     = { GI_NONE,                "Defeat Barinade",                      EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_PHANTOM_GANON]                = { GI_NONE,                "Defeat Phantom Ganon",                 EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_VOLVAGIA]                     = { GI_NONE,                "Defeat Volvagia",                      EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_MORPHA]                       = { GI_NONE,                "Defeat Morpha",                        EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_TWINROVA]                     = { GI_NONE,                "Defeat Twinrova",                      EVENT_ITEM, TRUE,   false },
    [EVENT_DEFEAT_BONGO_BONGO]                  = { GI_NONE,                "Defeat Bongo-Bongo",                   EVENT_ITEM, TRUE,   false },
    [EVENT_TRIFORCE]                            = { GI_NONE,                "Triforce",                             EVENT_ITEM, TRUE,   false },
};

RegionTableRow regionTable[] = {
    [ROOT]                          = { "Root",                                 SCENE_ID_MAX },
    [KOKIRI_FOREST]                 = { "Kokiri Forest",                        SCENE_ID_MAX },
    [DEKU_TREE_LOBBY]               = { "Deku Tree Lobby",                      SCENE_DEKU_TREE },
    [DEKU_TREE_BOSS]                = { "Gohma",                                SCENE_DEKU_TREE },
    [LOST_WOODS]                    = { "Lost Woods",                           SCENE_ID_MAX },
    [LOST_WOODS_BRIDGE]             = { "Lost Woods Bridge",                    SCENE_ID_MAX },
    [SACRED_FOREST_MEADOW_ENTRY]    = { "Sacred Forest Meadow Entry",           SCENE_ID_MAX },
    [GORON_CITY_WOODS_WARP]         = { "Goron City Woods Warp",                SCENE_ID_MAX },
    [ZORA_RIVER]                    = { "Zora River",                           SCENE_ID_MAX },
    [SACRED_FOREST_MEADOW]          = { "Sacred Forest Meadow",                 SCENE_ID_MAX },
    [HYRULE_FIELD]                  = { "Hyrule Field",                         SCENE_ID_MAX },
    [LAKE_HYLIA]                    = { "Lake Hylia",                           SCENE_ID_MAX },
    [GERUDO_VALLEY]                 = { "Gerudo Valley",                        SCENE_ID_MAX },
    [CASTLE_TOWN]                   = { "Market",                               SCENE_ID_MAX },
    [KAKARIKO_VILLAGE]              = { "Kakariko Village",                     SCENE_ID_MAX },
    [ZORA_RIVER_FRONT]              = { "Zora River Front",                     SCENE_ID_MAX },
    [LON_LON_RANCH]                 = { "Lon Lon Ranch",                        SCENE_ID_MAX },
    [ZORAS_DOMAIN]                  = { "Zora's Domain",                        SCENE_ID_MAX },
    [WATER_TEMPLE_LOBBY]            = { "Water Temple Lobby",                   SCENE_WATER_TEMPLE },
    [WATER_TEMPLE_BOSS]             = { "Morpha",                               SCENE_WATER_TEMPLE },
    [GERUDO_VALLEY_FAR_SIDE]        = { "Gerudo Valley Far Side",               SCENE_ID_MAX },
    [GERUDO_FORTRESS]               = { "Gerudo Fortress",                      SCENE_ID_MAX },
    [HAUNTED_WASTELAND]             = { "Haunted Wasteland",                    SCENE_ID_MAX },
    [GERUDO_TRAINING_GROUND_LOBBY]  = { "Gerudo Training Ground Lobby",         SCENE_GERUDO_TRAINING_GROUND },
    [DESERT_COLOSSUS]               = { "Desert Colossus",                      SCENE_ID_MAX },
    [SPIRIT_TEMPLE_LOBBY]           = { "Spirit Temple Lobby",                  SCENE_SPIRIT_TEMPLE },
    [SPIRIT_TEMPLE_HANDS]           = { "Spirit Temple Hands",                  SCENE_ID_MAX },
    [SPIRIT_TEMPLE_BOSS]            = { "Twinrova",                             SCENE_SPIRIT_TEMPLE },
    [TEMPLE_OF_TIME]                = { "Temple of Time",                       SCENE_ID_MAX },
    [HYRULE_CASTLE_GROUNDS]         = { "Hyrule Castle Grounds",                SCENE_ID_MAX },
    [GANONS_CASTLE_GROUNDS]         = { "Outside Ganon's Castle",               SCENE_ID_MAX },
    [BEYOND_DOOR_OF_TIME]           = { "Beyond Door of Time",                  SCENE_ID_MAX },
    [GANONS_CASTLE_LOBBY]           = { "Ganon's Castle Lobby",                 SCENE_GANONS_TOWER },
    [BOTTOM_OF_THE_WELL_LOBBY]      = { "Bottom of the Well Lobby",             SCENE_BOTTOM_OF_THE_WELL },
    [GRAVEYARD]                     = { "Graveyard",                            SCENE_ID_MAX },
    [SHADOW_TEMPLE_LOBBY]           = { "Shadow Temple Lobby",                  SCENE_SHADOW_TEMPLE },
    [SHADOW_TEMPLE_BOSS]            = { "Bongo-Bongo",                          SCENE_SHADOW_TEMPLE },
    [DEATH_MOUNTAIN]                = { "Death Mountain Trail",                 SCENE_ID_MAX },
    [GORON_CITY]                    = { "Goron City",                           SCENE_ID_MAX },
    [DEATH_MOUNTAIN_CRATER_UPPER]   = { "Death Mountain Crater Upper",          SCENE_ID_MAX },
    [DODONGOS_CAVERN_LOBBY]         = { "Dodongo's Cavern Lobby",               SCENE_DODONGOS_CAVERN },
    [DODONGOS_CAVERN_BOSS]          = { "King Dodongo",                         SCENE_DODONGOS_CAVERN },
    [DEATH_MOUNTAIN_CRATER_LOWER]   = { "Death Mountain Crater Lower",          SCENE_ID_MAX },
    [DEATH_MOUNTAIN_CRATER_CENTRAL] = { "Death Mountain Crater Central",        SCENE_ID_MAX },
    [FIRE_TEMPLE_LOBBY]             = { "Fire Temple Lobby",                    SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_BIG_LAVA_ROOM]     = { "Fire Temple Big Lava Room",            SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_ELEVATOR_ROOM]     = { "Fire Temple Elevator Room",            SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_MAZE_LOWER]        = { "Fire Temple Boulder Maze Lower",       SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_NARROW_PATH]       = { "Fire Temple Narrow Path Room",         SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_MAZE_UPPER]        = { "Fire Temple Boulder Maze Upper",       SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_FLAME_MAZE]        = { "Fire Temple Flame Maze",               SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_UPPER]             = { "Fire Temple Upper",                    SCENE_FIRE_TEMPLE },
    [FIRE_TEMPLE_BOSS]              = { "Volvagia",                             SCENE_FIRE_TEMPLE },
    [ZORAS_FOUNTAIN]                = { "Zora's Fountain",                      SCENE_ID_MAX },
    [JABU_JABUS_BELLY_LOBBY]        = { "Jabu-Jabu's Belly Lobby",              SCENE_JABU_JABU },
    [JABU_JABUS_BELLY_BOSS]         = { "Barinade",                             SCENE_JABU_JABU },
    [ICE_CAVERN_LOBBY]              = { "Ice Cavern Lobby",                     SCENE_ICE_CAVERN },
    [FOREST_TEMPLE_LOBBY]           = { "Forest Temple Lobby",                  SCENE_FOREST_TEMPLE },
    [FOREST_TEMPLE_BLOCK_PUSH_ROOM] = { "Forest Temple Block Push Room",        SCENE_FOREST_TEMPLE },
    [FOREST_TEMPLE_STRAIGHT_HALL]   = { "Forest Temple Straightened Hall",      SCENE_FOREST_TEMPLE },
    [FOREST_TEMPLE_OUTSIDE_UPPER]   = { "Forest Temple Outside Upper Ledge",    SCENE_FOREST_TEMPLE },
    [FOREST_TEMPLE_BOW_REGION]      = { "Forest Temple Bow Region",             SCENE_FOREST_TEMPLE },
    [FOREST_TEMPLE_FROZEN_EYE]      = { "Forest Temple Frozen Eye Switch Room", SCENE_FOREST_TEMPLE },
    [FOREST_TEMPLE_BOSS]            = { "Phantom Ganon",                        SCENE_FOREST_TEMPLE },
    [GANONS_CASTLE_TOWER]           = { "Ganon's Castle Tower",                 SCENE_GANONS_TOWER },
};

ExitTableRow exitTable[] = {
#include "logic/root_region.logic.c"
#include "logic/dungeon_region.logic.c"
#include "logic/kokiri_forest_region.logic.c"
#include "logic/hyrule_region.logic.c"
#include "logic/gerudo_region.logic.c"
#include "logic/goron_region.logic.c"
#include "logic/zora_region.logic.c"
};
