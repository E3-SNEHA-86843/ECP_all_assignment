#include<stdio.h>
void main(){

	int num1,num2,max;
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);

	max=((num1>num2)?num1:num2);
	printf("MAX=%d\n",max);
}
