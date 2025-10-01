#include "r_ast.h"

#include "fault.h"
#include "printf.h"
#include "r_entrance.h"
#include "r_item_info.h"
#include "r_location.h"
#include "r_tables.h"
#include "zelda_arena.h"

Ast *Ast_Init(Ast ast) {
    Ast *ptr = ZELDA_ARENA_MALLOC(sizeof(Ast), __FILE_NAME__, __LINE__);
    if (ptr) {
        *ptr = ast;
    }
    return ptr;
}

bool initialIteration = true;
bool initialIteration2 = true;

bool has(Search* search, ItemID item, u8 count) {
    unsigned solverId = itemIdToSolverId[item];
    if (solverId == UINT32_MAX) { return false; }
    return search->state->solvItems[solverId] >= count;
}

bool isAdult(Search* search, LinkAge age) {
    bool result = age == LINK_AGE_ADULT;
    result = result && has(search, EVENT_DEFEAT_GOHMA, 1);
    result = result && has(search, EVENT_DEFEAT_KING_DODONGO, 1);
    return result && has(search, EVENT_DEFEAT_BARINADE, 1);
}

bool isAdultItem(ItemID item) {
    return (item == ITEM_BOW || item == ITEM_HAMMER || item == ITEM_BOOTS_IRON || item == ITEM_HOOKSHOT
        || item == ITEM_LONGSHOT || item == ITEM_STRENGTH_SILVER_GAUNTLETS || item == ITEM_STRENGTH_GOLD_GAUNTLETS
        || item == ITEM_SHIELD_MIRROR);
}
bool isChildItem(ItemID item) {
    return item == ITEM_SLINGSHOT || item == ITEM_BOOMERANG || item == ITEM_SWORD_KOKIRI;
}

bool canLeaveForest(Search* search) {
    return has(search, EVENT_DEFEAT_GOHMA, 1);
}

bool canPlay(Search* search, LinkAge age, ItemID song)
{
    bool result = canLeaveForest(search) || age == LINK_AGE_ADULT; // ocarina access
    switch (song) {
        case ITEM_SONG_LULLABY: {
            result = result && Search_CanReach(search, regionTable[HYRULE_CASTLE_GROUNDS].name, LINK_AGE_CHILD);
        } break;
        case ITEM_SONG_STORMS: {
            result = result && Search_CanReach(search, regionTable[KAKARIKO_VILLAGE].name, LINK_AGE_ADULT);
        } break;
        case ITEM_SONG_NOCTURNE: {
            result = result && has(search, EVENT_DEFEAT_PHANTOM_GANON, 1);
            result = result && has(search, EVENT_DEFEAT_VOLVAGIA, 1);
            result = result && has(search, EVENT_DEFEAT_MORPHA, 1);
        } break;
        case ITEM_SONG_REQUIEM: {
            result = result && Search_CanReach(search, regionTable[DESERT_COLOSSUS].name, LINK_AGE_EITHER);
        } break;
        default:
            break;
    }
    return result;
}

bool canUse(Search* search, LinkAge age, ItemID item)
{
    if (isAdultItem(item)) {
        return age == LINK_AGE_ADULT && search->state->solvItems[itemIdToSolverId[item]];
    }
    if (item == ITEM_LENS_OF_TRUTH) {
        // has magic && item
        return canPlay(search, age, ITEM_SONG_LULLABY) && Search_CanReach(search, regionTable[DEATH_MOUNTAIN_CRATER_UPPER].name, LINK_AGE_EITHER) && search->state->solvItems[itemIdToSolverId[item]];
    }
    return age == LINK_AGE_CHILD && search->state->solvItems[itemIdToSolverId[item]];
}

bool evaluateGroup_Entrance(Ast** ptr, Search* search, Entrance spot, LinkAge age, size_t* offset) {
    PRINTF("\n");
    const Ast* astArr = *ptr;

    unsigned nRules = 1;
    while (true) {
        // PRINTF("Found tag %u\n", astArr[*offset + nRules].tag);
        if (astArr[*offset + nRules].tag == AST_GROUP_CLOSE) { break; }
        nRules++;
    }
    if (nRules) {
        Ast subAst[nRules];
        for (size_t i = 0; i < nRules; i++) {
            // PRINTF("Adding tag %u to subexpression\n", astArr[*offset + i + 1]);
            subAst[i] = astArr[*offset + i + 1];
        }
        Ast* subAstArr[1] = { subAst };
        bool result = Ast_Eval_Entrance(subAstArr, search, spot, age);
        *offset += nRules;
        // PRINTF("Next tag to process %u offset %u\n", astArr[*offset].tag, *offset);
        return result;
    }
    return true;
}

