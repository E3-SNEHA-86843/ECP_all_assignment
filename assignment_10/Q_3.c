#include <stdio.h>
#include <stdlib.h>

// Function to display a given number in binary format
void displayBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int i = 0;
    int binaryNum[32]; // array to store binary digits

    while (n) {
        binaryNum[i] = n & 1; // get the least significant bit using bitwise AND
        n >>= 1; // right shift by 1 bit
        i++;
    }

    // print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);
    printf("Binary representation of %d: ", num);
    displayBinary(num);
    printf("\n");
    return 0;
}
