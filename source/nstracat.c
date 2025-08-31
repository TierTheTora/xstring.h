/**
 * Append multiple strings from an array to a destination string.
 *
 * @param n       Number of strings to append.
 * @param s       Destination string (must have enough space to hold appended
 *                strings).
 * @param appends Array of pointers to null-terminated strings to append.
 *
 * @return Pointer to the destination string `s`.
 *
 * @note The destination string `s` must have enough space allocated for the
 *       concatenated result, as this function does not do bounds checking.
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
        *dest = 0;
        return s;
}
