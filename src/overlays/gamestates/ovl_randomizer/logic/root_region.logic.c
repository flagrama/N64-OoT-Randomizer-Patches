/*
REGION  NAME
    AST COMMANDS
total = 4
*/
{ ROOT, "Kokiri Forest", {
    { AST_IS_CHILD }, { AST_END }
} },
{ ROOT, "Temple of Time", {
    { AST_IS_ADULT }, { AST_CAN_TIME_TRAVEL }, { AST_END }
} },
{ ROOT, "Shadow Temple Lobby", {
    { AST_IS_ADULT }, { AST_CAN_TIME_TRAVEL }, { AST_AND },{ AST_AND }, { AST_CAN_PLAY, ITEM_SONG_NOCTURNE }, { AST_AND },
    { AST_GROUP_OPEN },
    { AST_HAS, ITEM_HOOKSHOT }, { AST_OR }, { AST_HAS, ITEM_BOOTS_HOVER },
    { AST_GROUP_CLOSE },
    { AST_AND }, { AST_CAN_USE, ITEM_LENS_OF_TRUTH },
    { AST_END }
} },
{ ROOT, "Desert Colossus", {
    { AST_CAN_PLAY, ITEM_SONG_REQUIEM }, { AST_AND }, { AST_GROUP_OPEN }, { AST_IS_CHILD }, { AST_OR }, { AST_CAN_TIME_TRAVEL }, { AST_GROUP_CLOSE }, { AST_END }
} },