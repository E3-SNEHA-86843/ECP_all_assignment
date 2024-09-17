#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1; // base case: any number to the power of 0 is 1
    } else if (exponent > 0) {
        return base * power(base, exponent - 1); // recursive case: positive exponent
    } else {
        return 1 / power(base, -exponent); // recursive case: negative exponent
    }
}
int main() {
    double base;
    int exponent;
    printf("Enter a base: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    printf("%f to the power of %d is %.2f.\n", base, exponent, power(base, exponent));
    return 0;
}
