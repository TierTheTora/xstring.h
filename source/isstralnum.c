/**
 * Check if a given string is alphanumeric.
 *
 * @param s Pointer to a null-terminated string to check.
 *
 * @return true if string contains either letters A-Z/a-z or digits 0-9.
 */

#include "../xstring.h"

bool isstralnum(const char* s) {
        while (*s) {
                char m = *s;
                if ((m < 'A' || (m > 'Z' && m < 'a') || m > 'z')
                &&  (m < '0' || m > '9')) return false;
                ++s;
        }
        return true;
}
