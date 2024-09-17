//a.using global variable
#include <stdio.h>

int *sum_global, *product_global; // global variables to store the result

void calculate_sum_product(int a, int b) {
    *sum_global = a + b; // calculate sum
    *product_global = a * b; // calculate product
}

int main() {
    int num1, num2, sum, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum_global = &sum; // assign address of sum to sum_global
    product_global = &product; // assign address of product to product_global
    calculate_sum_product(num1, num2);
    printf("Sum: %d, Product: %d\n", sum, product);
    return 0;
}
