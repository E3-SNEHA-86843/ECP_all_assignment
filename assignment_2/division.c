//If-else
#include<stdio.h>
void main(){

	int num1,num2;
	printf("Enter value for num1,num2 :");
	scanf("%d%d",&num1,&num2);

	if(num2!=0){
	
		printf("Division=%d\n",num1/num2);
	}else{
	
		printf("Error:Divide by zero\n");
	}
}
