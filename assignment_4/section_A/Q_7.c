#include <stdio.h>

void printFibonacciSeries(int numTerms) {
    int a = 0;
    int b = 1;
    printf("%d %d ", a, b);
    for (int i = 2; i < numTerms; i++) {
        int nextTerm = a + b;
        printf("%d ", nextTerm);
        a = b;
        b = nextTerm;
    }
    printf("\n");
}

int main() {
    int numTerms;
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    if (numTerms < 1) {
        printf("Please enter a positive integer.\n");
    } else if (numTerms == 1) {
        printf("0\n");
    } else {
        printFibonacciSeries(numTerms);
    }
    return 0;
}
