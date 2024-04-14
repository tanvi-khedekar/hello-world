//-------------------------------------------------------
//Title:            34_menudriven_arithmetic_revised_version1.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     11th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

//Function Declarations
int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);	

int main(void)
{
	//Variable Declarations
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;

	while(1)
	{
		//Print Menu & accept the choice
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n\n");
		printf("Enter your choice:\t");
		scanf("%d", &iChoice);

		if(iChoice <= 0 || iChoice > 6)
		{
			printf("Invalid Choice");
			continue;
		}

		// Check for exit
		if(iChoice == 6)
			return 0;  //or break

		// Prompt user to enter two numbers
		printf("Enter two numbers: \t");
		scanf("%d%d", &iNo1, &iNo2);

		//Switch Case to execute specific functions based on choice
		switch(iChoice)
		{
			//Addition
			case 1:
				iAns = Addition(iNo1, iNo2);				//'Addition' function call
				break;

			//Subtraction
			case 2:
				iAns = Subtraction(iNo1, iNo2);
				break;

			//Multiplication
			case 3:																
				iAns = Multiplication(iNo1, iNo2);
				break;

			//Division
			case 4:																		
				iAns = Division(iNo1, iNo2);
				break;

			//Modulus
			case 5:																	
				iAns = Modulus(iNo1, iNo2);
				break;
		}

		printf("Answer is %d.\n", iAns);
	}
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