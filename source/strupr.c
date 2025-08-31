/**
 * Convert a string to uppercase (in place).
 *
 * @param s String to convert to uppercase.
 *
 * @return Pointer to the string `s` (converted to uppercase).
 * 
 * @note Only ASCII characters A-Z are converted.
 */

#include "../xstring.h"

char* strupr(char* s) {
        char* save = s;
        while (*s) {
                if (*s >= 'a' && *s <= 'z') *s -= 32;
                s++;
        }
        return save;
}
