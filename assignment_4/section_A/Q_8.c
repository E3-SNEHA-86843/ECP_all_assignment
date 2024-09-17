#include <stdio.h>

int nextFibonacciTerm(int* a, int* b) {
    int nextTerm = *a + *b;
    *a = *b;
    *b = nextTerm;
    return nextTerm;
}

int main() {
    int a = 0;
    int b = 1;
    int numTerms;
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    if (numTerms < 1) {
        printf("Please enter a positive integer.\n");
    } else if (numTerms == 1) {
        printf("0\n");
    } else {
        printf("%d %d ", a, b);
        for (int i = 2; i < numTerms; i++) {
            printf("%d ", nextFibonacciTerm(&a, &b));
        }
        printf("\n");
    }
    return 0;
}
