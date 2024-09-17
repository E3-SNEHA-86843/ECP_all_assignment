#include<stdio.h>
int main(){

	int start,end;
	printf("Enter number(start,end): ");
	scanf("%d%d",&start,&end);
	for(int i=1;i<=10;i++){
		for(int j=start;j<=end;j++)
			printf("%4d",i*j);
		printf("\n");
	}
	return 0;

}
