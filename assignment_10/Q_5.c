#include <stdio.h>
#include <ctype.h>

// Function to check if a character is an alphabet and perform XOR operation
void checkAlphabet(char c) {
    if (isalpha(c)) {
        printf("%c is an alphabet.\n", c);

        // Perform bitwise XOR operation with 32
        char xorResult = c ^ 32;
        printf("Bitwise XOR of %c with 32: %c\n", c, xorResult);
    } else {
        printf("%c is not an alphabet.\n", c);
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    checkAlphabet(c);

    return 0;
}
