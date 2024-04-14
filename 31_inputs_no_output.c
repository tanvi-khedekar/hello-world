//-------------------------------------------------------
//Title:            31_inputs_no_output.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

void Addition(int, int);					//function declaration

int main(void)
{
	int iNo1;
	int iNo2;

	printf("Enter two numbers : \t");
	scanf("%d%d", &iNo1, &iNo2);			//taking two numbers from user in main itself 

	Addition(iNo1, iNo2);					//function calling

	return 0;
}

void Addition(int iNo1, int iNo2)			//function definition
{
	int iAns;

	iAns = iNo1 + iNo2;

	printf("Addition is %d.\n", iAns);
}