/* 
 *
 * trim
 *  Trim string
 *
 */

#include "../xstring.h"

char* trim(char* s, const char* cs) {
        if (!s) return s;
        while (*s && in_set(*s, cs)) s++;
        if (!*s) return s;
        char* save = s + xstrlen(s) - 1;
        while (save >= s && in_set(*save, cs)) *save-- = 0;
        return s;
}
