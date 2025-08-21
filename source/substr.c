/* 
 *
 * substr
 *  Get substring of s
 *
 */

#include "../xstring.h"
#include <stddef.h>

char* substr(char* s, size_t start, size_t len) {
        size_t slen = xstrlen(s);
        if (start >= slen) return NULL;
        if (start + len > slen) len = slen - start;
        char* out = malloc(len + 1);
        if (!out) return NULL;
        for (size_t i = 0; i < len; i++)
                out[i] = s[i + start];
        out[len] = 0;
        return out;
}
