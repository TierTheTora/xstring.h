/* 
 *
 * nstrcat
 *  Append n strings to s
 *
 */

#include "../xstring.h"
#include <stdarg.h>

char* nstrcat(int n, char* s, ...) {
        va_list args;
        va_start(args, s);
        char* dest = s;
        while (*dest) dest++;
        for (int i = 0; i < n; i++) {
                const char* append = va_arg(args, const char*);
                while (*append) *dest++ = *append++;
        }
        va_end(args);
        return s;
}
