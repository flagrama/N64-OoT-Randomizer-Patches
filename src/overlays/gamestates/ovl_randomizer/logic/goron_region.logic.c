/*
REGION                              NAME
    AST COMMANDS
total = 18
*/
{ DEATH_MOUNTAIN,                   "Kakariko Village",                 {
    { AST_END }
} },
{ DEATH_MOUNTAIN,                   "Goron City",                       {
    { AST_END }
} },
{ DEATH_MOUNTAIN,                   "Death Mountain Crater Upper",      {
    { AST_CAN_BLAST_OR_SMASH }, { AST_END }
} },
{ DEATH_MOUNTAIN,                   "Dodongo's Cavern Lobby",           {
    { AST_HAS, ITEM_BOMB_BAG_20 }, { AST_OR }, { AST_CAN_LEAVE_FOREST }, { AST_END }
} },
{ GORON_CITY,                       "Death Mountain Trail",             {
    { AST_END }
} },
{ GORON_CITY,                       "Death Mountain Crater Lower",      {
    { AST_IS_ADULT }, { AST_END }
} },
{ GORON_CITY,                       "Goron City Woods Warp",            {
    { AST_END }
} },
{ GORON_CITY_WOODS_WARP,            "Goron City",                       {
    { AST_CAN_BLAST_OR_SMASH }, { AST_END }
} },
{ GORON_CITY_WOODS_WARP,            "Lost Woods",                       {
    { AST_CAN_BLAST_OR_SMASH }, { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_UPPER,      "Death Mountain Trail",             {
    { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_UPPER,      "Death Mountain Crater Lower",      {
    { AST_IS_ADULT }, { AST_AND }, { AST_HAS, ITEM_BOOTS_HOVER }, { AST_OR }, { AST_AT, DEATH_MOUNTAIN_CRATER_LOWER, { AST_CAN_USE, ITEM_HAMMER }}, { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_UPPER,      "Death Mountain Crater Central",    {
    { AST_IS_ADULT }, { AST_CAN_USE, ITEM_LONGSHOT }, { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_LOWER,      "Goron City",                       {
    { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_LOWER,      "Death Mountain Crater Central",    {
    { AST_IS_ADULT}, { AST_AND },
    { AST_GROUP_OPEN },
    { AST_HAS, ITEM_BOOTS_HOVER }, { AST_OR }, { AST_HAS, ITEM_HOOKSHOT },
    { AST_GROUP_CLOSE },
    { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_LOWER,      "Death Mountain Crater Upper",      {
    { AST_IS_ADULT }, { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_CENTRAL,    "Death Mountain Crater Lower",      {
    { AST_IS_ADULT }, { AST_AND },
    { AST_GROUP_OPEN },
    { AST_HAS, ITEM_BOOTS_HOVER }, { AST_OR }, { AST_HAS, ITEM_HOOKSHOT }, { AST_OR }, { AST_CAN_REACH, ZORA_RIVER, LINK_AGE_CHILD }/* beans */,
    { AST_GROUP_CLOSE},
    { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_CENTRAL,    "Fire Temple Lobby",                {
    { AST_IS_ADULT }, { AST_END }
} },
{ DEATH_MOUNTAIN_CRATER_CENTRAL,    "Death Mountain Crater Upper",                  {
    { AST_IS_ADULT }, { AST_AND }, { AST_CAN_REACH, ZORA_RIVER, LINK_AGE_CHILD }/* beans */, { AST_END }
} },