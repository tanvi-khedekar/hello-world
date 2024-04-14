//-------------------------------------------------------
//Title:            14_logical_OR.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     19th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns;

	iAns = iNo1 && ++iNo2 || iNo3++;

	printf(" iNo1 = %d\n iNo2 = %d\n iNo3 = %d\n iAns = %d\n", iNo1, iNo2, iNo3, iAns);		/*  iNo1 = 0
 																								iNo2 = 1
																								iNo3 = 3
																								iAns = 1 */

	return 0;
}