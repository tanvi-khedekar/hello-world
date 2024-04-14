//-------------------------------------------------------
//Title:            12_logical.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     19th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	printf("1 && 1 = %d\n", 1 && 1);			//1
	printf("1 && 0 = %d\n", 1 && 0);			//0
	printf("1 || 0 = %d\n", 1 || 0);			//1
	printf("1 || 1 = %d\n", 1 || 1);			//1
	printf("0 || 0 = %d\n", 0 || 0);			//0
	printf("!0 = %d\n\n", !0);					//1

	printf("10 && 20 = %d\n", 10 && 20);		//1
	printf("10 && -10 = %d\n", 10 && -10);		//1
	printf("10 || 10 = %d\n", 10 || 10);		//1
	printf("-10 || 10 = %d\n", -10 || 10);		//1
	printf("!10 = %d\n", !10);					//0
	printf("!-20 = %d\n", !-20);				//0

	return 0;
}