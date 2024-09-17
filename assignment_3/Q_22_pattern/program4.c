/*

5
5 4 
5 4 3 2
5 4 3 2 1

*/
#include<stdio.h>
int main(){
	int row;
	printf("Enter row size:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int num=5;
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			num--;
		}printf("\n");

	}
	return 0;

}
