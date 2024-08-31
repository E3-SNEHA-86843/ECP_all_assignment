#include<stdio.h>
#include<limits.h>
void main(){

	printf("size=%lu,%%c,  %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("size=%lu,%%c,  %d\n",sizeof(unsigned char),UCHAR_MAX);
        printf("size=%lu,%%hd, %hd to %hd\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("size=%lu,%%hu, %d\n",sizeof(unsigned short int),USHRT_MAX);
	printf("size=%lu,%%d,  %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("size=%lu,%%u,  %ud\n",sizeof(unsigned int),UINT_MAX);
	printf("size=%lu,%%ld, %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("size=%lu,%%lu, %lu\n",sizeof(unsigned long int),ULONG_MAX);
	
}
