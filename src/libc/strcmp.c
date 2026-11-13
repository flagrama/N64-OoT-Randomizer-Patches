#include "string.h"

int strcmp(const char* s, const char* t) {
    while (*s == *t) {
        if (*s == '\0') {
            return 0;
        }
        s++;
        t++;
    }

    return *s - *t;
}
