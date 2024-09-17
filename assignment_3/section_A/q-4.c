//factorial=1*2*3*4*5=120 i/p=5
#include<stdio.h>
int main(){

	int num=5,fact=1,i=1;
	while(i<=num){

		fact*=i;
		i++;
	}
	i=1;
	while(i<=num){
		printf("%d",i);
			if(i<num)
				printf("*");
		i++;


	}
	printf("=%d\n",fact);

	return 0;

}
