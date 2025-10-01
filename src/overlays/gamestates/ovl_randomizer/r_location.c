#include "r_location.h"

#include "r_tables.h"
#include "zelda_arena.h"

Location* Location_Init(char const* name, LocationType const type, SceneID const scene, unsigned const flag, ItemID vanillaItem) {
    Location* location = ZELDA_ARENA_MALLOC(sizeof(Location), __FILE_NAME__, __LINE__);
    memset(location, 0, sizeof(Location));

    Location const temp = {
        .name = name,
        .type = type,
        .scene = scene,
        .flag = flag,
        .vanillaItem = vanillaItem,
    };
    *location = temp;

    return location;
}

Location* Location_Factory(const size_t locationTableIndex) {
    if (locationTable[locationTableIndex].name == NULL) {
        return NULL;
    }
    Location* location = Location_Init(
        locationTable[locationTableIndex].name,
        locationTable[locationTableIndex].type,
        locationTable[locationTableIndex].scene,
        locationTable[locationTableIndex].flag,
        locationTable[locationTableIndex].vanillaItem
    );

    return location;
}

bool CanFillFast(Location location, Item item) {
    if (location.parentRegion == NULL) {
        return false;
    }

    bool result = Region_CanFill(*location.parentRegion, item);
    if (location.itemRules.size) {
        result = result && Ast_Eval_Item(location, item);
    }
    return result;
}

bool Location_CanFill(Location location, Search* search, Item item, bool checkAccess) {
    return CanFillFast(location, item) && (!checkAccess || Search_LocationAccess(search, location, LINK_AGE_EITHER));
}
