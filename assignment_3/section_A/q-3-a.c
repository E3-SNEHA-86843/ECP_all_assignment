//calculate sum of digit of integer
#include<stdio.h>
int main(){
	int num,sum=0;
	printf("Enter num: ");
	scanf("%d",&num);
	while(num>0){
	
		sum+=num%10;
		num/=10;
	}
		printf("sum=%d\n",sum);
        return 0;
}
