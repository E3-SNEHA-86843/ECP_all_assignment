#include<stdio.h>
void main(){

	int num;
	printf("Enter number : ");
	scanf("%d",&num);

	printf("octal= %o\n",num);

	float temp=num;
	temp=temp/100;
	printf("decimal= %.2f\n",temp);
        printf("hex= %x\n",num);
	char ch=num;
	printf("char = %c\n",ch);

}
