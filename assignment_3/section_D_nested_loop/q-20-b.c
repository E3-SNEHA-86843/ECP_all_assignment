#include<stdio.h>
int main(){

	int num, start,end,rem,result,count=0;
	printf("Enter num:");
	scanf("%d",&num);
	printf("Enter the ranges(start,end):");
	scanf("%d%d",&start,&end);

	for(int i=start;i<=end;i++){
		
		int num=i;
		while(num!=0){
			rem=num%10;
			num/=10;
			count++;

		}
		//remainder=num%2;
	       	result=rem * rem * rem;

		if(result==i) 
			 printf("%d",result);
		
	}
	
	printf("%d\n",count);


	return 0;

}
