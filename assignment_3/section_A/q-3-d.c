//Armstrong no
#include<stdio.h>
int main(){

	int num,digit,reverse_num=0,sum=0;
	printf("Enter num: ");
	scanf("%d",&num);

	int original_num=num;
	while(num>0){

		digit=num%10;
		sum+=digit*digit*digit;
		num=num/10;	
		//printf("%d",digit);
	
	}
	if(original_num==sum)
		printf("%d is a armstrong number!\n",original_num);
	else
		printf("%d is not a armstrong number!\n",original_num);
	return 0;

}
