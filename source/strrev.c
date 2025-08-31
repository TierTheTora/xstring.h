/**
 * Reverse a given string (in place).
 *
 * @param s String to reverse.
 *
 * @return A pointer to `s` (reversed).
 */

#include "../xstring.h"

char* strrev(char* s) {
        size_t len = xstrlen(s);
        for (size_t i = 0; i < len / 2; ++i) {
                size_t j = len - 1 - i;
                if (i != j) {
                        s[i] ^= s[j];
                        s[j] ^= s[i];
                        s[i] ^= s[j];
                }
        }
        return s;
}
