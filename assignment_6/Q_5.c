#include <stdio.h>

int my_atoi(const char* str) {
    int num = 0;
    int sign = 1;
    int i = 0;

    // Check for negative sign
    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    // Iterate through the string, converting each digit to its numeric value
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            break;
        }
        i++;
    }

    return sign * num;
}

int main() {
    char* str = "123";
    printf("String: %s\n", str);
    int num = my_atoi(str);
    printf("Numeric equivalent: %d\n", num);

    str = "-456";  // Now this is allowed
    printf("String: %s\n", str);
    num = my_atoi(str);
    printf("Numeric equivalent: %d\n", num);

    return 0;
}
