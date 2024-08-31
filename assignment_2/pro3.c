#include<stdio.h>
void main(){

	int number;
	printf("Enter number :");
	scanf("%d",&number);

	if(number>0)
		printf("Positive number!\n");
	else if(number==0)
		printf("Number is equal to 0!!\n");
	else
		printf("Negative number!\n");

}
