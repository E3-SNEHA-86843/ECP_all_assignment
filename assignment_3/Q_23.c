#include <stdio.h>

void printPascalTriangle(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            int binomial_coefficient = 1;
            if (j > 0) {
                binomial_coefficient = binomial_coefficient * (i - j + 1) / j;
            }
            printf("%2d ", binomial_coefficient);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPascalTriangle(n);
    return 0;
}
