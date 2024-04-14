//-------------------------------------------------------
//Title:            33_call_by_value.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

void Fun(int);

int main(void)
{
	int iNo = 10;

	printf("\nBefore calling, iNo is %d.\n\n", iNo);	//10

	Fun(iNo);

	printf("After calling, iNo is %d.\n\n", iNo);		//10   changes happened in Fun don't reflect here

	return 0;
}

void Fun(int iNo)
{
	printf("In Fun, iNo is %d.\n\n", iNo);				//10

	++iNo;

	printf("Leaving Fun, iNo is %d.\n\n", iNo);			//11
}