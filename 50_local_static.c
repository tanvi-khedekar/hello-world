//--------------------------------------------------------
//Title:            50_local_static.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     12th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

void Fun1(void);
void Fun2 (void);

int main(void)
{
	int iCounter;

	for(iCounter = 0; iCounter < 3; iCounter++)
		Fun1();										// 11 11 11

	printf("\n");

	for(iCounter = 0; iCounter < 3; iCounter++)
		Fun2();										// 11 12 13

	return 0;
}

void Fun1(void)
{
	int iNo = 10;
	++iNo;
	printf("%d ", iNo);
}

void Fun2(void)
{
	static int iNo = 10;
	++iNo;
	printf("%d ", iNo);
}

