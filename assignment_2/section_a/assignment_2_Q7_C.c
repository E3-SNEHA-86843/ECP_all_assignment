#include<stdio.h>
int main(){

	int year;
    	int days;

	printf("Enter a year: ");
	scanf("%d", &year);

    	days = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 366 : 365;

    	printf("The year %d has %d days.\n", year, days);

    	return 0;
}
