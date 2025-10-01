#pragma once
// The MIT License (MIT)
// Copyright (c) 2016 Peter Goldsborough
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stddef.h>
#include "ultra64.h"

/****************** DEFINTIIONS ******************/

#define HT_MINIMUM_CAPACITY 8
#define HT_LOAD_FACTOR 5
#define HT_MINIMUM_THRESHOLD (HT_MINIMUM_CAPACITY) * (HT_LOAD_FACTOR)

#define HT_GROWTH_FACTOR 2
#define HT_SHRINK_THRESHOLD ((double)1 / 4)

#define HT_ERROR -1
#define HT_SUCCESS 0

#define HT_UPDATED 1
#define HT_INSERTED 0

#define HT_NOT_FOUND 0
#define HT_FOUND 01

#define HT_INITIALIZER {0, 0, 0, 0, 0, NULL, NULL, NULL};

typedef int (*comparison_t)(void*, void*, size_t);
typedef size_t (*hash_t)(void*, size_t);

/****************** STRUCTURES ******************/

typedef struct HTNode {
	struct HTNode* next;
	void* key;
	void* value;

} HTNode;

typedef struct HashTable {
	size_t size;
	size_t threshold;
	size_t capacity;

	size_t key_size;
	size_t value_size;

	comparison_t compare;
	hash_t hash;

	HTNode** nodes;

} HashTable;

/****************** INTERFACE ******************/

/* Setup */
int ht_setup(HashTable* table,
						 size_t key_size,
						 size_t value_size,
						 size_t capacity);

int ht_copy(HashTable* first, HashTable* second);
int ht_move(HashTable* first, HashTable* second);
int ht_swap(HashTable* first, HashTable* second);

/* Destructor */
int ht_destroy(HashTable* table);

int ht_insert(HashTable* table, void* key, void* value);

int ht_contains(HashTable* table, void* key);
void* ht_lookup(HashTable* table, void* key);
const void* ht_const_lookup(const HashTable* table, void* key);

#define HT_LOOKUP_AS(type, table_pointer, key_pointer) \
	(*(type*)ht_lookup((table_pointer), (key_pointer)))

int ht_erase(HashTable* table, void* key);
int ht_clear(HashTable* table);

int ht_is_empty(HashTable* table);
bool ht_is_initialized(HashTable* table);

int ht_reserve(HashTable* table, size_t minimum_capacity);

void ht_iterate(HashTable* ht, void (*callback)(void* key, void* value));
void ht_free(void* key, void* value);

#endif /* HASHTABLE_H */

