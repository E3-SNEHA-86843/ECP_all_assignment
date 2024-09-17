#include <stdio.h>

// Function to count the number of '1' bits in a given number
int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1; // count the least significant bit
        n >>= 1; // right shift by 1 bit
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of '1' bits: %d\n", countOnes(num));
    return 0;
}
