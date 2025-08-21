/* 
 *
 * strcrepl
 *  Replace search with rep in s
 *
 */

#include "../xstring.h"

char* strcrepl(char* s, const char search, const char rep) {
        char* save = s;
        while(*s) *s == search ? *s++ = rep : *s++;
        return save;
}
