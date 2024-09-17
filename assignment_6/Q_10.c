#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int my_strlen(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

char* my_strcpy(char* dest, char* src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

char* my_strcat(char* dest, char* src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

char* findAndReplace(char* source, char* find, char* replace) {
    int sourceLen = my_strlen(source);
    int findLen = my_strlen(find);
    int replaceLen = my_strlen(replace);

    int count = 0;
    char* pos = source;
    while (*pos != '\0') {
        if (strncmp(pos, find, findLen) == 0) {
            count++;
        }
        pos++;
    }

    char* result = malloc(sourceLen + count * (replaceLen - findLen) + 1);
    char* resultPos = result;

    pos = source;
    while (*pos != '\0') {
        if (strncmp(pos, find, findLen) == 0) {
            my_strcpy(resultPos, replace);
            resultPos += replaceLen;
            pos += findLen;
        } else {
            *resultPos = *pos;
            resultPos++;
            pos++;
        }
    }
    *resultPos = '\0';

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
