#include<stdio.h>
int main(){

	int x,y;
	printf("Enter x and y co-ordinates: ");
	scanf("%d%d",&x,&y);

	if(x>=0 && y>=0)
		printf("You are in 1st quadrant!!\n");
	else if(x<0 && y<0)
		printf("You are in 3rd quadrant!!\n");
	else if(x<0 && y>0)
		printf("You are in 2nd quadrant!!\n");
	else if(x>0&& y<0)
		printf("You are in 4th quadrant!!\n");
	else 
		printf("You have entered wrong input!!\n");

	return 0;



}
