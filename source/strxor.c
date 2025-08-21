/*
 *
 * strxor
 *  XOR two strings together
 *
 */

#include "../xstring.h"
#include <stddef.h>

void strxor(char* s, const char* key) {
        if (!s || !key || !*key) return;
        size_t keylen = xstrlen(key);
        size_t i = 0;
        char* save = s;

        while (*save) {
                *save++ ^= key[i % keylen];
                i++;
        }
}
