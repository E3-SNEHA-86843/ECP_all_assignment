#include<stdio.h>
#include<limits.h>
#include<float.h>
void main(){

        printf("size=%lu,%%c,  %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
        printf("size=%lu,%%c,  %d\n",sizeof(unsigned char),UCHAR_MAX);
        printf("size=%lu,%%hd, %hd to %hd\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
        printf("size=%lu,%%hu, %d\n",sizeof(unsigned short int),USHRT_MAX);
        printf("size=%lu,%%d,  %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
        printf("size=%lu,%%u,  %u\n",sizeof(unsigned int),UINT_MAX);
        printf("size=%lu,%%ld, %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
        printf("size=%lu,%%lu, %lu\n",sizeof(unsigned long int),ULONG_MAX);
	printf("size=%lu,%%f,  %f to %f\n",sizeof(float),FLT_MIN,FLT_MAX);
	printf("size=%lu,%%lf,  %lf to %lf\n",sizeof(double),DBL_MIN,DBL_MAX);
	printf("size=%lu,%%lf,  %Lf to %Lf\n",sizeof(long double),LDBL_MIN,LDBL_MAX);
        
}

