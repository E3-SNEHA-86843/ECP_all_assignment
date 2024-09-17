/*

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>
int main(){
	int row;
	printf("Enter row size:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int num=1;
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			num++;
		}printf("\n");

	}
	return 0;

}
