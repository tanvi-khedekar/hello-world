//-------------------------------------------------------
//Title:            21_switch.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	switch(2)								// O/p will be execution of case 2&3 as there is no break statement in between the two
	{
		case 1:
			printf("One\n");
		case 2:
			printf("Two\n");
		case 3:
		 	printf("Three\n\n");
	}										//Two Three

	switch(3)								//case 3 will be executed 
	{
		case 1:
			printf("One\n");
		case 2:
			printf("Two\n");
		case 3:
		 	printf("Three\n\n");
	}										//Three

	switch(5)								//default statement will be executed as choice 5 does not exist and we have defined a default for such a case
	{
		case 1:
			printf("One\n");
		case 2:
			printf("Two\n");
		case 3:
		 	printf("Three\n");
		 default:
		 	printf("Default\n\n");
	}										//Default

	switch(5)								// compiler will go to default as there is no choice as 5, but it will also print what is below it as there is no break statement in between 
	{
		case 1:
			printf("One\n");
		default:
			printf("Default\n");
		case 2:
			printf("Two\n");
		case 3:
		 	printf("Three\n\n");				
	}										//Default Two Three

	switch(5)								//no output as choice 5 does not exist, and neither is there a default statement 
	{
		case 1:
			printf("One\n");
		case 2:
			printf("Two\n");
		case 3:
		 	printf("Three\n");
	}										//No output

	return 0;
}