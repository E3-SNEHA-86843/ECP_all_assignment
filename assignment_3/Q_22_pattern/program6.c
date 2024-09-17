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
	char ch='A';
	for(int i=1;i<=row;i++){
		int temp=ch++;	
		for(int j=row;j>=i;j--){
			printf("%c ",temp++);
				
		}printf("\n");

	}
	return 0;

}
