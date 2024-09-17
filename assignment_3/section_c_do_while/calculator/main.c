#include<stdio.h>
#include"header.h"
//#include<stdlib.h>
int menu();int flag=0;
//void exit(int);
int main(){
	int choice,op1,op2,res;
	while((choice=menu())!=0){
		printf("Enter operands (1 and 2):");
		scanf("%d%d",&op1,&op2);
		switch(choice){

			case 0:// exit(1);
				goto lable; 
				//break;
			case 1: res= add(op1,op2);
				break;
			case 2: res= sub(op1,op2);
				break;
			case 3: res= mul(op1,op2);
				break;
			case 4: res= div(op1,op2);
				break;
			default:
				printf("Invalid choice\n");

		}
	
		if(flag==0)
			printf("res=%d\n",res);
		flag==0;
	}	
 	lable:	
	return 0;
		
}
