#include<stdio.h>
void main(){

	float celcius, faranite;

	printf("Enter temperature in celceius: ");
	scanf("%f",&celcius);

	faranite=(celcius *9/5)+32;
	printf("Temperature into fahreneit :%.2f\n",faranite);

	printf("Enter temperature in faranite : ");
	scanf("%f",&faranite);

	celcius=(faranite-32)*5/9;
	printf("Tempearture into celcius :%.2f\n",celcius);
}
