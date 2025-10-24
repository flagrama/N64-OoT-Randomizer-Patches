#ifndef R_AST_H
#define R_AST_H 1
#include "r_containers.h"
#include "r_search.h"
#include "item.h"
#include "save.h"

typedef struct Location Location;
typedef struct Entrance Entrance;
typedef struct Ast Ast;

extern bool initialIteration;

struct Ast {
    enum {
        AST_END,
        AST_AND,
        AST_OR,
        AST_GROUP_OPEN,
        AST_GROUP_CLOSE,
        AST_CAN_REACH,
        AST_IS_CHILD,
        AST_IS_ADULT,
        AST_NAME,       // item rule
        AST_NAME_NOT,       // item rule
        AST_AT,
        AST_HAS_COUNT,
        AST_HAS,
        AST_CAN_BLAST_OR_SMASH,
        AST_CAN_PLAY,
        AST_CAN_TIME_TRAVEL,
        AST_CAN_USE,
        AST_CAN_LEAVE_FOREST,
        AST_CAN_MAKE_RAINBOW_BRIDGE,
    } tag;
    union {
        struct AST_END { int null; int null2; } AST_END;
        struct AST_AND { int null; } AST_AND;
        struct AST_OR { int null; } AST_OR;
        struct AST_GROUP_OPEN { int null; } AST_GROUP_OPEN;
        struct AST_GROUP_CLOSE { int null; } AST_GROUP_CLOSE;
        struct AST_CAN_REACH { RegionEnum region; LinkAge age; } AST_CAN_REACH;
        struct AST_IS_CHILD { int null; } AST_IS_CHILD;
        struct AST_IS_ADULT { int null; } AST_IS_ADULT;
        struct AST_NAME { const char* name; } AST_NAME;
        struct AST_NAME_NOT { const char* name; } AST_NAME_NOT;
        struct AST_AT { RegionEnum region; Ast* subRule; } AST_AT;
        struct AST_HAS_COUNT { ItemID item; unsigned count; } AST_HAS_COUNT;
        struct AST_HAS { ItemID item; } AST_HAS;
        struct AST_CAN_BLAST_OR_SMASH { int null; } AST_CAN_BLAST_OR_SMASH;
        struct AST_CAN_PLAY { ItemID song; } AST_CAN_PLAY;
        struct AST_CAN_TIME_TRAVEL { int null; } AST_CAN_TIME_TRAVEL;
        struct AST_CAN_USE { ItemID item; } AST_CAN_USE;
        struct AST_CAN_LEAVE_FOREST { int null; } AST_CAN_LEAVE_FOREST;
        struct AST_CAN_MAKE_RAINBOW_BRIDGE { int null; } AST_CAN_MAKE_RAINBOW_BRIDGE;
    } data;
};

struct Ast_v {
    Ast* data;
};

struct AstVector_v {
    AstVector* data;
};

Ast *Ast_Init(Ast ast);
bool Ast_Eval_Entrance(Ast **ptr, Search* search, Entrance spot, LinkAge age);
bool Ast_Eval_Location(Ast **ptr, Search* search, Location spot, LinkAge age);
bool Ast_Eval_Item(Location location, Item item);
void Ast_Free(Ast *ptr);

#define AST_NEW(tag, ...) \
Ast_Init((Ast){tag, {.tag=(struct tag){__VA_ARGS__}}})

#endif
