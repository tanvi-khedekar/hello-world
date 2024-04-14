//-------------------------------------------------------
//Title:            11_relational.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     19th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	printf("10 < 20 = %d\n", 10 < 20);				//1
	printf("20 < 10 = %d\n", 20 < 10);				//0
	printf("10 < 10 = %d\n", 10 < 10);				//0
	printf("10 <= 10 = %d\n", 10 <= 10);			//1
	printf("10 > 20 = %d\n", 10 > 20);				//0
	printf("20 > 10 = %d\n", 20 > 10);				//1
	printf("10 > 10 = %d\n", 10 > 10);				//0
	printf("10 >= 10 = %d\n", 10 >= 10);			//1
	printf("10 == 10 = %d\n", 10 == 10);			//1
	printf("10 == 20 = %d\n", 10 == 20);			//0
	printf("10 != 10 = %d\n", 10 != 10);			//0
	printf("10 != 20 = %d\n", 10 != 20);			//1
	printf("10 <= 10 != 1 = %d\n", 10 <= 10 != 1);	//0
	printf("20 >= 10 == 1 = %d\n", 20 >= 10 == 1);	//1
	printf("20 < 10 != 0 = %d\n", 20 < 10 != 0);	//0

	return 0;
}