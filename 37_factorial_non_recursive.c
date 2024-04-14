//--------------------------------------------------------
//Title:            37_factorial_non_recursive.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     7th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int Fact(int iNo);										//function declaration

int main(void)
{
	int iNo;
	int iAns;

	printf("Enter number :\t");
	scanf("%d", &iNo);

	iAns = Fact(iNo);									//function calling 

	printf("Factorial is %d.\n", iAns);

	return 0;
}

int Fact(int iNo)
{
	int iAns;
	int iCounter;

	iAns = iNo;
	for(iCounter = iNo - 1; iCounter != 1; iCounter--)
		iAns = iAns * iCounter;

	return iAns;
}