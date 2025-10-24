/*
REGION                          NAME
    AST COMMANDS
total = 13
*/
{ KOKIRI_FOREST,                "Deku Tree Lobby", {
    { AST_IS_CHILD }, { AST_AND }, { AST_HAS, ITEM_SWORD_KOKIRI }, { AST_END }
} },
{ KOKIRI_FOREST,                "Lost Woods", {
    { AST_END }
} },
{ KOKIRI_FOREST,                "Lost Woods Bridge", {
    { AST_CAN_LEAVE_FOREST },{ AST_END }
} },
{ LOST_WOODS,                   "Kokiri Forest", {
    { AST_END }
} },
{ LOST_WOODS,                   "Sacred Forest Meadow Entry", {
    { AST_END }
} },
{ LOST_WOODS,                   "Goron City Woods Warp", {
    { AST_END }
} },
{ LOST_WOODS,                   "Zora River", {
    { AST_CAN_REACH, ZORAS_DOMAIN, LINK_AGE_CHILD }, { AST_OR }, { AST_CAN_USE, ITEM_BOOTS_IRON },{ AST_END }
} },
{ SACRED_FOREST_MEADOW_ENTRY,   "Lost Woods", {
    { AST_END }
} },
{ SACRED_FOREST_MEADOW_ENTRY,   "Sacred Forest Meadow", {
    { AST_END }
} },
{ SACRED_FOREST_MEADOW,         "Sacred Forest Meadow Entry", {
    { AST_END }
} },
{ SACRED_FOREST_MEADOW,         "Forest Temple Lobby", {
    { AST_IS_ADULT }, { AST_AND }, { AST_CAN_USE, ITEM_HOOKSHOT }, { AST_END }
} },
{ LOST_WOODS_BRIDGE,            "Kokiri Forest", {
    { AST_END }
} },
{ LOST_WOODS_BRIDGE,            "Hyrule Field", {
    { AST_END }
} },
