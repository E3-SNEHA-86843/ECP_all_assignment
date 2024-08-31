#include<stdio.h>
void main(){

	int a,b,c,d,num1,num;
	printf("Enter value for num : ");
	scanf("%d",&num1);

	num=num1;
	a=num/1000;  //quetiont=9
	num=num%1000; //remainder=361

	printf("%d = %d ",num1,a);

	b=num/100; //3
	num=num%100;//61

	printf("\t%d",b);\\3

	c=num/10;//6
	num=num%10;//1

	printf("\t%d",c);

	printf("\t%d\n",num);

	//B.9361=9000+300+60+1;
	
	printf("%d=%d+ %d+ %d+ %d\n",num1,a*100,b*100,c*10,num);

	//c.1639
	
	printf("%d=%d%d%d%d\n",num1,num,c,b,a);


}
