#include <stdio.h>
#include <string.h>

void intToRoman(int num, char* str) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* syb[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    int j = 0;

    while (num > 0) {
        if (num >= val[i]) {
            strcpy(str + j, syb[i]);
            j += strlen(syb[i]);
            num -= val[i];
        } else {
            i++;
        }
    }

    str[j] = '\0';
}

int main() {
    int num = 123;
    char str[20];
    intToRoman(num, str);
    printf("Number: %d, Roman: %s\n", num, str);

    num = 456;
    intToRoman(num, str);
    printf("Number: %d, Roman: %s\n", num, str);

    return 0;
}
