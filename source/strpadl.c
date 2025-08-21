/* 
 *
 * strpadl
 *  Add padding to left side of string
 *
 */

#include "../xstring.h"
#include <stddef.h>

char* strpadl(char* s, size_t w, char c) {
        size_t len = xstrlen(s);
        if (len >= w) {
                char* copy = malloc(len+1);
                if (!copy) return NULL;
                for (size_t i = 0; i <= len; ++i)
                        copy[i] = s[i];
                return copy;
        }
        size_t pad = w - len;
        char* out = malloc(w + 1);
        if (!out) return NULL;

        for (size_t i = 0; i < w; ++i)
                out[i] = c;
        for (size_t i = 0; i <= len; ++i)
                out[pad+i] = s[i];
        return out;
}
