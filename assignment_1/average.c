#include<stdio.h>
void main(){

	int num1,num2,num3;

	printf("Enter three number : ");
	scanf("%d%d%d",&num1,&num2,&num3);

	int sum=num1+num2+num3;
	int average=sum/3;
	printf("average= %d\n",average);
}
