//b. without using global variable
#include <stdio.h>

void calculate_sum_product(int a, int b, int *sum, int *product) {
    *sum = a + b; // calculate sum
    *product = a * b; // calculate product
}

int main() {
    int num1, num2, sum, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    calculate_sum_product(num1, num2, &sum, &product);
    printf("Sum: %d, Product: %d\n", sum, product);
    return 0;
}
