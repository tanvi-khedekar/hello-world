//-------------------------------------------------------
//Title:            16_sizeof.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     26th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iNo = 10;
	char chChar ='A';
	float fNo = 577.33f;
	double dNo = 69.33;

	printf("sixe of int = %d\n", sizeof(int));				//4
	printf("size of char = %d\n", sizeof(char));			//1
	printf("size of float = %d\n", sizeof(float));			//4
	printf("size of double = %d\n\n", sizeof(double));		//8

	printf("size of iNo = %d\n", sizeof(iNo));				//4
	printf("size of chChar = %d\n", sizeof(chChar));		//1
	printf("size of fNo = %d\n", sizeof(fNo));				//4
	printf("size of dNo = %d\n\n", sizeof(dNo));			//8

	printf("size of 20 = %d\n", sizeof(20));				//4
	printf("size of 'B' = %d\n", sizeof('B'));				//4
	printf("size of 'A' = %d\n", sizeof('A'));				//4
	printf("size of 99.99 = %d\n", sizeof(99.99));			//8
	printf("size of 99.99f = %d\n\n", sizeof(99.99f));		//4

	printf("size of 20 = %d\n", sizeof 20);					//4
	printf("size of iNo = %d\n\n", sizeof iNo);				//4
	//printf("size of int = %d\n\n", sizeof int);			//error	

	printf("size of iNo = %d\n", iNo);						//10
	printf("size of ++iNo = %d\n", sizeof(++iNo));			//4
	printf("size of iNo = %d\n\n", iNo);					//10

	printf("size of void = %d\n", sizeof(void));			//0

	return 0;
}



