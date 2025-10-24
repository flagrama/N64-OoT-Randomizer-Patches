#ifndef R_RANDOMIZER_LOCATION_TABLE_H
#define R_RANDOMIZER_LOCATION_TABLE_H 1
#include "randomizer.h"

#include "r_ast.h"
#include "item.h"

typedef struct LocationTableRow {
    RegionEnum regionKey;
    const char* name;
    LocationType type;
    SceneID scene;
    u8 flag;
    ItemID vanillaItem;
    Ast accessRule[MAX_AST_EVENTS];
} LocationTableRow;

extern LocationTableRow locationTable[178];

typedef struct ItemTableRow {
    GetItemID id;
    const char* name;
    ItemType type;
    TriState advancement;
    bool junk;
} ItemTableRow;

extern ItemTableRow itemTable[ITEM_NONE];

typedef struct RegionTableRow {
    const char* name;
    SceneID dungeon;
} RegionTableRow;

extern RegionTableRow regionTable[REGION_MAX];

typedef struct ExitTableRow {
    RegionEnum regionKey;
    const char* name;
    Ast accessRule[MAX_AST_EVENTS];
} ExitTableRow;

extern ExitTableRow exitTable[126];

#endif
