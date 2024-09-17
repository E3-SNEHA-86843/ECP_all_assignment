#include<stdio.h>
extern int flag;
int add(int op1,int op2){
	return op1+op2;
}

int sub(int op1,int op2){
	return op1-op2;
}
int mul(int op1,int op2){
	return op1*op2;
}
int div(int op1,int op2){
	if(op2!=0)
		return op1/op2;
	else{
		printf("Divide by zero:error\n");
	        flag=1;
	}
}
