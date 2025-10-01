/*
REGION                      NAME
    AST COMMANDS
total = 8
*/
{ GERUDO_VALLEY,            "Hyrule Field", {
    { AST_END }
} },
{ GERUDO_VALLEY,            "Lake Hylia", {
    { AST_END }
} },
{ GERUDO_VALLEY,            "Gerudo Valley Far Side", {
    { AST_IS_ADULT }, { AST_END }
} },
{ GERUDO_VALLEY_FAR_SIDE,   "Gerudo Fortress", {
    { AST_END }
} },
{ GERUDO_FORTRESS,          "Haunted Wasteland", {
    { AST_HAS, ITEM_LONGSHOT }, { AST_OR }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_END }
} },
{ GERUDO_FORTRESS,          "Gerudo Training Ground Lobby", {
    { AST_END }
} },
{ HAUNTED_WASTELAND,        "Desert Colossus", {
    { AST_HAS, ITEM_LENS_OF_TRUTH }, {AST_AND}, { AST_CAN_REACH, DEATH_MOUNTAIN_CRATER_UPPER, LINK_AGE_CHILD }, { AST_END }
} },
{ DESERT_COLOSSUS,          "Spirit Temple Lobby", {
    { AST_END }
} },
{ SPIRIT_TEMPLE_LOBBY,      "Spirit Temple Hands", {
    { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 5 }, { AST_OR }, { AST_GROUP_OPEN }, { AST_IS_ADULT }, { AST_AND }, { AST_HAS, ITEM_BOMB_BAG_20 }, { AST_AND }, { AST_HAS_COUNT, ITEM_SMALL_KEY_SPIRIT_TEMPLE, 3 }, { AST_GROUP_CLOSE }, { AST_END }
} },
{ SPIRIT_TEMPLE_HANDS,       "Desert Colossus", {
    { AST_END }
} },