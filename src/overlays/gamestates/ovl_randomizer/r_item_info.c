#include "randomizer.h"

#include "r_item_info.h"

#include "array_count.h"
#include "printf.h"
#include "r_tables.h"
#include "zelda_arena.h"

u32 itemIdToSolverId[ITEM_NONE];
IntHashTable allowedGlobals;
ItemInfoHashTable ItemInfo_Items;
ItemInfoHashTable ItemInfo_Events;
IntHashTable ItemInfo_SolverIds;

ItemInfo* ItemInfo_Init(ItemID item, bool event) {
    ItemInfo* itemInfo = ZELDA_ARENA_MALLOC(sizeof(ItemInfo), __FILE_NAME__, __LINE__);
    memset(itemInfo, 0, sizeof(ItemInfo));

    if (event) {
        itemInfo->type = EVENT_ITEM;
        itemInfo->index = item;
    } else {
        ItemTableRow row = itemTable[item];
        itemInfo->index = item;
        itemInfo->giIndex = row.id;
        itemInfo->name = row.name;
        itemInfo->type = row.type;
        itemInfo->advancement = row.advancement;
        itemInfo->junk = row.junk;
    }

    if (itemInfo->name != NULL && !itemInfo->junk) {
        memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
        strcpy(hashKeyBuffer, itemInfo->name);

        if (!ht_contains(&ItemInfo_SolverIds, hashKeyBuffer)) {
            unsigned length = ItemInfo_SolverIds.size;
            ht_insert(&ItemInfo_SolverIds, hashKeyBuffer, &length);
            ht_insert(&allowedGlobals, hashKeyBuffer, &length);
            itemInfo->solverId = length;
        }
    }

    return itemInfo;
}

void ItemInfo_InitAll() {
    for (size_t i = 0; i < ARRAY_COUNT(itemIdToSolverId); i++) {
        itemIdToSolverId[i] = UINT32_MAX;
    }

    ht_setup(&allowedGlobals, sizeof(hashKeyBuffer), sizeof(unsigned), HT_MINIMUM_CAPACITY);
    ht_setup(&ItemInfo_SolverIds, sizeof(hashKeyBuffer), sizeof(unsigned), HT_MINIMUM_CAPACITY);
    ht_setup(&ItemInfo_Items, sizeof(hashKeyBuffer), sizeof(ItemInfo_v), HT_MINIMUM_CAPACITY);
    ht_setup(&ItemInfo_Events, sizeof(hashKeyBuffer), sizeof(ItemInfo_v), HT_MINIMUM_CAPACITY);

    for (size_t itemIndex = 0; itemIndex < ARRAY_COUNT(itemTable); itemIndex++) {
        if (itemTable[itemIndex].name == NULL) {
            continue;
        }

        ItemInfo* itemInfo = ItemInfo_Init(itemIndex, false);
        itemIdToSolverId[itemIndex] = itemInfo->solverId;

        memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
        strcpy(hashKeyBuffer, itemInfo->name);

        ItemInfo_v container = { itemInfo };
        ht_insert(&ItemInfo_Items, hashKeyBuffer, &container);
    }
}

void ht_free_itemInfo(void* key, void* value) {
    if (key == NULL) {
        return;
    }
    ZELDA_ARENA_FREE(((ItemInfo_v*)value)->data, __FILE_NAME__, __LINE__);
}

void ItemInfo_DestroyAll() {
    ht_iterate(&allowedGlobals, ht_free);
    ht_destroy(&allowedGlobals);
    ht_iterate(&ItemInfo_SolverIds, ht_free);
    ht_destroy(&ItemInfo_SolverIds);
    ht_iterate(&ItemInfo_Items, ht_free_itemInfo);
    ht_destroy(&ItemInfo_Items);
    ht_iterate(&ItemInfo_Events, ht_free);
    ht_destroy(&ItemInfo_Events);
}
