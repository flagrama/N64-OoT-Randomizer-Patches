#ifndef R_CONTAINERS_H
#define R_CONTAINERS_H 1

#include "hashtable.h"
#include "vector.h"

typedef HashTable IntHashTable;
typedef HashTable ItemHashTable;
typedef HashTable ItemInfoHashTable;
typedef HashTable LocationHashTable;
typedef HashTable RegionHashTable;

typedef Vector IntVector;
typedef Vector AstVector;
typedef Vector EntranceVector;
typedef Vector ItemVector;
typedef Vector ItemInfoVector;
typedef Vector LocationVector;
typedef Vector RegionVector;
typedef Vector StringVector;

typedef struct Ast_v Ast_v;
typedef struct AstVector_v AstVector_v;
typedef struct Entrance_v Entrance_v;
typedef struct Item_v Item_v;
typedef struct ItemInfo_v ItemInfo_v;
typedef struct Location_v Location_v;
typedef struct Region_v Region_v;
typedef struct String_v String_v;

struct String_v {
    char const* data;
};

extern char hashKeyBuffer[0x60];

#endif
