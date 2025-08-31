/**
 * Replace letters in a string.
 *
 * @param s      String to replace characters in.
 * @param search Character to search for.
 * @param rep    Character to replace with.
 *
 * @return A pointer to a string with all occurances of `search` replaced
 *         with `rep`.
 */

#include "../xstring.h"

char* strcrepl(char* s, const char search, const char rep) {
        char* save = s;
        while(*s) *s == search ? *s++ = rep : *s++;
        return save;
}
