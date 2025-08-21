/* 
 *
 * trimr
 *  Trim right side of string
 *
 */

#include "../xstring.h"

char* trimr(char* s, const char* cs) {
        if (!s) return s;
        char* save = s + xstrlen(s) - 1;
        while (save >= s && in_set(*save, cs)) *save-- = 0;
        return s;
}
