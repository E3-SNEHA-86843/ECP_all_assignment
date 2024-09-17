#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char* findAndReplace(char* source, char* find, char* replace) {
    char* result = malloc(strlen(source) + 1);
    strcpy(result, source);

    char* pos = strstr(result, find);
    while (pos != NULL) {
        int findLen = strlen(find);
        int replaceLen = strlen(replace);

        memmove(pos + replaceLen, pos + findLen, strlen(pos + findLen) + 1);
        strncpy(pos, replace, replaceLen);

        pos = strstr(pos, find);
    }

    return result;
}

int main() {
    char source[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    char* result = findAndReplace(source, find, replace);
    printf("%s\n", result);

    free(result);

    return 0;
}
