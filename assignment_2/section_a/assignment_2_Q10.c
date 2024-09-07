/*
	Write a program to accept a character c and display category of the input character.
	ALPHABET
	: c is a letter (65 to 90 or 97 to 122)
	UPPERCASE
	: c is an uppercase letter (65 to 90)
	LOWERCASE : c is a lowercase letter (97 to 122)
	DIGIT
	: c is a digit (48 to 57)
	SPACE
	: c is a space(32), tab(9), carriage return(13), new line(10)
	OTHER
	: Not listed above

*/
#include<stdio.h>
int main(){

	char ch;

	printf("Enter input: ");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90)
		printf("%c is a Uppercase letter\n",ch);
	else if(ch>=97 && ch<=122)
		printf("%c is a Lowercase letter\n",ch);
	else if(ch>=48 && ch<=57)
		printf("it is a Digit\n");
	else if(ch==32)
		printf("it is a space\n");
	else if(ch==9)
		printf("it is a Tab\n");
	else if(ch==13)
		printf("it is a Carriage return\n");
	else if(ch==10)
		printf("Its a new line\n");
	else
		printf("Not listed above\n");
	return 0;

}
