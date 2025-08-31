/**
 * Check if a given string is a valid decimal number.
 * 
 * @param s Pointer to a null-terminated string to check.
 *
 * @return true if string is a valid decimal number (digits 0-9), otherwise
 *         false.
 *
 * @note Empty string returns false.
 */

#include "../xstring.h"

bool isstrnum(const char* s) {
        if (!s || !*s) return false;
        while (*s) {
                if (!(*s >= '0' && *s <= '9')) return false;
                s++;
        }
        return true;
}
