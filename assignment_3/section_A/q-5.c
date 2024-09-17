//factorial=5*4*3*2*1=120 i/p=5
#include<stdio.h>
int main(){

	int num,fact=1,i=1;

	printf("Enter num:");
	scanf("%d",&num);

	while(i<=num){

		fact*=i;
		i++;
	}	
	while(num>0){
		printf("%d",num);
			if(num>1)
				printf("*");
		num--;


	}
	printf("=%d\n",fact);

	return 0;

}
