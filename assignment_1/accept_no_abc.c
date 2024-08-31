#include<stdio.h>
void main(){

	int num1,num2;

	printf("Enter two number: ");
	scanf("%d%d",&num1,&num2);

	printf("Sum : %d\n",num1+num2);

	//ternary operator: (codin)?true:false;
	(num1==num2)?printf("Both are equal\n"):(num1>num2?printf("Difference: %d\n",num1-num2):printf("Difference: %d\n",num2-num1));
	
	printf("Product: %d\n",num1*num2);
}
