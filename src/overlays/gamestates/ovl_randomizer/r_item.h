#ifndef R_ITEM_H
#define R_ITEM_H 1
#include "r_containers.h"

#include "z64scene.h"

typedef struct ItemInfo ItemInfo;

typedef struct Item Item;
struct Item {
    char const* name;
    ItemInfo* info;
    SceneID scene;
};

struct Item_v {
    Item* data;
};

ItemVector Item_Factory(StringVector itemNames);
Item* Item_Init(char const* name, bool event);

#endif
