//-------------------------------------------------------
//Title: 			3_short_long_int_char_float_double.c
//Author: 			Tanvi Jagdish Khedekar
//Date Created:		17th March 2024
//Date Modified:	
//Change Log:		1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	//int iInt;
	//char chChar;
	//float fFloat;
	//double dDouble;

	printf("size of int = %d bytes\n",sizeof(int));							//4 bytes
	printf("size of short int = %d bytes\n",sizeof(short int));				//2 bytes
	printf("size of long int = %d bytes\n",sizeof(long int));				//4 bytes
	printf("size of long long int = %d bytes\n\n",sizeof(long long int));	//8 bytes

	printf("size of char = %d bytes\n",sizeof(char));						//1 byte
	//printf("size of short char = %d\n",sizeof(short char));				//error
	//printf("size of long char = %d\n",sizeof(long char));					//error
	//printf("size of long long char = %d\n\n",sizeof(long long char));		//error

	printf("size of float = %d bytes\n",sizeof(float));						//4 bytes
	//printf("size of short float = %d\n",sizeof(short float));				//error
	printf("size of long float = %d bytes\n",sizeof(long float));			//8 bytes
	//printf("size of long long float = %d\n\n",sizeof(long long float));

	printf("size of double = %d bytes\n",sizeof(double));					//8 bytes
	//printf("size of short double = %d\n",sizeof(short double));			//error
	printf("size of long double = %d bytes\n",sizeof(long double));			//8 bytes
	//printf("size of long long double = %d\n\n",sizeof(long long double));	//error

	return 0;
}