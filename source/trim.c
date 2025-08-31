/**
 * Trim characters from both ends of a given string.
 *
 * Removes all characters from start and end of the string `s` that are
 * present in the character set `cs`. If `cs` is NULL, all whitespace
 * characters (as determined by `isspace()`), are trimmed. The trimming
 * is done in place, and the string is modified directly.
 *
 * @param s  Null-terminated string to trim. Can be modified in place.
 * @param cs Null-terminated string containing characters to remove from both
 *           ends of `s`.
 *
 * @return Pointer to the trimmed string `s` (may point inside the original
 *         buffer), or NULL if `s` is NULL.
 *
 * @note The function does not allocate any memory, the original string
 *       buffer is reused.
 */

#include "../xstring.h"

char* trim(char* s, const char* cs) {
        if (!s) return s;
        while (*s && in_set(*s, cs)) s++;
        if (!*s) return s;
        char* save = s + xstrlen(s) - 1;
        while (save >= s && in_set(*save, cs)) *save-- = 0;
        return s;
}
