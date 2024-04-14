//-------------------------------------------------------
//Title:            32_inputs_one_output.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int Addition(int, int);							//function declaration

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;									//variable declaration

	printf("Enter two numbers : \t");
	scanf("%d%d", &iNo1, &iNo2);

	iAns = Addition(iNo1, iNo2);				//function calling

	printf("Addition is %d.\n", iAns);

	return 0;
}

int Addition(int iNo1, int iNo2)				//function definition
{
	int iAns;

	iAns = iNo1 + iNo2;

	return iAns;
}