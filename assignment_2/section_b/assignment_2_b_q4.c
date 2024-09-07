#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    int t = (day + ((13 * (month + 1)) / 5) + year + (year / 4) - (year / 100) + (year / 400)) % 7;

    char* dayOfweek;

    switch (t) {
        case 0:
            dayOfweek = "Saturday";            
            break;
        case 1:
            dayOfweek = "Sunday";
            break;
        case 2:
            dayOfweek = "Monday";
            break;
        case 3:
            dayOfweek = "Tuesday";
            break;
        case 4:
            dayOfweek = "Wednesday";
            break;
        case 5:
            dayOfweek = "Thursday";
            break;
        case 6:
            dayOfweek = "Friday";
            break;
        default:
            printf("Invalid date.\n");
            return 1;
    }

    printf("The day of the week is %s.\n", dayOfweek);

    return 0;
}
