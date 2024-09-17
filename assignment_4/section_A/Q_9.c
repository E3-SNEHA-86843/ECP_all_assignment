#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, so it's not prime
        }
    }
    return 1; // num is prime
}
void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }

    int start, end;
    printf("Enter a range (start end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers in the range [%d, %d]: ", start, end);
    printPrimesInRange(start, end);
    return 0;
}
