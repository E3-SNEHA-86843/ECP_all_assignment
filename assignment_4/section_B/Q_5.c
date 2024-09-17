#include <stdio.h>

void print_binary(int n) {
    if (n > 1) {
        print_binary(n / 2); // recursive call to handle the left shift
    }
    printf("%d", n % 2); // print the least significant bit
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The binary representation of %d is: ", num);
    print_binary(num);
    printf("\n");
    return 0;
}
