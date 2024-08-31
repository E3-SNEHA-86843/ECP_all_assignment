#include<stdio.h>
#include<math.h>
int main(){

	float a,b,c,perimeter,s,area;

	printf("Enter the the sides of triangle: ");
	scanf("%f%f%f",&a,&b,&c);

	perimeter=a+b+c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));

	printf("perimeter of traingle : %.2f\n",perimeter);
	printf("semi perimeter of triangle :%.2f\n",s);
	printf("area of traingle: %.2f\n",area);
	return 0;

}
