#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n; // base case: F(0) = 0, F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case: F(n) = F(n-1) + F(n-2)
    }
}
void print_fibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int main() {
    int num_terms;
    printf("Enter the number of terms: ");
    scanf("%d", &num_terms);
    printf("The first %d terms of the Fibonacci series are: ", num_terms);
    print_fibonacci(num_terms);
    return 0;
}
