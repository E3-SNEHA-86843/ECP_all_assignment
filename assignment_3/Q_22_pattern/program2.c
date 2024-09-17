/*

* * * * 
* * *
* * 
* 

*/
#include<stdio.h>
int main(){
	int row;
	printf("Enter row size:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=row;j>=i;j--){
			printf("* ");

		}printf("\n");

	}
	return 0;

}
