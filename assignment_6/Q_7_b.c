#include <stdio.h>
#include <string.h>

int romanToDec(char* str) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* syb[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    int num = 0;
    int j = 0;

    while (str[j] != '\0') {
        int k;
        for (k = 0; k < 13; k++) {
            if (strncmp(str + j, syb[k], strlen(syb[k])) == 0) {
                num += val[k];
                j += strlen(syb[k]);
                break;
            }
        }
    }

    return num;
}

int main() {
    char str[] = "MCCXXIII";
    int num = romanToDec(str);
    printf("Roman: %s, Number: %d\n", str, num);

    strcpy(str, "CDLVI");
    num = romanToDec(str);
    printf("Roman: %s, Number: %d\n", str, num);

    return 0;
}
