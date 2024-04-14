//-------------------------------------------------------
//Title:            15_bitwise.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     20th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	printf("8 & 14 = %d\n", 8 & 14);		//8
	printf("8 | 14 = %d\n", 8 | 14);		//14
	printf("8 ^ 14 = %d\n", 8 ^ 14);		//6
	printf("~14 = %d\n\n", ~14);			//-15

	printf("8 << 1 = %d\n", 8 << 1);		//16
	printf("8 >> 1 = %d\n", 8 >> 1);		//4
	printf("20 << 2 = %d\n", 20 << 2);		//80
	printf("20 >> 2 = %d\n", 20 >> 2);		//5

	return 0;
}