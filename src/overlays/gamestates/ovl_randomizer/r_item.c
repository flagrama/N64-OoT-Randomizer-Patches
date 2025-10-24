#include "r_item.h"

#include "r_item_info.h"

#include "fault.h"
#include "printf.h"
#include "item.h"
#include "zelda_arena.h"
#include "libc64/sprintf.h"

Item* Item_Init(char const* name, bool event) {
    Item* item = ZELDA_ARENA_MALLOC(sizeof(Item), __FILE_NAME__, __LINE__);
    memset(item, 0, sizeof(Item));

    item->name = name;
    item->scene = SCENE_ID_MAX;

    memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
    strcpy(hashKeyBuffer, name);

    if (event) {
        if (!ht_contains(&ItemInfo_Events, hashKeyBuffer)) {
            ItemInfo_v infoContainer = { ItemInfo_Init(ITEM_NONE, true) };
            ht_insert(&ItemInfo_Events, hashKeyBuffer, &infoContainer);
        }

        item->info = ((ItemInfo_v*)ht_lookup(&ItemInfo_Events, hashKeyBuffer))->data;
    } else {
        item->info = ((ItemInfo_v*)ht_lookup(&ItemInfo_Items, hashKeyBuffer))->data;
    }

    return item;
}

ItemVector Item_Factory(StringVector itemNames) {
    ItemVector ret;
    vector_setup(&ret, VECTOR_MINIMUM_CAPACITY, sizeof(Item_v));

    VECTOR_FOR_EACH(&itemNames, names) {
        String_v container = ITERATOR_GET_AS(String_v, &names);

        memset(hashKeyBuffer, 0, sizeof(hashKeyBuffer));
        strcpy(hashKeyBuffer, container.data);

        if (!ht_contains(&ItemInfo_Items, hashKeyBuffer)) {
            char msg[0x100];
            sprintf(msg, "Unknown item: %s", container.data);
            PRINTF("Randomizer error! %s\n", msg);
            Fault_AddHungupAndCrashImpl(" RANDOMIZER ERROR", msg);
        }

        Item_v itemContainer = { Item_Init(container.data, false) };
        vector_push_back(&ret, &itemContainer);
    }

    return ret;
}
