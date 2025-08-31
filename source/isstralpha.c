/**
 * Check if a given string is alphabetic.
 *
 * @param s Pointer to a null-terminated string to check.
 *
 * @return true if string contains only letters A-Z/a-z.
 */

#include "../xstring.h"

bool isstralpha(const char* s) {
        while (*s) {
                char m = *s;
                if ((m < 'A' || (m > 'Z' && m < 'a') || m > 'z')) return false;
                ++s;
        }
        return true;
}
