/**
 * Apply Caesar cipher rotation (ROT-n) to a string in place.
 *
 * Each character is shifted by `d` position within its case (A-Z or a-z).
 * Non-alphabetic characters stay the same.
 *
 * @param s String to rotate (modified in place).
 * @param d Amount of rotation (can be either negative or positive).
 *
 * @note This function does not allocate any memory, the input string is
 *       modified.
 */

#include "../xstring.h"

void strrot(char* s, int d) {
        while (*s) {
                if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z')) {
                        char b = (*s >= 'A' && *s <= 'Z') ? 'A' : 'a';
                        *s = b + (((*s - b + d) % 26 + 26) % 26);
                }
                s++;
        }
}
