/* 
 *
 * strcmpi
 *  Case-insensitive string comparison
 *
 */

#include "../xstring.h"

int strcmpi(const char* s1, const char* s2) {
        while (*s1 && *s2) {
                char m1 = *s1;
                char m2 = *s2;
                if (m1 >= 'A' && m1 <= 'Z') m1 += 32;
                if (m2 >= 'A' && m2 <= 'Z') m2 += 32;
                if (m1 != m2)
                        return (unsigned char)m1 - (unsigned char)m2;
                ++s1;
                ++s2;
        }
        return 0;
}
