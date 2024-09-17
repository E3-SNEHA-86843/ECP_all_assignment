#include<stdio.h>
#include<math.h>
int main(){

	int arr[20];int num;
	printf("Enter num:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
		//printf("arr[i]=%d",arr[i],sqrt(num));
		 arr[i]=sqrt(num);
	for(int i=1;i<=num;i++)
		printf("arr[%d]=%f",arr[i],sqrt(num));
	printf("\n");

}
