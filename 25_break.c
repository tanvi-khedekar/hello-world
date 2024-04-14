//-------------------------------------------------------
//Title:            25_break.c
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
		if(iCounter % 2 == 0)						//loop breaks when iCounter becomes 2
			break;

		printf("%d", iCounter);						//output - 1
	}

	return 0;					
}