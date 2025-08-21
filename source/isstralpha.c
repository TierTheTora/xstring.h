/* 
 *
 * isstralpha
 *  Is string alphabetic
 *
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
