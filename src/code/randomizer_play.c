#include "randomizer_play.h"

#include "fault.h"
#include "scene.h"

RandomizerChestID Randomizer_GetRandomizedChestContents(SceneID scene, u8 flag) {
    switch (scene) {
        case SCENE_MIDOS_HOUSE:
            return CHEST_MIDO_0 + flag;
        case SCENE_KOKIRI_FOREST:
            return CHEST_KOKIRI_0;
        case SCENE_TREASURE_BOX_SHOP:
            return CHEST_BOX_GAME_0;
        case SCENE_GRAVE_WITH_FAIRYS_FOUNTAIN:
            return CHEST_SHIELD_GRAVE_0;
        case SCENE_REDEAD_GRAVE:
            return CHEST_REDEAD_GRAVE_0;
        case SCENE_ROYAL_FAMILYS_TOMB:
            return CHEST_ROYAL_TOMB_0;
        case SCENE_WINDMILL_AND_DAMPES_GRAVE:
            return CHEST_DAMPE_0;
        case SCENE_DEATH_MOUNTAIN_TRAIL:
            return CHEST_MOUNTAIN_0;
        case SCENE_GORON_CITY:
            return CHEST_GORON_0 + flag;
        case SCENE_ZORAS_DOMAIN:
            return CHEST_ZORA_0;
        case SCENE_GERUDO_VALLEY:
            return CHEST_VALLEY_0;
        case SCENE_GERUDOS_FORTRESS:
            return CHEST_FORTRESS_0;
        case SCENE_HAUNTED_WASTELAND:
            return CHEST_WASTELAND_0;
        case SCENE_GROTTOS:
            switch (flag) {
                case 0x00:
                    return CHEST_GROTTOS_0;
                case 0x02:
                case 0x03:
                    return CHEST_GROTTOS_1 + (flag - 0x02);
                case 0x08:
                case 0x09:
                case 0x0A:
                    return CHEST_GROTTOS_3 + (flag - 0x08);
                case 0x0C:
                    return CHEST_GROTTOS_6;
                case 0x11:
                    return CHEST_GROTTOS_7;
                case 0x14:
                    return CHEST_GROTTOS_8;
                case 0x17:
                    return CHEST_GROTTOS_9;
                case 0x1A:
                    return CHEST_GROTTOS_10;
                default: {
                    return CHEST_MAX;
                }
            }
        case SCENE_DEKU_TREE:
            return CHEST_DEKU_0 + (flag - 1);
        case SCENE_DODONGOS_CAVERN:
            if (flag >= 4 && flag <= 6) {
                return CHEST_DODONGO_0 + (flag - 4);
            }
            if (flag == 8) {
                return CHEST_DODONGO_3;
            }
            return CHEST_DODONGO_4;
        case SCENE_DODONGOS_CAVERN_BOSS:
            return CHEST_DODONGO_5;
        case SCENE_JABU_JABU:
            if (flag == 4) {
                return CHEST_JABU_2;
            }
            return CHEST_JABU_0 + (flag - 1);
        case SCENE_BOTTOM_OF_THE_WELL:
            // 1, 2, 3, 4, 5 7, 8, 9, a c e 10 14
            if (flag < 7) {
                return CHEST_BOTW_0 + (flag - 1);
            }
            if (flag >=7 && flag <= 9) {
                return CHEST_BOTW_5 + (flag - 7);
            }
            switch (flag) {
                case 0x0A:
                    return CHEST_BOTW_8;
                case 0x0C:
                    return CHEST_BOTW_9;
                case 0x0E:
                    return CHEST_BOTW_10;
                case 0x10:
                    return CHEST_BOTW_11;
                case 0x14:
                    return CHEST_BOTW_12;
                default: {
                    return CHEST_MAX;
                }
            }

        case SCENE_FOREST_TEMPLE:
            if (flag <= 5) {
                return CHEST_FOREST_0 + flag;
            }
            if (flag == 7) {
                return CHEST_FOREST_6;
            }
            if (flag == 9) {
                return CHEST_FOREST_7;
            }
            return CHEST_FOREST_8 + (flag - 0xB);
        case SCENE_FIRE_TEMPLE:
            return CHEST_FIRE_0 + flag;
        case SCENE_WATER_TEMPLE:
            if (flag < 0x04) {
                return CHEST_WATER_0 + flag;
            }
            return CHEST_WATER_0 + (flag - 1);
        case SCENE_SHADOW_TEMPLE:
            if (flag <= 0x0D) {
                return CHEST_SHADOW_0 + (flag - 1);
            }
            return CHEST_SHADOW_13 + (flag - 0x14);
        case SCENE_SPIRIT_TEMPLE:
            if (flag < 9) {
                return CHEST_SPIRIT_0 + flag;
            }
            if (flag == 0x0A) {
                return CHEST_SPIRIT_9;
            }
            if (flag >= 0x0C && flag <= 0x0F) {
                return CHEST_SPIRIT_10 + (flag - 0x0C);
            }
            if (flag == 0x12) {
                return CHEST_SPIRIT_14;
            }
            return CHEST_SPIRIT_15 + (flag - 0x14);
        case SCENE_DESERT_COLOSSUS:
            if (flag == 0x0B) {
                return CHEST_SPIRIT_17; // Silver Gauntlets chest
            }
            return CHEST_SPIRIT_18; // Mirror Shield Chest
        case SCENE_ICE_CAVERN:
            return CHEST_ICE_0 + flag;
        case SCENE_GERUDO_TRAINING_GROUND:
            return CHEST_GTG_0 + flag;
        case SCENE_INSIDE_GANONS_CASTLE:
            if (flag == 0x14) {
                return CHEST_GANON_14;
            }
            return CHEST_GANON_0 + (flag - 5);
        case SCENE_GANONS_TOWER:
            return CHEST_VALID_0;
        default: {
            return CHEST_MAX;
        }
    }
}
