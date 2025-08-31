/**
 * Case-insensitive string comparison.
 *
 * @param s1 String to be compared.
 * @param s2 Comparison string.
 *
 * @return 0 if `s1` is equal to `s2`, a negative value if `s1` is
 *         less than `s2` and a positive value if `s1` is greater
 *         than `s2`.
 */

#include "../xstring.h"
#include <ctype.h>

int strcmpi(const char* s1, const char* s2) {
        unsigned char c1, c2;
        while (*s1 && *s2) {
                c1 = (unsigned char)tolower((unsigned char)*s1);
                c2 = (unsigned char)tolower((unsigned char)*s2);
                if (c1 != c2) return c1 - c2;
                ++s1;
                ++s2;
        }
        return (unsigned char)tolower((unsigned char)*s1) -
               (unsigned char)tolower((unsigned char)*s2);
}
