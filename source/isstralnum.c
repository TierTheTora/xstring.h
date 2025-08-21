/* 
 *
 * isstralnum
 *  Is string alphanumeric
 *
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
