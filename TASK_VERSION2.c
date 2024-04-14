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

	do
	{	//Start: Do While
		
		//Print Menu & accept the choice
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n\n");
		printf("Enter your choice:\t");
		scanf("%d", &iChoice);
		printf("\n");

		//promt user to enter choice from given menu
		if(iChoice <= 0 || iChoice >=7)//or >6
		{
			printf("\nWrong choice! Please select a valid option.\n\n");
		}	
		
		//Switch Case to execute specific functions based on choice
		switch(iChoice)
		{	

			//Addition
			case 1:		
				printf("Enter two numbers:\t");
				scanf("%d%d", &iNo1, &iNo2);																
				iAns = Addition(iNo1, iNo2);										//'Addition' function call
				printf("\nSum of %d and %d is %d.\n\n", iNo1, iNo2, iAns);
				break;

			//Subtraction
			case 2:	
				printf("Enter two numbers:\t");
				scanf("%d%d", &iNo1, &iNo2);																	
				iAns = Subtraction(iNo1, iNo2);
				printf("\n%d subtracted from %d is %d.\n\n", iNo2, iNo1, iAns);
				break;

			//Multiplication
			case 3:								
				printf("Enter two numbers:\t");	
				scanf("%d%d", &iNo1, &iNo2);									
				iAns = Multiplication(iNo1, iNo2);
				printf("\nProduct of %d multiplied by %d is %d.\n\n", iNo1, iNo2, iAns);
				break;

			//Division
			case 4:	
				printf("Enter two numbers:\t");
				scanf("%d%d", &iNo1, &iNo2);																	
				iAns = Division(iNo1, iNo2);
				printf("\nQuotient of %d divided by %d is %d.\n\n", iNo1, iNo2, iAns);
				break;

			//Modulus
			case 5:	
				printf("Enter two numbers:\t");	
				scanf("%d%d", &iNo1, &iNo2);																
				iAns = Modulus(iNo1, iNo2);
				printf("\nRemainder of %d divided by %d is %d.\n", iNo1, iNo2, iAns);
				break;

			//Exit
			case 6:
				printf("Exiting the program.\n");
				//return 0;
		}
	}while(iChoice != 6);
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