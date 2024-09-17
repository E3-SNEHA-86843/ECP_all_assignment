#include <stdio.h>
#include <string.h>

char* remove_char(char* str, char ch) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            j = i;
            while (str[j] != '\0') {
                str[j] = str[j + 1];
                j++;
            }
            i--; // decrement i to re-check the current position
        }
    }
    return str;
}

int main() {
    char str[] = "Hello, World!";
    char ch = ',';
    printf("Original string: %s\n", str);
    remove_char(str, ch);
    printf("String after removing '%c': %s\n", ch, str);
    return 0;
}
