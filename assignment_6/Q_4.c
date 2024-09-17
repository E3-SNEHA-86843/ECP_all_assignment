#include <stdio.h>
#include <string.h>

char* remove_chars(char* str1, char* str2) {
    int i, j, k;
    for (i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        j = 0;
        while (str2[j] != '\0') {
            if (str2[j] == ch) {
                k = j;
                while (str2[k] != '\0') {
                    str2[k] = str2[k + 1];
                    k++;
                }
                j--; // decrement j to re-check the current position
            } else {
                j++;
            }
        }
    }
    return str2;
}

int main() {
    char str1[] = "aeiou";
    char str2[] = "Hello, World!";
    printf("Original string: %s\n", str2);
    remove_chars(str1, str2);
    printf("String after removing characters from '%s': %s\n", str1, str2);
    return 0;
}
