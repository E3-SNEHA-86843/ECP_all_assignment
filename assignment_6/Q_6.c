#include <stdio.h>
#include <stdlib.h>

void my_itoa(int num, int base, char* str) {
    int i = 0;
    int sign = 0;

    // Check for negative sign
    if (num < 0) {
        sign = 1;
        num = -num;
    }

    // Convert the number to the desired base
    do {
        int remainder = num % base;
        if (remainder < 10) {
            str[i++] = '0' + remainder;
        } else {
            str[i++] = 'A' + (remainder - 10);
        }
        num /= base;
    } while (num > 0);

    // Add the negative sign if necessary
    if (sign) {
        str[i++] = '-';
    }

    // Reverse the string
    int j = 0;
    int k = i - 1;
    while (j < k) {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
        j++;
        k--;
    }

    // Null-terminate the string
    str[i] = '\0';
}

int main() {
    int num = 123;
    int base = 10;
    char str[20];
    my_itoa(num, base, str);
    printf("Number: %d, Base: %d, String: %s\n", num, base, str);

    num = -456;
    base = 16;
    my_itoa(num, base, str);
    printf("Number: %d, Base: %d, String: %s\n", num, base, str);

    return 0;
}
