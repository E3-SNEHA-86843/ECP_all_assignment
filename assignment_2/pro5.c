#include<stdio.h>
void main(){

	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);

       int num=((a>b && a>c)?a:(b>c && b>a)?b:c);
       printf("%d is greater!!\n",num);
}
