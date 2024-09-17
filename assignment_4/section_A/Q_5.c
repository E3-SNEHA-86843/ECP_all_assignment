#include<stdio.h>

void printChar(char c, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
}
int main() {
    char c;
    int n;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Enter the number of times to print: ");
    scanf("%d", &n);
    printChar(c, n);
    return 0;
}
