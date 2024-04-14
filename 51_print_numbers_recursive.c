//--------------------------------------------------------
//Title:            51_print_numbers_recursive.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     12th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

void PrintNumbers1toN(int iNo);
void PrintNumbersNto1(int iNo);

int main(void)
{
	int iNo;

	printf("Enter number: \t");
	scanf("%d", &iNo);

	PrintNumbers1toN(iNo);

	printf("\n");

	PrintNumbersNto1(iNo);

	return 0;
}

void PrintNumbers1toN(int iNo)
{
	if(iNo == 0)
		return;

	PrintNumbers1toN(iNo - 1);
	printf("%d ", iNo);
}

void PrintNumbersNto1(int iNo)
{
	if(iNo == 0)
		return;

	printf("%d ", iNo);
	PrintNumbersNto1(iNo - 1);
}


