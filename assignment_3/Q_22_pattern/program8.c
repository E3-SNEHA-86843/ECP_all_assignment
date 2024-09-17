#include<stdio.h>
int main(){
	int i,j,sp,row=4;
	char ch='A';
	for(i=1;i<=row;i++){
		for(sp=1;sp<=row-i;sp++)
			printf("  ");
		for(j=1;j<=2*i-1;j++){

			if(j<=i)
				printf("%c ",ch++);
			else
				printf("%c ",--ch);

		}printf("\n");
		ch='A';

	}

	
	for(i=row-1;i>=1;i--){
		for(sp=1;sp<=row-i;sp++)
			printf("  ");
		for(j=1;j<=2*i-1;j++){

			if(j<=i)
				printf("%c ",ch++);
			else
				printf("%c ",--ch);

		}
		printf("\n");
		ch='A';

	}


}
