/**
 * Clear an entire string by setting all characters to '\0'.
 *
 * @param s String to clear.
 */

#include "../xstring.h"

void strzero(char* s) {
        while (*s) *s++=0;
}
