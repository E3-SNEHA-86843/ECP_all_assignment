#include<stdio.h>
int main(){

        int n,i,a=0,b=1;
        int c=a+b;
        printf("Enter the number of terms:");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){

                if(i <= 1)
                        printf("%4d",i);
                else{

                        printf("%4d",c);
                        a=b;
                        b=c;
                        c=a+b;

                }

        }
        printf("\n");
	return 0;
}
