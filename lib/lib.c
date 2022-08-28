#include "lib.h"

int split(char *str, char delimiter, char ***dest) {
    int count = 1;
    int token_len = 1;
    int i = 0;
    char *p;
    char *t;

    p = str;
    while (*p != '\0') {
        if (*p == delimiter) count++;
        p++;
    }

    *dest = alloc(PCHAR, count);
    if (*dest == 0) return 1;
    p = str;
    while (*p != '\0') {
        if (*p == delimiter) {
            (*dest)[i] = alloc(CHAR, token_len);
            if ((*dest)[i] == 0) return 1;
            token_len = 0;
            i++;
        }
        p++;
        token_len++;
    }
    (*dest)[i] = alloc(CHAR, token_len);
    if ((*dest)[i] == 0) return 1;
    i = 0;
    p = str;
    t = ((*dest)[i]);
    while (*p != '\0') {
        if (*p != delimiter && *p != '\0') {
            *t = *p;
            t++;
        } else {
            *t = '\0';
            i++;
            t = ((*dest)[i]);
        }
        p++;
    }

    return count;
}
