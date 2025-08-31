/**
 * Check if a given string is a valid hexadecimal number.
 *
 * @param s Pointer to a null-terminated string to check.
 *
 * @return true if string is valid hexadecimal (digits 0-9, letters A-F/a-f),
 *         otherwise false.
 *
 * @note Empty string returns false.
 * @note Strings with the 0x or 0X prefix are not allowed.
 */

#include "../xstring.h"

bool ishex(const char* s) {
        if (!s || !*s) return false;
        while (*s) {
                char m = *s++;
                bool isdigit = (m >= '0' && m <= '9');
                bool isalpha = (m >= 'A' && m <= 'F') || (m >= 'a' && m <= 'f');
                if (!(isdigit || isalpha)) return false;
        }
        return true;
}
