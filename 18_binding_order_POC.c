//-------------------------------------------------------
//Title:            18_binding_order_POC.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     26th March 2024
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

	iAns = ++iNo1 || ++iNo2 && ++iNo3;

	printf(" %d\n %d\n %d\n %d\n",iNo1, iNo2, iNo3, iAns);			//1,1,2,1

	return 0;
}