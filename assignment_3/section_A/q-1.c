#include<stdio.h>
int main(){

	int num;
	char operator;
	printf("Enter operator(*,-,+,/): ");
	scanf("%c",&operator);
	printf("Enter num: ");
	scanf("%d",&num);
	
	int i=1;
	while(i<=num){

		printf("%c",operator);
		i++;
	}
	printf("\n");
	return 0;

}
