//-------------------------------------------------------
//Title:            17_comma.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     26th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iAns1, iAns2;						//separator

	iAns1 = 10, 20, 30;						//operator, 10
	iAns2 = (10, 20, 30);					//operator, 30

	printf("%d\n%d\n", iAns1, iAns2);		//separator
	return -1, 1, 0;
}