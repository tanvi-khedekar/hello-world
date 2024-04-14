//-------------------------------------------------------
//Title:            19_if.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iNo = 5;
	
	if(iNo < 10)
		printf("One ");			//One	Simple statement
		printf("Two\n");		//Two

	iNo = 15;
	if(iNo < 10)
		printf("One ");			//Simple statement
		printf("Two\n");		//Two

	iNo = 5;
	if(iNo < 10)
	{							//compound statement
		printf("One ");			//One
		printf("Two\n");		//Two
	}	

	iNo = 15;
	if(iNo < 10)
	{							//compound statement
		printf("One ");			//No output
		printf("Two\n");
	}

	iNo = 15;
	if(iNo < 10);				//Null statement
	{
		printf("One ");			//One
		printf("Two\n");		//Two
	}

	return 0;
}