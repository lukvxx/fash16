#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xmemtools.h"

char *fash16(const char *str) {

    int size = strlen(str);
    double hash = size;
    for (int i = 0; i < size; ++i) {
        if (hash <= ('z' - str[i])) {
            hash *= 'z' - str[i];
        } else {
            hash /= 'z' + str[i];
        }
    }
    
    /* 17 because 16 characters is max unsigned long long as hex */
    char *out = xmalloc(17);
    sprintf(out, "%llX", *(unsigned long long*) &hash);
    return out;

}

int main(__attribute__((unused)) int argc, char *argv[]) {

    if (argc < 2) {
        return 1;
    }

    char *tmp = fash16(argv[1]);
    puts(tmp);
    free(tmp);

    return 0;
}

