/* 
 *
 * ishex
 *  Is string valid hex
 *
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
