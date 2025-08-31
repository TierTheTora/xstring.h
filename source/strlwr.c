/**
 * Convert a string to lowercase (in place).
 *
 * @param s String to convert to lowercase.
 *
 * @return Pointer to the string `s` (converted to lowercase).
 * 
 * @note Only ASCII characters A-Z are converted.
 */

#include "../xstring.h"

char* strlwr(char* s) {
        char* save = s;
        while (*s) {
                if (*s >= 'A' && *s <= 'Z') *s += 32;
                s++;
        }
        return save;
}
