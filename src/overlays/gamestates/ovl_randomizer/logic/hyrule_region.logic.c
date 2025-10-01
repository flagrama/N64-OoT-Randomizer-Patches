/*
REGION                      NAME
    AST COMMANDS
total = 26
*/
{ HYRULE_FIELD,             "Lost Woods Bridge", {
    { AST_END }
} },
{ HYRULE_FIELD,             "Lake Hylia", {
    { AST_END }
} },
{ HYRULE_FIELD,             "Gerudo Valley", {
    { AST_END }
} },
{ HYRULE_FIELD,             "Market", {
    { AST_END }
} },
{ HYRULE_FIELD,             "Kakariko Village", {
    { AST_END }
} },
{ HYRULE_FIELD,             "Zora River Front", {
    { AST_END }
} },
{ HYRULE_FIELD,             "Lon Lon Ranch", {
    { AST_END }
} },
{ LAKE_HYLIA,               "Hyrule Field", {
    { AST_END }
} },
{ LAKE_HYLIA,               "Zora's Domain", {
    { AST_CAN_REACH, ZORAS_DOMAIN, LINK_AGE_CHILD }, { AST_OR }, { AST_CAN_USE, ITEM_BOOTS_IRON }, { AST_END }
} },
{ LAKE_HYLIA,               "Water Temple Lobby", {
    { AST_IS_ADULT }, { AST_AND }, { AST_CAN_USE, ITEM_HOOKSHOT }, { AST_AND }, { AST_CAN_USE, ITEM_BOOTS_IRON }, { AST_END }
} },
{ CASTLE_TOWN,              "Hyrule Field", {
    { AST_END }
} },
{ CASTLE_TOWN,              "Temple of Time", {
    { AST_END }
} },
{ CASTLE_TOWN,              "Hyrule Castle Grounds", {
    { AST_IS_CHILD }, { AST_END }
} },
{ CASTLE_TOWN,              "Outside Ganon's Castle", {
    { AST_IS_ADULT }, { AST_END }
} },
{ TEMPLE_OF_TIME,           "Market", {
    { AST_END }
} },
{ TEMPLE_OF_TIME,           "Beyond Door of Time", {
    { AST_CAN_TIME_TRAVEL }, { AST_END }
} },
{ BEYOND_DOOR_OF_TIME,      "Temple of Time", {
    { AST_END }
} },
{ HYRULE_CASTLE_GROUNDS,    "Market", {
    { AST_END }
} },
{ GANONS_CASTLE_GROUNDS,    "Market", {
    { AST_END }
} },
{ GANONS_CASTLE_GROUNDS,    "Ganon's Castle Lobby", {
    { AST_CAN_MAKE_RAINBOW_BRIDGE }, { AST_END }
 } },
{ KAKARIKO_VILLAGE,         "Hyrule Field", {
    { AST_END }
} },
{ KAKARIKO_VILLAGE,         "Bottom of the Well Lobby", {
    { AST_IS_CHILD }, { AST_AND }, { AST_CAN_PLAY, ITEM_SONG_STORMS }, { AST_END }
} },
{ KAKARIKO_VILLAGE,         "Graveyard", {
    { AST_END }
} },
{ KAKARIKO_VILLAGE,         "Death Mountain Trail", {
    { AST_END }
} },
{ GRAVEYARD,                "Kakariko Village", {
    { AST_END }
} },
{ LON_LON_RANCH,            "Hyrule Field", {
    { AST_END }
} },