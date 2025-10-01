#ifndef R_THREAD_H
#define R_THREAD_H 1
#include "stddef.h"

extern size_t maxAllocated;

void Randomizer_ThreadEntry(void *arg);

#endif
