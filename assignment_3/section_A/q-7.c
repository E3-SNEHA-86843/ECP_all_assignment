#include<stdio.h>
int main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0)
			printf("%d*%d=%d\n",i,num/i,num);
	}printf("\n");
	return 0;

}
