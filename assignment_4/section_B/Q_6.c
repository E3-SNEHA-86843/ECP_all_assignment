#include <stdio.h>

void print_hexadecimal(int n) {
    if (n > 15) {
        print_hexadecimal(n / 16); // recursive call to handle the left shift
    }
    char hex_digit = (n % 16) < 10 ? (n % 16) + '0' : (n % 16) - 10 + 'A';
    printf("%c", hex_digit); // print the hexadecimal digit
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The hexadecimal representation of %d is: ", num);
    print_hexadecimal(num);
    printf("\n");
    return 0;
}
