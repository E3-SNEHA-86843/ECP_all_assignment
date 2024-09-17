#include <stdio.h>
#include <string.h>

const char* ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const char* teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const char* tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const char* thousands[] = {"", "thousand", "million", "billion"};

void printThreeDigitNumber(int num);
void printNumberInWords(int num);

void printThreeDigitNumber(int num) {
    int hundreds = num / 100;
    int rest = num % 100;

    if (hundreds > 0) {
        printf("%s hundred", ones[hundreds]);
        if (rest > 0) {
            printf(" and ");
        }
    }

    if (rest >= 20) {
        printf("%s", tens[rest / 10]);
        if (rest % 10 > 0) {
            printf("-%s", ones[rest % 10]);
        }
    } else if (rest >= 10) {
        printf("%s", teens[rest - 10]);
    } else {
        printf("%s", ones[rest]);
    }
printf("\n");
}

void printNumberInWords(int num) {
    int i = 0;
    while (num > 0) {
        if (num % 1000 != 0) {
            printThreeDigitNumber(num % 1000);
            if (i > 0) {
                printf(" %s", thousands[i]);
            }
        }
        num /= 1000;
        i++;
    }
    
}

int main() {
    int num = 123456;
    printNumberInWords(num);
   
    num = 789;
    printNumberInWords(num);

    return 0;
}
