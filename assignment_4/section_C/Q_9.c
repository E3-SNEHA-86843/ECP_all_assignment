#include <stdio.h>

// Function to perform addition
void add(int a, int b, int *result) {
    *result = a + b;
}

// Function to perform subtraction
void subtract(int a, int b, int *result) {
    *result = a - b;
}

// Function to perform multiplication
void multiply(int a, int b, int *result) {
    *result = a * b;
}

// Function to perform division
int divide(int a, int b, int *result) {
    if (b == 0) {
        return -1; // error: division by zero
    }
    *result = a / b;
    return 0; // success
}

int main() {
    int num1, num2, result;
    char operation;

    printf("Enter two numbers and an operation (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operation);

    switch (operation) {
        case '+':
            add(num1, num2, &result);
            printf("Result: %d\n", result);
            break;
        case '-':
            subtract(num1, num2, &result);
            printf("Result: %d\n", result);
            break;
        case '*':
            multiply(num1, num2, &result);
            printf("Result: %d\n", result);
            break;
        case '/':
            if (divide(num1, num2, &result) == -1) {
                printf("Error: Division by zero!\n");
            } else {
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }

    return 0;
}
