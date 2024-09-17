#include <stdio.h>

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;
    printf("Enter a base: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    printf("%f raised to the power of %d is %.2f\n", base, exponent, power(base, exponent));
    return 0;
}
