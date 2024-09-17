#include <stdio.h>

double calculator(double operand1, char operator, double operand2) {
    double result;
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero!\n");
                result = 0;
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            result = 0;
            break;
    }
    return result;
}

int main() {
    double operand1, operand2;
    char operator;
    printf("Enter operand 1: ");
    scanf("%lf", &operand1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter operand 2: ");
    scanf("%lf", &operand2);
    printf("Result: %f\n", calculator(operand1, operator, operand2));
    return 0;
}
