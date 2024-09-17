#include <stdio.h>
#include <string.h>
#include<ctype.h>

// a. size_t strlen(const char* str);
size_t my_strlen(const char* str) {
    size_t length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// b. char* strcpy(char *dest, const char *src);
char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

// c. char* strcat(char *dest, const char *src);
char* my_strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

// d. int strcmp(const char *str1, const char *str2);
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return 1;
    }
    return 0;
}

// e. int stricmp(const char *str1, const char *str2);
int my_stricmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (tolower(*str1) < tolower(*str2)) {
            return -1;
        } else if (tolower(*str1) > tolower(*str2)) {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return 1;
    }
    return 0;
}

// f. char* strrev(char* str);
char* my_strrev(char* str) {
    int length = my_strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}

// g. char* strchr(const char *str, int ch);
char* my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

// h. char* strstr(const char *str, const char *substr);
char* my_strstr(const char *str, const char *substr) {
    int substr_length = my_strlen(substr);
    while (*str != '\0') {
        int i;
        for (i = 0; i < substr_length; i++) {
            if (*(str + i) != *(substr + i)) {
                break;
            }
        }
        if (i == substr_length) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str1[20] = "Hello, World!";
    char str2[20] = "World";
    char str3[20] = "Hello";
    char str4[20] = "hello";

    printf("Length of '%s' is %zu\n", str1, my_strlen(str1));

    char dest[20];
    my_strcpy(dest, str1);
    printf("Copied string: %s\n", dest);

    my_strcat(dest, str2);
    printf("Concatenated string: %s\n", dest);

    int result = my_strcmp(str3, str4);
    if (result == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    result = my_stricmp(str3, str4);
    if (result == 0) {
        printf("Strings are equal (case-insensitive)\n");
    } else {
        printf("Strings are not equal (case-insensitive)\n");
    }

    char reversed[20];
    my_strcpy(reversed, str1);
    my_strrev(reversed);
    printf("Reversed string: %s\n", reversed);

    char* found = my_strchr(str1, ',');
    if (found != NULL) {
        printf("Found character ',' at position %ld\n", found - str1);
    } else {
        printf("Character ',' not found\n");
    }

    char* substr = my_strstr(str1, str2);
    if (substr != NULL) {
        printf("Found substring '%s' at position %ld\n", str2, substr - str1);
    } else {
        printf("Substring '%s' not found\n", str2);
    }

    return 0;
}
