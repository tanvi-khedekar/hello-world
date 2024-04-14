//-------------------------------------------------------
//Title:            20_if_else.c
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
		printf("One \n");				//simple statement
	else
		printf("Two");					//One

	iNo = 15;
	if(iNo < 10)
		printf("One ");					//simple statement
	else
		printf("Two\n");				//Two

	/* iNo = 5;
	if(iNo < 10)
		printf("One ");					//simple statement
		printf("Two ");					//simple statement
	else
		printf("Three\n"); */			// illegal else without matching if

	iNo = 15;
	if(iNo < 10)
	{									//compound statement
		printf("One ");
		printf("Two ");
	}
	else
		printf("Three \n");				//Three

	/* iNo = 15;
	if(iNo < 10);						//Null statement
	{
		printf("One ");
		printf("Two ");
	}
	else
		printf("Three\n"); */			//illegal else without matching if

	return 0;
}