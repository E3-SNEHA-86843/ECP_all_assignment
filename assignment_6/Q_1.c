#include <stdio.h>
#include <string.h>

int main() {
    // a. strlen()
    char str1[] = "Hello, World!";
    int length = strlen(str1);
    printf("Length of '%s' is %d\n", str1, length);

    // b. strcpy()
    char str2[20];
    strcpy(str2, "Copy of ");
    strcat(str2, str1);
    printf("Copied string: %s\n", str2);

    // c. strcat()
    char str3[20] = "Hello, ";
    strcat(str3, "Universe!");
    printf("Concatenated string: %s\n", str3);

    // d. strcmp()
    char str4[] = "Hello";
    char str5[] = "hello";
    int result = strcmp(str4, str5);
    if (result == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // e. stricmp() (stricmp is not a standard C library function, use strcasecmp instead of this)
    result = strcasecmp(str4, str5);
    if (result == 0) {
        printf("Strings are equal (case-insensitive)\n");
    } else {
        printf("Strings are not equal (case-insensitive)\n");
    }

    // f. strrev() ( strrev is not a standard C library function)
    char str6[] = "Hello";
    char reversed[20];
    int i, j;
    for (i = 0, j = strlen(str6) - 1; i < strlen(str6); i++, j--) {
        reversed[i] = str6[j];
    }
    reversed[i] = '\0';
    printf("Reversed string: %s\n", reversed);

    // g. strchr()
    char str7[] = "Hello, World!";
    char* found = strchr(str7, ',');
    if (found != NULL) {
        printf("Found character ',' at position %ld\n", found - str7);
    } else {
        printf("Character ',' not found\n");
    }

    // h. strstr()
    char str8[] = "Hello, World!";
    char* substr = strstr(str8, "World");
    if (substr != NULL) {
        printf("Found substring 'World' at position %ld\n", substr - str8);
    } else {
        printf("Substring 'World' not found\n");
    }

    // i. strncpy()
    char str9[20];
    strncpy(str9, str1, 5);
    str9[5] = '\0';
    printf("Copied 5 characters: %s\n", str9);

    // j. strncat()
    char str10[20] = "Hello, ";
    strncat(str10, str1, 5);
    printf("Concatenated 5 characters: %s\n", str10);

    // k. strncmp()
    char str11[] = "Hello";
    char str12[] = "Hello, World!";
    result = strncmp(str11, str12, 5);
    if (result == 0) {
        printf("Strings are equal (first 5 characters)\n");
    } else {
        printf("Strings are not equal (first 5 characters)\n");
    }

    // l. strtok()
    char str13[] = "Hello, World!, C, Programming";
    char* token = strtok(str13, ", ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ", ");
    }

    return 0;
}
