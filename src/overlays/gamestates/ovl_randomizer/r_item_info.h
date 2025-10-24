#ifndef R_ITEM_INFO_H
#define R_ITEM_INFO_H 1
#include "randomizer.h"

#include "r_containers.h"

#include "item.h"
#include "ultra64/ultratypes.h"

extern u32 itemIdToSolverId[ITEM_NONE];
extern IntHashTable allowedGlobals;
extern IntHashTable ItemInfo_SolverIds;
extern ItemInfoHashTable ItemInfo_Items;
extern ItemInfoHashTable ItemInfo_Events;

typedef struct ItemInfo ItemInfo;
struct ItemInfo {
    char const* name;
    TriState advancement;
    ItemType type;
    ItemID index;
    GetItemID giIndex;
    bool junk;
    unsigned solverId;
};

struct ItemInfo_v {
    ItemInfo* data;
};

ItemInfo* ItemInfo_Init(ItemID item, bool event);
void ItemInfo_InitAll();
void ItemInfo_DestroyAll();

#endif
