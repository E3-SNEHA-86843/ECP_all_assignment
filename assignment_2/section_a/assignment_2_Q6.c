#include<stdio.h>
void main(){

	int num,rev=0,rem,org;
	printf("Enter num:");
	scanf("%d",&num);
	org=num;
	while(num!=0){
	
		rem=num%10;
		rev= rev*10+rem;
		num/=10;
	}
	if(org==rev)
		printf("Palindrome : %d\n",org);
	else
		printf("Not palindrome!!\n");
	
}
