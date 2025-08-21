/* 
 *
 * strupr
 *  Set string to all uppercase
 *
 */

#include "../xstring.h"

char* strupr(char* s) {
        char* save = s;
        while (*s) {
                if (*s >= 'a' && *s <= 'z') *s -= 32;
                s++;
        }
        return save;
}
