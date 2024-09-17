#include<stdio.h>
int main(){
	int num;
	printf("Enter value of num: ");
	scanf("%d",&num);
	for(int i=1;i<=num/2;i++){
		if(num%i==0)
			printf("%-4d",i);
	}
	printf("\n");

}
