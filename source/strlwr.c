/* 
 *
 * strlwr
 *  Set string to all lowercase
 *
 */

#include "../xstring.h"

char* strlwr(char* s) {
        char* save = s;
        while (*s) {
                if (*s >= 'A' && *s <= 'Z') *s += 32;
                s++;
        }
        return save;
}
