#include <stdio.h>

int errorFlag = 0; // global error flag

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
                errorFlag = 1; // set error flag
                result = 0;
            }
            break;
        default:
            errorFlag = 1; // set error flag
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
    double result = calculator(operand1, operator, operand2);
    if (errorFlag) {
        printf("Error: Invalid operation!\n");
    } else {
        printf("Result: %f\n", result);
    }
    return 0;
}
