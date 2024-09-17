#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // year is a leap year
            } else {
                return 0; // year is not a leap year
            }
        } else {
            return 1; // year is a leap year
        }
    } else {
        return 0; // year is not a leap year
    }
}
void printDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        printf("29\n"); // February has 29 days in a leap year
    } else {
        printf("%d\n", daysInMonth[month - 1]);
    }
}
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    int month;
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    printDaysInMonth(month, year);
    return 0;
}
