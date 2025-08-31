/**
 * Extract a substring from a given string.
 *
 * Allocates a new null-terminated string containing `len` characters
 * starting from index `start` of the input string `s`.
 *
 * @param s     Input string.
 * @param start Index of the first character to be in the substring.
 * @param len   Number of characters to include.
 *
 * @return Pointer to a newly allocated substring (which must be freed by
 *         caller) or NULL if `start` is out of bounds or memory allocation
 *         failed.
 *
 * @note If `start + len` exceeds the length of `s`. the substring will only
 *       include characters up to the end of `s`.
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
