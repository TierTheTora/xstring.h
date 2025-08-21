/* 
 *
 * triml
 *  Trim left side of string
 *
 */

#include "../xstring.h"

char* triml(char* s, const char* cs) {
        if (!s) return s;
        while (*s && in_set(*s, cs)) s++;
        return s;
}
