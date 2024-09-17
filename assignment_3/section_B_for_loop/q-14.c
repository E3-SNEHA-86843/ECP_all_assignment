#include<stdio.h>
int main(){

	int num,flag=0;
	printf("Enter number:");
	scanf("%d",&num);

	if(num==0||num==1)
		flag=1;

	for(int i=2;i<=num/2;i++){	
		 if(num%i==0)
			flag=1;
    	}
	
	if(flag==0)
		printf(" is a Prime!!\n");
	else 
		printf("NOt a Prime!!\n");

	return 0;

}
