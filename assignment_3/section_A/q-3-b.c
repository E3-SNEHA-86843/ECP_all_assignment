//Reverse the number
#include<stdio.h>
int main(){

	int num,reverse_num=0;
	printf("Enter num: ");
	scanf("%d",&num);

	while(num>0){

		int digit=num%10;
		num=num/10;	
		printf("%d",digit);
	}
	printf("\n");
	
	return 0;

}
