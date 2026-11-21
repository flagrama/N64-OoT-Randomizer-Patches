#include "r_kaleido_scope.h"

#include "array_count.h"
#include "controller.h"
#include "dma.h"
#include "font.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "inventory.h"
#include "item.h"
#include "randomizer_play.h"
#include "save.h"
#include "segment_symbols.h"
#include "z_math.h"

extern f32 sFontWidths[144];

typedef struct SpoilerLocationRow {
    const char* name;
    SceneID scene;
    u8 flag;
    WorldMapPoint worldMapPoint; // WORLD_MAP_POINT_MAX for dungeon-interior rows, which only ever show via scene match
    WorldMapArea area;           // WORLD_MAP_AREA_MAX for rows that should always show once their scene/point matches
} SpoilerLocationRow;

typedef struct SpoilerItemNameRow {
    GetItemID id;
    const char* name;
} SpoilerItemNameRow;

static SpoilerLocationRow sSpoilerLocations[169] = {
    { .name = "KF Mido's Top Left Chest", .scene = SCENE_MIDOS_HOUSE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_KOKIRI_FOREST, .area = WORLD_MAP_AREA_KOKIRI_FOREST },
    { .name = "KF Mido's Top Right Chest", .scene = SCENE_MIDOS_HOUSE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_KOKIRI_FOREST, .area = WORLD_MAP_AREA_KOKIRI_FOREST },
    { .name = "KF Mido's Bottom Left Chest", .scene = SCENE_MIDOS_HOUSE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_KOKIRI_FOREST, .area = WORLD_MAP_AREA_KOKIRI_FOREST },
    { .name = "KF Mido's Bottom Right Chest", .scene = SCENE_MIDOS_HOUSE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_KOKIRI_FOREST, .area = WORLD_MAP_AREA_KOKIRI_FOREST },
    { .name = "KF Kokiri Sword Chest", .scene = SCENE_KOKIRI_FOREST, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_KOKIRI_FOREST, .area = WORLD_MAP_AREA_KOKIRI_FOREST },
    { .name = "KF Storms Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_KOKIRI_FOREST, .area = WORLD_MAP_AREA_KOKIRI_FOREST },
    { .name = "LW Near Shortcuts Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x14, .worldMapPoint = WORLD_MAP_POINT_LOST_WOODS, .area = WORLD_MAP_AREA_LOST_WOODS },
    { .name = "SFM Wolfos Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x11, .worldMapPoint = WORLD_MAP_POINT_LOST_WOODS, .area = WORLD_MAP_AREA_SACRED_FOREST_MEADOW },
    { .name = "HF Near Market Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_HYRULE_FIELD, .area = WORLD_MAP_AREA_HYRULE_FIELD },
    { .name = "HF Southeast Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_HYRULE_FIELD, .area = WORLD_MAP_AREA_HYRULE_FIELD },
    { .name = "HF Open Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_HYRULE_FIELD, .area = WORLD_MAP_AREA_HYRULE_FIELD },
    { .name = "Market Treasure Chest Game Reward", .scene = SCENE_TREASURE_BOX_SHOP, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MARKET, .area = WORLD_MAP_AREA_MARKET },
    { .name = "Kak Open Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_KAKARIKO_VILLAGE, .area = WORLD_MAP_AREA_KAKARIKO_VILLAGE },
    { .name = "Kak Redead Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_KAKARIKO_VILLAGE, .area = WORLD_MAP_AREA_KAKARIKO_VILLAGE },
    { .name = "Graveyard Shield Grave Chest", .scene = SCENE_GRAVE_WITH_FAIRYS_FOUNTAIN, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_KAKARIKO_VILLAGE, .area = WORLD_MAP_AREA_GRAVEYARD },
    { .name = "Graveyard Heart Piece Grave Chest", .scene = SCENE_REDEAD_GRAVE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_KAKARIKO_VILLAGE, .area = WORLD_MAP_AREA_GRAVEYARD },
    { .name = "Graveyard Royal Family's Tomb Chest", .scene = SCENE_ROYAL_FAMILYS_TOMB, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_KAKARIKO_VILLAGE, .area = WORLD_MAP_AREA_GRAVEYARD },
    { .name = "Graveyard Damp\x96 Race Hookshot Chest", .scene = SCENE_WINDMILL_AND_DAMPES_GRAVE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_KAKARIKO_VILLAGE, .area = WORLD_MAP_AREA_QUESTION_MARK },
    { .name = "DMT Chest", .scene = SCENE_DEATH_MOUNTAIN_TRAIL, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_DEATH_MOUNTAIN, .area = WORLD_MAP_AREA_DEATH_MOUNTAIN_TRAIL },
    { .name = "DMT Storms Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x17, .worldMapPoint = WORLD_MAP_POINT_DEATH_MOUNTAIN, .area = WORLD_MAP_AREA_DEATH_MOUNTAIN_TRAIL },
    { .name = "GC Maze Left Chest", .scene = SCENE_GORON_CITY, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_DEATH_MOUNTAIN, .area = WORLD_MAP_AREA_GORON_CITY },
    { .name = "GC Maze Right Chest", .scene = SCENE_GORON_CITY, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_DEATH_MOUNTAIN, .area = WORLD_MAP_AREA_GORON_CITY },
    { .name = "GC Maze Center Chest", .scene = SCENE_GORON_CITY, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_DEATH_MOUNTAIN, .area = WORLD_MAP_AREA_GORON_CITY },
    { .name = "DMC Upper Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x1A, .worldMapPoint = WORLD_MAP_POINT_DEATH_MOUNTAIN, .area = WORLD_MAP_AREA_DEATH_MOUNTAIN_CRATER },
    { .name = "ZR Open Grotto Chest", .scene = SCENE_GROTTOS, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_ZORAS_DOMAIN, .area = WORLD_MAP_AREA_ZORAS_RIVER },
    { .name = "ZD Chest", .scene = SCENE_ZORAS_DOMAIN, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_ZORAS_DOMAIN, .area = WORLD_MAP_AREA_ZORAS_DOMAIN },
    { .name = "GV Chest", .scene = SCENE_GERUDO_VALLEY, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_GERUDO_VALLEY, .area = WORLD_MAP_AREA_GERUDO_VALLEY },
    { .name = "GF Chest", .scene = SCENE_GERUDOS_FORTRESS, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "Wasteland Chest", .scene = SCENE_HAUNTED_WASTELAND, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_HAUNTED_WASTELAND, .area = WORLD_MAP_AREA_HAUNTED_WASTELAND },
    { .name = "Deku Tree Map Chest", .scene = SCENE_DEKU_TREE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Deku Tree Slingshot Room Side Chest", .scene = SCENE_DEKU_TREE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Deku Tree Slingshot Chest", .scene = SCENE_DEKU_TREE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Deku Tree Compass Chest", .scene = SCENE_DEKU_TREE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Deku Tree Compass Room Side Chest", .scene = SCENE_DEKU_TREE, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Deku Tree Basement Chest", .scene = SCENE_DEKU_TREE, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Cavern Map Chest", .scene = SCENE_DODONGOS_CAVERN, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Cavern Compass Chest", .scene = SCENE_DODONGOS_CAVERN, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Cavern Bomb Flower Platform Chest", .scene = SCENE_DODONGOS_CAVERN, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Cavern Bomb Bag Chest", .scene = SCENE_DODONGOS_CAVERN, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Cavern End of Bridge Chest", .scene = SCENE_DODONGOS_CAVERN, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Cavern Boss Room Chest", .scene = SCENE_DODONGOS_CAVERN_BOSS, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Jabu Jabu's Belly Boomerang Chest", .scene = SCENE_JABU_JABU, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Jabu Jabu's Belly Map Chest", .scene = SCENE_JABU_JABU, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Jabu Jabu's Belly Compass Chest", .scene = SCENE_JABU_JABU, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Front Left Fake Wall Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Front Center Bombable Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Back Left Bombable Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Underwater Left Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Compass Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Center Skulltula Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x0E, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Right Bottom Fake Wall Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Fire Keese Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Like-Like Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Map Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Underwater Front Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x10, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Invisible Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x14, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Well Lens of Truth Chest", .scene = SCENE_BOTTOM_OF_THE_WELL, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest First Room Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest First Stalfos Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Raised Island Courtyard Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Map Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Well Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Eye Switch Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Boss Key Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x0E, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Floormaster Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Red Poe Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x0D, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Bow Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Blue Poe Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x0F, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Falling Ceiling Room Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Forest Basement Chest", .scene = SCENE_FOREST_TEMPLE, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Near Boss Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Flare Dancer Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Boss Key Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Big Lava Room Lower Open Door Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Big Lava Room Blocked Door Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Boulder Maze Lower Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Boulder Maze Side Room Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Map Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Boulder Maze Shortcut Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Boulder Maze Upper Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Scarecrow Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x0D, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Compass Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Megaton Hammer Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Fire Highest Goron Chest", .scene = SCENE_FIRE_TEMPLE, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Compass Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Map Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Cracked Wall Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Torches Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Boss Key Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Central Pillar Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Central Bow Target Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Longshot Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water River Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Water Dragon Chest", .scene = SCENE_WATER_TEMPLE, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Map Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Hover Boots Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Compass Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Early Silver Rupee Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Invisible Blades Visible Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Invisible Blades Invisible Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x16, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Falling Spikes Lower Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Falling Spikes Upper Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Falling Spikes Switch Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Invisible Spikes Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Wind Hint Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x15, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow After Wind Enemy Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow After Wind Hidden Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x14, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Spike Walls Left Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Boss Key Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Shadow Invisible Floormaster Chest", .scene = SCENE_SHADOW_TEMPLE, .flag = 0x0D, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Child Bridge Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Child Early Torches Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Child Climb North Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Child Climb East Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Map Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Sun Block Room Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Silver Gauntlets Chest", .scene = SCENE_DESERT_COLOSSUS, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_HAUNTED_WASTELAND, .area = WORLD_MAP_AREA_DESERT_COLOSSUS },
    { .name = "Spirit Compass Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Early Adult Right Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit First Mirror Left Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x0D, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit First Mirror Right Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x0E, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Statue Room Northeast Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x0F, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Statue Room Hand Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Near Four Armos Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Hallway Right Invisible Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x14, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Hallway Left Invisible Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x15, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Mirror Shield Chest", .scene = SCENE_DESERT_COLOSSUS, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_HAUNTED_WASTELAND, .area = WORLD_MAP_AREA_DESERT_COLOSSUS },
    { .name = "Spirit Boss Key Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Spirit Topmost Chest", .scene = SCENE_SPIRIT_TEMPLE, .flag = 0x12, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Ice Cavern Map Chest", .scene = SCENE_ICE_CAVERN, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Ice Cavern Compass Chest", .scene = SCENE_ICE_CAVERN, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Ice Cavern Iron Boots Chest", .scene = SCENE_ICE_CAVERN, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "GTG Lobby Left Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x13, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Lobby Right Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Stalfos Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x00, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Before Heavy Block Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x11, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Heavy Block First Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x0F, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Heavy Block Second Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x0E, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Heavy Block Third Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x14, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Heavy Block Fourth Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x02, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Eye Statue Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x03, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Near Scarecrow Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x04, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Hammer Room Clear Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x12, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Hammer Room Switch Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x10, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Maze Right Central Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Maze Right Side Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Underwater Silver Rupee Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x0D, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Beamos Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x01, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Hidden Ceiling Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Maze Path First Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Maze Path Second Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Maze Path Third Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "GTG Maze Path Fourth Chest", .scene = SCENE_GERUDO_TRAINING_GROUND, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_GERUDOS_FORTRESS, .area = WORLD_MAP_AREA_GERUDOS_FORTRESS },
    { .name = "Castle Forest Trial Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x09, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Water Trial Left Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x07, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Water Trial Right Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x06, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Shadow Trial Front Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x08, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Shadow Trial Golden Gauntlets Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x05, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial First Left Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x0C, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial Second Left Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial Third Left Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x0D, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial First Right Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x0E, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial Second Right Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x0A, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial Third Right Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x0F, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial Invisible Enemies Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x10, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Light Trial Lullaby Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x11, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Spirit Trial Crystal Switch Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x12, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Castle Spirit Trial Invisible Chest", .scene = SCENE_INSIDE_GANONS_CASTLE, .flag = 0x14, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
    { .name = "Tower Boss Key Chest", .scene = SCENE_GANONS_TOWER, .flag = 0x0B, .worldMapPoint = WORLD_MAP_POINT_MAX, .area = WORLD_MAP_AREA_MAX },
};

static SpoilerItemNameRow sSpoilerItemNames[] = {
    { GI_BOW, "Bow" },
    { GI_SLINGSHOT, "Slingshot" },
    { GI_BOMBCHUS_10, "Bombchus (10)" },
    { GI_HOOKSHOT, "Hookshot" },
    { GI_LONGSHOT, "Longshot" },
    { GI_ARROW_ICE, "Ice Arrows" },
    { GI_BOOMERANG, "Boomerang" },
    { GI_LENS_OF_TRUTH, "Lens of Truth" },
    { GI_HAMMER, "Megaton Hammer" },
    { GI_SWORD_KOKIRI, "Kokiri Sword" },
    { GI_SHIELD_DEKU, "Deku Shield" },
    { GI_SHIELD_HYLIAN, "Hylian Shield" },
    { GI_SHIELD_MIRROR, "Mirror Shield" },
    { GI_BOOTS_IRON, "Iron Boots" },
    { GI_BOOTS_HOVER, "Hover Boots" },
    { GI_BOMB_BAG_20, "Bomb Bag" },
    { GI_SILVER_GAUNTLETS, "Silver Gauntlets" },
    { GI_GOLD_GAUNTLETS, "Gold Gauntlets" },
    { GI_HEART_PIECE, "Heart Piece" },
    { GI_COMPASS, "Compass" },
    { GI_DUNGEON_MAP, "Dungeon Map" },
    { GI_HEART_PIECE_WIN, "Winner Heart" },
    { GI_ICE_TRAP, "Ice Trap" },
    { GI_RECOVERY_HEART, "Recovery Heart" },
    { GI_RUPEE_GREEN, "Rupee (1)" },
    { GI_RUPEE_BLUE, "Rupees (5)" },
    { GI_RUPEE_RED, "Rupees (20)" },
    { GI_RUPEE_PURPLE, "Rupees (50)" },
    { GI_RUPEE_GOLD, "Rupees (200)" },
    { GI_DEKU_NUTS_5, "Deku Nuts (5)" },
    { GI_DEKU_NUTS_10, "Deku Nuts (10)" },
    { GI_BOMBS_5, "Bombs (5)" },
    { GI_BOMBS_10, "Bombs (10)" },
    { GI_BOMBS_20, "Bombs (20)" },
    { GI_ARROWS_5, "Arrows (5)" },
    { GI_ARROWS_10, "Arrows (10)" },
    { GI_ARROWS_30, "Arrows (30)" },
    { GI_BOMBCHUS_5, "Bombchus (5)" },
    { GI_BOMBCHUS_20, "Bombchus (20)" },
    { GI_SMALL_KEY, "Small Key" },
    { GI_BOSS_KEY, "Boss Key" },
};

typedef enum KaleidoMapSpoilerState {
    KALEIDO_MAP_SPOILER_CLOSED,
    KALEIDO_MAP_SPOILER_OPENING,
    KALEIDO_MAP_SPOILER_OPEN,
} KaleidoMapSpoilerState;

typedef enum SpoilerAreaMode {
    SPOILER_AREA_DUNGEON,
    SPOILER_AREA_WORLD_MAP,
} SpoilerAreaMode;

static KaleidoMapSpoilerState sSpoilerState = KALEIDO_MAP_SPOILER_CLOSED;
static SpoilerAreaMode sAreaMode;
static SceneID sAreaScene;
static WorldMapPoint sAreaWorldMapPoint;
static s16 sScrollOffset;

bool KaleidoMapSpoiler_IsOpen(void) {
    return sSpoilerState != KALEIDO_MAP_SPOILER_CLOSED;
}

static bool KaleidoMapSpoiler_TryOpen(Input* input) {
    if (!gSaveContext.save.randomizer.shuffleChests) {
        return false;
    }

    if ((sSpoilerState != KALEIDO_MAP_SPOILER_CLOSED) || !CHECK_BTN_ALL(input->press.button, BTN_A)) {
        return false;
    }

    sScrollOffset = 0;
    sSpoilerState = KALEIDO_MAP_SPOILER_OPENING;
    return true;
}

void KaleidoMapSpoiler_HandleDungeonMapInput(Input* input, SceneID sceneId) {
    if (KaleidoMapSpoiler_TryOpen(input)) {
        sAreaMode = SPOILER_AREA_DUNGEON;
        sAreaScene = sceneId;
    }
}

void KaleidoMapSpoiler_HandleWorldMapInput(Input* input, WorldMapPoint hoveredPoint) {
    if (KaleidoMapSpoiler_TryOpen(input)) {
        sAreaMode = SPOILER_AREA_WORLD_MAP;
        sAreaWorldMapPoint = hoveredPoint;
    }
}

static bool KaleidoMapSpoiler_RowIsRevealed(const SpoilerLocationRow* row) {
    if (row->area == WORLD_MAP_AREA_MAX) {
        return true;
    }

    return (gSaveContext.save.info.worldMapAreaData & gBitFlags[row->area]) != 0;
}

static bool KaleidoMapSpoiler_RowMatchesArea(const SpoilerLocationRow* row) {
    if (!KaleidoMapSpoiler_RowIsRevealed(row)) {
        return false;
    }

    if (sAreaMode == SPOILER_AREA_DUNGEON) {
        return row->scene == sAreaScene;
    }

    return row->worldMapPoint == sAreaWorldMapPoint;
}

// Flags_GetTreasure only reads the currently-loaded scene; rows here span many scenes at once.
static bool KaleidoMapSpoiler_RowIsObtained(PlayState* play, const SpoilerLocationRow* row) {
    // The currently-loaded scene's flags aren't copied into sceneFlags until it unloads or the game
    // saves, so that one scene must be read live from actorCtx instead.
    u32 chestFlags = ((s16)row->scene == play->sceneId) ? play->actorCtx.flags.chest
                                                        : gSaveContext.save.info.sceneFlags[row->scene].chest;
    return (chestFlags & (1 << row->flag)) != 0;
}

static const char* KaleidoMapSpoiler_GetItemName(const SpoilerLocationRow* row) {
    RandomizerChestID chestId = Randomizer_GetRandomizedChestContents(row->scene, row->flag);
    GetItemID giIndex = gSaveContext.save.randomizer.chestContents[chestId];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sSpoilerItemNames); i++) {
        if (sSpoilerItemNames[i].id == giIndex) {
            return sSpoilerItemNames[i].name;
        }
    }

    return "Unknown Item";
}

#define SPOILER_FONT_CHAR_COUNT 144
#define SPOILER_FONT_SCALE 0.6f

#define SPOILER_BOX_X1 49
#define SPOILER_BOX_Y1 61
#define SPOILER_BOX_X2 271
#define SPOILER_BOX_Y2 192
#define SPOILER_MARGIN 8
#define SPOILER_MARGIN_V 5
#define SPOILER_ROW_HEIGHT 10
#define SPOILER_ENTRY_HEIGHT (2 * SPOILER_ROW_HEIGHT)
#define SPOILER_LINE_X1 (SPOILER_BOX_X1 + SPOILER_MARGIN)
#define SPOILER_LINE_X2 (SPOILER_BOX_X2 - SPOILER_MARGIN)
#define SPOILER_LINE_WIDTH (SPOILER_LINE_X2 - SPOILER_LINE_X1)
#define SPOILER_VISIBLE_ROWS 6

static u8 sGlyphTexBuf[SPOILER_FONT_CHAR_COUNT * FONT_CHAR_TEX_SIZE];
static bool sCharsetLoaded = false;

static void KaleidoMapSpoiler_LoadCharset(void) {
    if (!sCharsetLoaded) {
        DMA_REQUEST_SYNC(sGlyphTexBuf, (uintptr_t)_nes_font_staticSegmentRomStart,
                         (uintptr_t)_nes_font_staticSegmentRomEnd - (uintptr_t)_nes_font_staticSegmentRomStart,
                         "../r_kaleido_map_spoiler.c", __LINE__);
        sCharsetLoaded = true;
    }
}

#define SPOILER_MAX_GLYPH_REQUESTS 600

typedef struct SpoilerGlyphRequest {
    s16 x;
    s16 y;
    u8 glyphIndex;
    u8 obtained;
} SpoilerGlyphRequest;

static SpoilerGlyphRequest sGlyphRequests[SPOILER_MAX_GLYPH_REQUESTS];
static s32 sGlyphRequestCount;
static bool sGlyphSeen[SPOILER_FONT_CHAR_COUNT];

static s16 KaleidoMapSpoiler_WalkText(s16 x, s16 y, const char* text, bool obtained, bool emit) {
    f32 cursorX = x;
    const char* c;

    for (c = text; *c != '\0'; c++) {
        u8 glyphIndex = *c - ' ';
        f32 width = sFontWidths[glyphIndex] * SPOILER_FONT_SCALE;

        if ((cursorX + width - x) > SPOILER_LINE_WIDTH) {
            break;
        }

        if (emit) {
            SpoilerGlyphRequest* req;

            if (sGlyphRequestCount >= SPOILER_MAX_GLYPH_REQUESTS) {
                break;
            }

            req = &sGlyphRequests[sGlyphRequestCount++];
            req->x = cursorX;
            req->y = y;
            req->glyphIndex = glyphIndex;
            req->obtained = obtained;
            sGlyphSeen[glyphIndex] = true;
        }

        cursorX += width;
    }

    return (s16)(cursorX - x);
}

static Gfx* KaleidoMapSpoiler_FlushGlyphRequests(Gfx* gfx) {
    s32 charTexSize = (s32)(SPOILER_FONT_SCALE * 16.0f);
    s32 charTexScale = (s32)(1024.0f / SPOILER_FONT_SCALE);
    s32 glyphIndex;
    s32 i;

    for (glyphIndex = 0; glyphIndex < SPOILER_FONT_CHAR_COUNT; glyphIndex++) {
        bool loaded = false;

        if (!sGlyphSeen[glyphIndex]) {
            continue;
        }

        for (i = 0; i < sGlyphRequestCount; i++) {
            SpoilerGlyphRequest* req = &sGlyphRequests[i];

            if (req->glyphIndex != glyphIndex) {
                continue;
            }

            if (!loaded) {
                gDPPipeSync(gfx++);
                gDPLoadTextureBlock_4b(gfx++, &sGlyphTexBuf[glyphIndex * FONT_CHAR_TEX_SIZE], G_IM_FMT_I,
                                       FONT_CHAR_TEX_WIDTH, FONT_CHAR_TEX_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                                       G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                loaded = true;
            }

            gDPSetPrimColor(gfx++, 0, 0, req->obtained ? 0 : 255, 255, req->obtained ? 0 : 255, 255);
            gSPTextureRectangle(gfx++, req->x << 2, req->y << 2, (req->x + charTexSize) << 2,
                                (req->y + charTexSize) << 2, G_TX_RENDERTILE, 0, 0, charTexScale, charTexScale);
        }
    }

    return gfx;
}

void KaleidoMapSpoiler_Draw(PlayState* play) {
    Input* input = &play->state.input[0];
    s32 rowCount;
    s32 maxScroll;
    s32 matchIndex;
    s32 i;

    KaleidoMapSpoiler_LoadCharset();

    rowCount = 0;
    for (i = 0; i < ARRAY_COUNT(sSpoilerLocations); i++) {
        if (KaleidoMapSpoiler_RowMatchesArea(&sSpoilerLocations[i])) {
            rowCount++;
        }
    }

    maxScroll = CLAMP_MIN(rowCount - SPOILER_VISIBLE_ROWS, 0);

    if (play->pauseCtx.stickAdjY > 30) {
        if (sScrollOffset > 0) {
            sScrollOffset--;
        }
    } else if (play->pauseCtx.stickAdjY < -30) {
        if (sScrollOffset < maxScroll) {
            sScrollOffset++;
        }
    }

    OPEN_DISPS(play->state.gfxCtx, "../r_kaleido_map_spoiler.c", __LINE__);

    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, 220);
    gDPFillRectangle(POLY_OPA_DISP++, SPOILER_BOX_X1, SPOILER_BOX_Y1, SPOILER_BOX_X2, SPOILER_BOX_Y2);
    gDPPipeSync(POLY_OPA_DISP++);

    Gfx_SetupDL_39Opa(play->state.gfxCtx);

    gDPSetAlphaCompare(POLY_OPA_DISP++, G_AC_NONE);
    gDPSetCombineLERP(POLY_OPA_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0,
                      PRIMITIVE, 0);

    sGlyphRequestCount = 0;
    memset(sGlyphSeen, false, sizeof(sGlyphSeen));

    matchIndex = 0;
    for (i = 0; i < ARRAY_COUNT(sSpoilerLocations); i++) {
        const SpoilerLocationRow* row = &sSpoilerLocations[i];
        s32 visibleRow;
        s16 y;
        bool obtained;
        const char* itemName;
        s16 itemX;

        if (!KaleidoMapSpoiler_RowMatchesArea(row)) {
            continue;
        }

        visibleRow = matchIndex - sScrollOffset;
        matchIndex++;

        if ((visibleRow < 0) || (visibleRow >= SPOILER_VISIBLE_ROWS)) {
            continue;
        }

        y = SPOILER_BOX_Y1 + SPOILER_MARGIN_V + visibleRow * SPOILER_ENTRY_HEIGHT;
        obtained = KaleidoMapSpoiler_RowIsObtained(play, row);
        itemName = KaleidoMapSpoiler_GetItemName(row);
        itemX = SPOILER_LINE_X2 - KaleidoMapSpoiler_WalkText(0, 0, itemName, false, false);

        KaleidoMapSpoiler_WalkText(SPOILER_LINE_X1, y, row->name, obtained, true);
        KaleidoMapSpoiler_WalkText(itemX, y + SPOILER_ROW_HEIGHT, itemName, obtained, true);
    }

    POLY_OPA_DISP = KaleidoMapSpoiler_FlushGlyphRequests(POLY_OPA_DISP);

    Gfx_SetupDL_42Opa(play->state.gfxCtx);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);

    CLOSE_DISPS(play->state.gfxCtx, "../r_kaleido_map_spoiler.c", __LINE__);

    if (sSpoilerState == KALEIDO_MAP_SPOILER_OPENING) {
        sSpoilerState = KALEIDO_MAP_SPOILER_OPEN;
    } else if ((sSpoilerState == KALEIDO_MAP_SPOILER_OPEN) && CHECK_BTN_ALL(input->press.button, BTN_A)) {
        sSpoilerState = KALEIDO_MAP_SPOILER_CLOSED;
    }
}
