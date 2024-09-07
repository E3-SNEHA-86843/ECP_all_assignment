#include <stdio.h>

int main() {
    int year, month, days;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Invalid month. Please enter a month between 1 and 12.\n");
            return 1;
    }

    printf("The month %d of %d has %d days.\n", month, year, days);

    return 0;
}
