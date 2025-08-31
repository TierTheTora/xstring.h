/**
 * Append multiple strings to a destination string.
 *
 * @param n   Number of strings to append.
 * @param s   Destination string (must have enough space to hold appended
 *            strings).
 * @param ... Variable number of pointers to null terminated strings to
 *            append.
 *
 * @return Pointer to the destination string `s`.
 *
 * @note The destination string `s` must have enough space allocated for the
 *       concatenated result, as this function does not do bounds checking.
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
