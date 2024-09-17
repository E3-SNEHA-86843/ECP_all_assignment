//Display prime no. between 1 to 100
#include<stdio.h>
int main(){

	int end,cnt=0,c;//flag=0;
	printf("Enter end value:");
	scanf("%d",&end);
	for(int i=2;i<=end;i++){
		for(int j=1;j<=i;j++){
			 if(i%j==0) 
				c=cnt++;
		}
		 if(c<2) 
			printf("%d\n",i); 
		 cnt=0; 
	}
	printf("\n");
	return 0;
}
