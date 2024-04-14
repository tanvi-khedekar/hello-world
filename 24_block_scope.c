//-------------------------------------------------------
//Title:            24_block_scope.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iNo1 = 10;

	printf("%d\n", iNo1);				//allowed - 10
	//printf("%d", iNo2);				//error

	{
		int iNo2 = 20;					//iNo2 - block scope
		printf("%d\n", iNo1);			//allowed - 10
		printf("%d\n", iNo2);			//allowed - 20
	}

	printf("%d", iNo1);					//allowed - 10
	//printf("%d", iNo2);				//error - iNo2 is defined in above block; thus, it's scope is limited to that block

	return 0;
}