bool evaluateGroup_Location(Ast** ptr, Search* search, Location spot, LinkAge age, size_t* offset) {
    // PRINTF("\n");
    const Ast* astArr = *ptr;

    unsigned nRules = 1;
    while (true) {
        // PRINTF("Found tag %u\n", astArr[*offset + nRules].tag);
        if (astArr[*offset + nRules].tag == AST_GROUP_CLOSE) { break; }
        nRules++;
    }
    if (nRules) {
        Ast subAst[nRules];
        for (size_t i = 0; i < nRules; i++) {
            // PRINTF("Adding tag %u to subexpression\n", astArr[*offset + i + 1]);
            subAst[i] = astArr[*offset + i + 1];
        }
        Ast* subAstArr[1] = { subAst };
        bool result = Ast_Eval_Location(subAstArr, search, spot, age);
        *offset += nRules;
        // PRINTF("Next tag to process %u offset %u\n", astArr[*offset].tag, *offset);
        return result;
    }
    return true;
}

bool Ast_Eval_Entrance(Ast** ptr, Search* search, Entrance spot, LinkAge age) {
    const Ast* astArr = *ptr;
    bool wasInitialIteration = initialIteration;
    initialIteration = false;

    if (wasInitialIteration) {
        PRINTF("ENTRANCE: Evaluating %s access as %s\n", spot.name, age == LINK_AGE_ADULT ? "Adult" : "Child");
    }

    bool result = true;
    bool eval = false;
    bool compound = false;
    for (size_t i = 0; astArr[i].tag != AST_END; i++) {
        eval = true;
        Ast ast = astArr[i];
        int count = 1;

        switch (ast.tag) {
            case AST_AND: {
                compound = true;
                PRINTF("AND ");
                i++;
                if (astArr[i].tag == AST_GROUP_OPEN) {
                    PRINTF("\nGROUP_OPEN (by AND) ");
                    result = evaluateGroup_Entrance(ptr, search, spot, age, &i);
                } else {
                    Ast subAst[2] = { astArr[i], AST_END };
                    Ast* subAstArr[1] = { subAst };
                    result = Ast_Eval_Entrance(subAstArr, search, spot, age);
                }
            } break;
            case AST_OR: {
                compound = true;
                PRINTF("OR ");
                i++;
                if (astArr[i].tag == AST_GROUP_OPEN) {
                    PRINTF("\nGROUP_OPEN (by OR) ");
                    bool tempResult = evaluateGroup_Entrance(ptr, search, spot, age, &i);
                    result = result || tempResult;
                } else {
                    Ast subAst[2] = { astArr[i], AST_END };
                    Ast* subAstArr[1] = { subAst };
                    /* Short-circuits */
                    result = result || Ast_Eval_Entrance(subAstArr, search, spot, age);
                }
            } break;
            case AST_GROUP_OPEN: {
                compound = true;
                PRINTF("GROUP_OPEN ");
                result = evaluateGroup_Entrance(ptr, search, spot, age, &i);
            } break;
            case AST_GROUP_CLOSE: {
                return result;
                PRINTF("GROUP_CLOSE ");
            } break;
            case AST_CAN_REACH: {
                struct AST_CAN_REACH data = ast.data.AST_CAN_REACH;
                PRINTF("CAN_REACH %s ", regionTable[data.region].name);
                result = Search_CanReach(search, regionTable[data.region].name, data.age);
            } break;
            case AST_IS_CHILD: {
                PRINTF("IS_CHILD ");
                result = age == LINK_AGE_CHILD;
            } break;
            case AST_IS_ADULT: {
                PRINTF("IS_ADULT ");
                result = isAdult(search, age);
            } break;
            case AST_NAME: {
                struct AST_NAME data = ast.data.AST_NAME;
                PRINTF("NAME IS %s ", data.name);
                result = strcmp(data.name, spot.name) == 0;
            } break;
            case AST_AT: {
                struct AST_AT data = ast.data.AST_AT;
                PRINTF("AT %s ", regionTable[data.region].name);
                result = Ast_Eval_Entrance(&data.subRule, search, spot, age);
            } break;
            case AST_HAS_COUNT: {
                struct AST_HAS_COUNT data = ast.data.AST_HAS_COUNT;
                count = data.count;
            } FALLTHROUGH;
            case AST_HAS: {
                struct AST_HAS data = ast.data.AST_HAS;
                PRINTF("HAS %s %u ", itemTable[data.item].name, count);
                result = has(search, data.item, count);
            } break;
            case AST_CAN_BLAST_OR_SMASH: {
                PRINTF("CAN_BLAST_OR_SMASH ");
                unsigned bombBagSolverId = itemIdToSolverId[ITEM_BOMB_BAG_20];
                result = search->state->solvItems[bombBagSolverId] || canUse(search, age, ITEM_HAMMER);
            } break;
            case AST_CAN_PLAY: {
                struct AST_CAN_PLAY data = ast.data.AST_CAN_PLAY;
                PRINTF("CAN_PLAY %d ", data.song);
                result = canPlay(search, age, data.song);
            } break;
            case AST_CAN_TIME_TRAVEL: {
                PRINTF("CAN_TIME_TRAVEL ");
                result = has(search, EVENT_DEFEAT_GOHMA, 1);
                result = result && has(search, EVENT_DEFEAT_KING_DODONGO, 1);
                result = result && has(search, EVENT_DEFEAT_BARINADE, 1);
            } break;
            case AST_CAN_USE: {
                struct AST_CAN_USE data = ast.data.AST_CAN_USE;
                PRINTF("CAN_USE %s ", itemTable[data.item].name);
                result = canUse(search, age, data.item);
            } break;
            case AST_CAN_LEAVE_FOREST: {
                PRINTF("CAN_LEAVE_FOREST ");
                result = canLeaveForest(search);
            } break;
            case AST_CAN_MAKE_RAINBOW_BRIDGE: {
                PRINTF("CAN_MAKE_RAINBOW_BRIDGE ");
                result = Search_CanReach(search, regionTable[SHADOW_TEMPLE_BOSS].name, LINK_AGE_ADULT);
                result = result && Search_CanReach(search, regionTable[SPIRIT_TEMPLE_BOSS].name, LINK_AGE_ADULT);
            } break;
            default:
                result = true;
        }

        if (!compound) {
            PRINTF("%s ", result ? "true" : "false");
        }
        if (!result && astArr[i+1].tag != AST_OR) { break; }
    }
    if (eval && !compound) {
        PRINTF("\n(%s)\n", result ? "true" : "false");
    }
    if (wasInitialIteration) {
        initialIteration = true;
        PRINTF("-==-\n");
    }
    return result;
}

