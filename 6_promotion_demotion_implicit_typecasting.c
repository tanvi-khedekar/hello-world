//-------------------------------------------------------
//Title:            6_promotion_demotion_implicit_typecasting.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     8th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{

	int iAns;

	iAns = 3.25 * 2 + (5/2);

	printf("%d", iAns);				//8, demotion of 8.5 to 8 as format specifier is %d and not %f

	return 0;
}