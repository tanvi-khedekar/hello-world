//-------------------------------------------------------
//Title:            30_no_input_no_output.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

void Addition(void);						//function declaration

int main(void)
{
	Addition();								//function calling
	return 0;
}

void Addition(void)							//function definition
{
	int iNo1;
	int iNo2;
	int iAns;

	printf("Enter two numbers : \t");
	scanf("%d %d", &iNo1, &iNo2);			//taking two numbers from user

	iAns = iNo1 + iNo2;

	printf("Addition is %d.\n", iAns);
}