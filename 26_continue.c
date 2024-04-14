//-------------------------------------------------------
//Title:            26_continue.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iCounter;

	for(iCounter = 1; iCounter <= 10; iCounter++)
	{
		if(iCounter % 2 == 0)
			continue;								//when mod is equal to 2, control goes up and value of iCounter increments, and printf does not get executed

		printf("%d ", iCounter);					//output :- 1 3 5 7 9
	}

	return 0;
}