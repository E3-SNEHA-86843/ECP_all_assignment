#include<stdio.h>
int main(){
	int num,fact=1;
	printf("Enter value of num:");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
		fact*=i;
	printf("factorial=%-4d\n",fact);
	return 0;

}
