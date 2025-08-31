#ifndef XSTRING_H
#define XSTRING_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <ctype.h>

typedef _Bool bool;
#define true 1
#define false 0

__attribute__((unused))
static size_t xstrlen(const char* s) {
        const char* p = s;
        while (*p) p++;
        return p - s;
}

__attribute__((unused))
static bool in_set(char c, const char* cs) {
        if (!cs) return isspace((unsigned char)c);
        for (; *cs; cs++) 
                if (c == *cs) return true;
        return false;
}

char* strrev(char*);

char* strupr(char*);

char* strlwr(char*);

int strcmpi(const char*, const char*);

bool isstrnum(const char*);

bool isstralpha(const char*);

bool isstralnum(const char*);

bool ishex(const char*);

char* trim(char*, const char*);

char* triml(char*, const char*);

char* trimr(char*, const char*);

char* strpadl(char*, size_t, char);

char* strpadr(char*, size_t, char);

char* nstrcat(int, char*, ...);

char* nstracat(int, char*, char**);

void strzero(char*);

char* strcrepl(char*, const char, const char);

char* substr(char*, size_t, size_t);

void strxor(char*, const char*);

void strrot(char*, int);

#endif // XSTRING_H
