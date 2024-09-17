#include <stdio.h>

// Function to check and set even parity
unsigned char setEvenParity(unsigned char byte) {
    // Calculate the parity of the byte
    int parity = 0;
    for (int i = 0; i < 7; i++) {
        parity ^= (byte >> i) & 1;
    }

    // If parity is odd, set the MSB bit
    if (parity) {
        byte |= 0x80; // Set MSB bit
    }

    return byte;
}

int main() {
    unsigned char byte;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &byte);

    printf("Original byte: 0x%02x\n", byte);

    unsigned char evenByte = setEvenParity(byte);
    printf("Byte with even parity: 0x%02x\n", evenByte);

    return 0;
}
