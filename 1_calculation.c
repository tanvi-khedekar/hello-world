//-------------------------------------------------------
//Title: 			1_Calculation.c
//Author: 			Tanvi Jagdish Khedekar
//Date Created:		4th March 2024
//Date Modified:	
//Change Log:		1. Initial Version
//-------------------------------------------------------

#include"calculation.h"								//our own header file
#include<stdio.h>									//library functions header file

int main(void)
{
	
	int no1;
	int no2;
	int ans;

	printf("Enter two numbers:\t");
	scanf("%d%d", &no1, &no2);

	ans = addition(no1, no2);
	printf("\n Addition is %d \n",ans);

	subtraction(no1, no2);

	ans = multiplication();								//function call
	printf("\n Multiplication is %d \n",ans);

	division();

	printf("\n For modulus,\n");
	printf("Enter numerator:\t");
	scanf("%d", &no1);
	printf("Enter denominator:\t");
	scanf("%d", &no2);

	ans = modulus(no1, no2);
	printf("\n Remainder is %d \n", ans);

	return 0;
}

int multiplication(void)
{
	int no1;
	int no2;
	int ans;

	printf("\n For multiplication,");
	printf("Enter two numbers:\t");
	scanf("%d%d", &no1, &no2);

	ans = no1 * no2;

	return ans;
}

int addition(int no1, int no2)											//function definition
{
	return no1 + no2;

}

int modulus(int no1, int no2)
{
	return no1%no2;
}

void division(void)
{
	int numerator;
	int denominator;
	int quotient;

	printf("\n For division,\n Enter numerator:\t");
	scanf("%d", &numerator);
	printf("Enter denominator:\t");
	scanf("%d", &denominator);

	quotient = numerator/denominator;

	printf("Quotient is %d \n", quotient);
}

void subtraction(int no1, int no2)
{
	printf("\n");("\n subtraction is %d \n", no1 - no2);
}