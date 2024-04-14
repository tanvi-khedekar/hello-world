//--------------------------------------------------------
//Title:            48_auto.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     12th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iNo1;						//auto storage class
	auto int iNo2;					//auto storage class

	printf("%d\n%d", iNo1, iNo2);	// 0 0

	return 0;
}