//palindrom
#include<stdio.h>
int main(){

	int num,digit,reverse_num=0;
	printf("Enter num: ");
	scanf("%d",&num);

	int original_num=num;
	while(num>0){

		digit=num%10;
		reverse_num=reverse_num * 10 + digit;
		num=num/10;	
		//printf("%d",digit);
	
	}
	if(original_num==reverse_num)
		printf("%d is palindrom!\n",original_num);
	else
		printf("%d is not palindrom!\n",original_num);
	return 0;

}