bool Ast_Eval_Location(Ast** ptr, Search* search, Location spot, LinkAge age) {
    const Ast* astArr = *ptr;
    bool wasInitialIteration = initialIteration2;
    initialIteration2 = false;

    if (wasInitialIteration) {
        PRINTF("LOCATION: Evaluating %s access as %s\n", spot.name, age == LINK_AGE_ADULT ? "Adult" : "Child");
    }

    bool result = true;
    bool eval = false;
    bool compound = false;
    for (size_t i = 0; astArr[i].tag != AST_END; i++) {
        eval = true;
        Ast ast = astArr[i];
        int count = 1;

        switch (ast.tag) {
            case AST_AND: {
                compound = true;
                PRINTF("AND ");
                i++;
                if (astArr[i].tag == AST_GROUP_OPEN) {
                    PRINTF("\nGROUP_OPEN (by AND) ");
                    result = evaluateGroup_Location(ptr, search, spot, age, &i);
                } else {
                    Ast subAst[2] = { astArr[i], AST_END };
                    Ast* subAstArr[1] = { subAst };
                    result = Ast_Eval_Location(subAstArr, search, spot, age);
                }
            } break;
            case AST_OR: {
                compound = true;
                PRINTF("OR ");
                i++;
                if (astArr[i].tag == AST_GROUP_OPEN) {
                    PRINTF("\nGROUP_OPEN (by OR) ");
                    bool tempResult = evaluateGroup_Location(ptr, search, spot, age, &i);
                    result = result || tempResult;
                } else {
                    Ast subAst[2] = { astArr[i], AST_END };
                    Ast* subAstArr[1] = { subAst };
                    /* Short-circuits */
                    result = result || Ast_Eval_Location(subAstArr, search, spot, age);
                }
            } break;
            case AST_GROUP_OPEN: {
                PRINTF("GROUP_OPEN ");
                result = evaluateGroup_Location(ptr, search, spot, age, &i);
            } break;
            case AST_GROUP_CLOSE: {
                return result;
                PRINTF("GROUP_CLOSE ");
            } break;
            case AST_CAN_REACH: {
                struct AST_CAN_REACH data = ast.data.AST_CAN_REACH;
                PRINTF("CAN_REACH %s ", regionTable[data.region].name);
                result = Search_CanReach(search, regionTable[data.region].name, data.age);
            } break;
            case AST_IS_CHILD: {
                PRINTF("IS_CHILD ");
                result = age == LINK_AGE_CHILD;
            } break;
            case AST_IS_ADULT: {
                PRINTF("IS_ADULT ");
                result = isAdult(search, age);
            } break;
            case AST_NAME: {
                struct AST_NAME data = ast.data.AST_NAME;
                PRINTF("NAME IS %s ", data.name);
                result = strcmp(data.name, spot.name) == 0;
            } break;
            case AST_AT: {
                struct AST_AT data = ast.data.AST_AT;
                PRINTF("AT %s ", regionTable[data.region].name);
                result = Ast_Eval_Location(&data.subRule, search, spot, age);
            } break;
            case AST_HAS_COUNT: {
                struct AST_HAS_COUNT data = ast.data.AST_HAS_COUNT;
                count = data.count;
            } FALLTHROUGH;
            case AST_HAS: {
                struct AST_HAS data = ast.data.AST_HAS;
                PRINTF("HAS %s %u ", itemTable[data.item].name, count);
                result = has(search, data.item, count);
            } break;
            case AST_CAN_BLAST_OR_SMASH: {
                PRINTF("CAN_BLAST_OR_SMASH ");
                unsigned bombBagSolverId = itemIdToSolverId[ITEM_BOMB_BAG_20];
                result = search->state->solvItems[bombBagSolverId] || canUse(search, age, ITEM_HAMMER);
            } break;
            case AST_CAN_PLAY: {
                struct AST_CAN_PLAY data = ast.data.AST_CAN_PLAY;
                PRINTF("CAN_PLAY %d ", data.song);
                result = canPlay(search, age, data.song);
            } break;
            case AST_CAN_TIME_TRAVEL: {
                PRINTF("CAN_TIME_TRAVEL ");
                result = has(search, EVENT_DEFEAT_GOHMA, 1);
                result = result && has(search, EVENT_DEFEAT_KING_DODONGO, 1);
                result = result && has(search, EVENT_DEFEAT_BARINADE, 1);
            } break;
            case AST_CAN_USE: {
                struct AST_CAN_USE data = ast.data.AST_CAN_USE;
                PRINTF("CAN_USE %s ", itemTable[data.item].name);
                result = canUse(search, age, data.item);
            } break;
            case AST_CAN_LEAVE_FOREST: {
                PRINTF("CAN_LEAVE_FOREST ");
                result = canLeaveForest(search);
            } break;
            case AST_CAN_MAKE_RAINBOW_BRIDGE: {
                PRINTF("CAN_MAKE_RAINBOW_BRIDGE ");
                result = Search_CanReach(search, regionTable[SHADOW_TEMPLE_BOSS].name, LINK_AGE_ADULT);
                result = result && Search_CanReach(search, regionTable[SPIRIT_TEMPLE_BOSS].name, LINK_AGE_ADULT);
            } break;
            default:
                result = true;
        }

        if (!compound) {
            PRINTF("%s ", result ? "true" : "false");
        }
        if (!result && astArr[i+1].tag != AST_OR) { break; }
    }
    if (eval && !compound) {
        PRINTF("\n(%s)\n", result ? "true" : "false");
    }
    if (wasInitialIteration) {
        initialIteration2 = true;
        PRINTF("-==-\n");
    }
    return result;
}

bool Ast_Eval_Item(Location location, Item item) {
    bool result = true;

    VECTOR_FOR_EACH(&location.itemRules, rules) {
        Ast_v container = ITERATOR_GET_AS(Ast_v, &rules);
        switch (container.data->tag) {
            case AST_END:
                return result;
            case AST_NAME: {
                struct AST_NAME data = container.data->data.AST_NAME;
                result = strcmp(data.name, item.name) == 0;
            } break;
            case AST_NAME_NOT: {
                struct AST_NAME data = container.data->data.AST_NAME;
                result = strcmp(data.name, item.name) != 0;
            } break;
            default:
                result = true;
        }
    }

    return result;
}

void Ast_Free(Ast* ptr) {
    ZELDA_ARENA_FREE(ptr, __FILE_NAME__, __LINE__);
}
