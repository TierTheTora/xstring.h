/**
 * Apply an XOR encryption/decryption to a string using a repeating key.
 *
 * Each character of the string is XORed in place with the corresponding
 * character of `key`, cycling through if `key` is shorter than `s`.
 * 
 * @param s   String to modify (modified in place).
 * @param key Key string (may not be empty).
 *
 * @note if `s` or `key` is NULL or if `key` is an empty string, the
 *       function will not do anything.
 */

#include "../xstring.h"
#include <stddef.h>

void strxor(char* s, const char* key) {
        if (!s || !key || !*key) return;
        size_t keylen = xstrlen(key);
        size_t i = 0;
        char* save = s;

        while (*save) {
                *save++ ^= key[i % keylen];
                i++;
        }
}
