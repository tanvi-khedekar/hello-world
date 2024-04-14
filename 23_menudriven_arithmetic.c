//-------------------------------------------------------
//Title:            23_menudriven_arithmetic.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

//function declarations
int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);								

int main(void)
{
	//variable declarations
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;								

	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
	printf("Enter your choice:\t");
	scanf("%d", &iChoice);							//accepting choice from user

	if(iChoice <= 0 || iChoice >=6)
	{
		printf("Wrong choice\n");
		return -1;
	}												//prompting user about entering wrong choice

	printf("Enter two numbers:\t");
	scanf("%d%d", &iNo1, &iNo2);					//taking two numbers from user to perform required operation

	switch(iChoice)
	{
		case 1:																		//Addition
			iAns = Addition(iNo1, iNo2);
			printf("Sum of %d and %d is %d.\n", iNo1, iNo2, iAns);
			break;

		case 2:																		//Subtraction
			iAns = Subtraction(iNo1, iNo2);
			printf("%d subtracted from %d is %d.\n", iNo2, iNo1, iAns);
			break;

		case 3:																		//Multiplication
			iAns = Multiplication(iNo1, iNo2);
			printf("Product of %d multiplied by %d is %d.\n", iNo1, iNo2, iAns);
			break;

		case 4:																		//Division
			iAns = Division(iNo1, iNo2);
			printf("Quotient of %d divided by %d is %d.\n", iNo1, iNo2, iAns);
			break;

		case 5:																		//Modulus
			iAns = Modulus(iNo1, iNo2);
			printf("Reminder of %d divided by %d is %d.\n", iNo1, iNo2, iAns);
	}

	//printf("Answer is %d\n", iAns);

	return 0;
}

int Addition(int iNo1, int iNo2)								//Addition function definition
{
	int iSum = 0;

	iSum = iNo1 + iNo2;

	return iSum;
}

int Subtraction(int iNo1, int iNo2)								//Subtraction function definition
{
	int iNum = 0;

	iNum = iNo1 - iNo2;

	return iNum;
}

int Multiplication(int iNo1, int iNo2)							//Multiplication function definition
{
	int iPro = 0;

	iPro = iNo1 * iNo2;

	return iPro;
}

int Division(int iNo1, int iNo2)								//Division function definition
{
	int iQuo = 0;

	iQuo = iNo1/iNo2;

	return iQuo;
}

int Modulus(int iNo1, int iNo2)									//Modulus function definition
{
	int iMod = 0;

	iMod = iNo1 % iNo2;

	return iMod;
}