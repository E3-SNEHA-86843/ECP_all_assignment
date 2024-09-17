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
	char ch='A';
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",ch++);	
		}printf("\n");

	}
	return 0;

}
