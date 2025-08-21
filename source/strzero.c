/* 
 *
 * strzero
 *  Set entire string to null
 *
 */

#include "../xstring.h"

void strzero(char* s) {
        while (*s) *s++=0;
}
