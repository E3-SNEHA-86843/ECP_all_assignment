#include<stdio.h>
int menu(){
	int choice;

	printf("0.EXIT\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
	scanf("%d",&choice);

	return choice;
}
