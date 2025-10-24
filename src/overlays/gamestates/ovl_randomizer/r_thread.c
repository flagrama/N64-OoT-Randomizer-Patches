#include "r_thread.h"

#include "fault.h"
#include "printf.h"
#include "randomizer_play.h"
#include "randomizer_state.h"

#include "r_containers.h"
#include "r_item_info.h"
#include "r_fill.h"
#include "r_location.h"
#include "r_region.h"
#include "r_world.h"

#include "translation.h"
#include "save.h"
#include "zelda_arena.h"
#include "libc64/qrand.h"

char hashKeyBuffer[0x60] = { };

void Randomizer_PrintUsedMemory() {
    u32 max = 0, free = 0, allocated = 0;
    u32* maxPtr = &max;
    u32* freePtr = &free;
    u32* allocatedPtr = &allocated;
    ZeldaArena_GetSizes(maxPtr, freePtr, allocatedPtr);
    PRINTF(VT_BGCOL(RED) "Remaining Memory: %d -- %d maxFree %d allocated" VT_RST "\n", free, max, allocated);
}

void PlaceItems(GameState* gameState, World* world) {
    RandomizerState* this = (RandomizerState*)gameState;

    DistributeItemsRestrictive(&this->state, world);
}

void Randomizer_Generate(GameState *gameState) {
    RandomizerState* this = (RandomizerState*)gameState;

    ItemInfo_InitAll();
    World world = World_BuildWorldGraph();
    World_SetDungeonNames(&world);

    PlaceItems(&this->state, &world);

    if (this->mode == RM_ERROR) {
        ItemInfo_DestroyAll();
        World_Destroy(&world);
        return;
    }

    VECTOR_FOR_EACH(&world.regions, regions) {
        Region_v regionContainer = ITERATOR_GET_AS(Region_v, &regions);
        VECTOR_FOR_EACH(&regionContainer.data->locations, locations) {
            Location_v locationContainer = ITERATOR_GET_AS(Location_v, &locations);
            if (locationContainer.data == NULL) {
                continue;
            }
            PRINTF("Location: %s -- ", locationContainer.data->name);
            if (locationContainer.data->item.info != NULL) {
                if (locationContainer.data->type == CHEST_LOCATION) {
                    /* Actually "place" the items */
                    RandomizerChestID index = Randomizer_GetRandomizedChestContents(locationContainer.data->scene, locationContainer.data->flag);
                    gSaveContext.save.randomizer.chestContents[index] = locationContainer.data->item.info->giIndex;
                }
                PRINTF("Placed Item: %s\n", locationContainer.data->item.info->name);
            }
        }
    }

    gSaveContext.save.randomizer.generated = true;

    ItemInfo_DestroyAll();
    World_Destroy(&world);
    Randomizer_PrintUsedMemory();
}

void Randomizer_ThreadEntry(void *arg) {
    RandomizerState* randomizer = arg;

    PRINTF(VT_CLS);
    unsigned retries = 0;
    while (retries++ < 10) {
        ZeldaArena_Cleanup();

        PRINTF("ZELDA ALLOC SIZE=%x\n", THA_GetRemaining(&randomizer->state.tha));
        size_t zAllocSize = THA_GetRemaining(&randomizer->state.tha);
        size_t zAlloc = (uintptr_t)GAME_STATE_ALLOC(&randomizer->state, zAllocSize, __FILE_NAME__, __LINE__);
        size_t zAllocAligned = (zAlloc + 8) & ~0xF;
        ZeldaArena_Init((void*)zAllocAligned, zAllocSize - (zAllocAligned - zAlloc));
        PRINTF(T("ゼルダヒープ %08x-%08x\n", "Zelda Heap %08x-%08x\n"), zAllocAligned,
               (u8*)zAllocAligned + zAllocSize - (s32)(zAllocAligned - zAlloc));

        Rand_Seed(gSaveContext.save.randomizer.seed + retries);
        OSTime start = osGetTime();
        Randomizer_Generate(&randomizer->state);
        OSTime final = osGetTime() - start;
        OSTime finalSec = OS_CYCLES_TO_USEC(final) / 1000000;
        OSTime finalMsecPart = (OS_CYCLES_TO_USEC(final) / 1000) - (finalSec) * 1000;
        if (randomizer->mode == RM_ERROR) {
            PRINTF(VT_COL(YELLOW, WHITE) "Generation failed in %llu.%llumsec" VT_RST "\n", finalSec, finalMsecPart);
            PRINTF("Retrying...\n");
            THA_Reset(&randomizer->state.tha);
        } else {
            PRINTF(VT_COL(GREEN, WHITE) "Generated in %llu.%llumsec" VT_RST "\n", finalSec, finalMsecPart);
            break;
        }
    }

#ifdef DEBUG_FEATURES_MEM
    PRINTF("Max allocated: %u\n", ZeldaArena_MaxAllocated());
#endif
    ZeldaArena_Cleanup();

    if (randomizer->mode == RM_ERROR) {
        randomizer->mode = RM_FINISHED_ERROR;
    } else {
        randomizer->mode = RM_FINISHING;
    }
}
