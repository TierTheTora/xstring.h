/* 
 *
 * nstracat
 *  append n strings of appends to s
 *
 */

#include "../xstring.h"

char* nstracat(int n, char* s, char** appends) {
        char* dest = s;
        while (*dest) dest++;
        char* append; 
        for (int i = 0; i < n; i++) {
                append = appends[i];
                while (*append) *dest++ = *append++;
        }
        return s;
}
