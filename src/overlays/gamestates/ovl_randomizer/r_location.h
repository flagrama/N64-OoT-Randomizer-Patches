#ifndef R_LOCATION_H
#define R_LOCATION_H 1
#include "randomizer.h"

#include "r_containers.h"
#include "r_item.h"
#include "r_search.h"
#include "r_ast.h"

typedef struct Location Location;
struct Location {
    char const* name;
    Region* parentRegion;
    LocationType type;
    SceneID scene;
    unsigned flag;
    ItemID vanillaItem;
    Ast* accessRule[MAX_AST_EVENTS];
    AstVector itemRules;
    Item item;
};

struct Location_v {
    Location* data;
};

Location *Location_Factory(size_t locationTableIndex);
bool Location_CanFill(Location location, Search* search, Item item, bool checkAccess);

#endif
