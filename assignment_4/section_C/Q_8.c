#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a; // store the value of a in temp
    *a = *b; // assign the value of b to a
    *b = temp; // assign the value of temp (original a) to b
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2); // pass the addresses of num1 and num2 to swap
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
