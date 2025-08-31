/**
 * Add padding to the left side of a string.
 *
 * @param s String to add padding to.
 * @param w Width of string (including padding).
 * @param c Character to use as padding.
 *
 * @return Newly allocated string padded with width `w`, or a copy of `s` if
 *         `strlen(s) >= w`. Returns NULL if allocation failed.
 * 
 * @note The returned string must be freed by the caller.
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
