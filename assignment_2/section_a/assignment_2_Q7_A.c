#include<stdio.h>
int main(){

	int year,flag=0;

	printf("Enter a year:");
	scanf("%d",&year);

	if(year % 400 == 0){
	
		printf("Its a Leap year!!\n");
		flag=1;

	}else if(year % 100 == 0){

                printf("Not a leap year!!\n");
		flag=1;

	}else if(year % 4 == 0){
	
		printf("Leap year!!\n");
		flag=1;

	}else{
	
		printf("NOt a Leap year!!\n");
		flag=0;

	}

	if(flag==1)
		printf("Number of the days:366\n");
	else
		printf("Number of the days:365\n");

	return 0;
}
