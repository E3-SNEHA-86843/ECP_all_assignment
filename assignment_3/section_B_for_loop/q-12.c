#include<stdio.h>
int main(){
	int base,index,power=1;
	printf("ENter base and index value:");
	scanf("%d%d",&base,&index);
	for(int i=0;i<index;i++)
		power*=base;
	printf("power=%d\n",power);

}
