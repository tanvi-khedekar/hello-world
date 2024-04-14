//--------------------------------------------------------
//Title:            36_factorial_recursive.c
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

	iAns = Fact(iNo);							//function calling 

	printf("Factorial is %d.\n", iAns);

	return 0;
}

int Fact(int iNo)								//function definition
{
	if(iNo == 1)								//Base case: factorial of 1 is 1
		return 1;								//with return -1 it is returning negative value 

	return iNo * Fact(iNo - 1);					//Recursive call to calculate factorial
}
