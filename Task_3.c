//--------------------------------------------------------
//Title:            Task_3.c
//Author:           Tanvi Jagdish Khedekar
//Description:		Printing numbers from n to 1 using recursion
//Date Created:     6th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

//header file 
#include<stdio.h>										

//function declaration
void PrintNumbers(int iNo);								

//main function
int main(void)
{
	//variable declaration
	int iNo;											
	
	//taking number from user
	printf("Enter number : \t");	
	scanf("%d", &iNo);									

	//calling function
	PrintNumbers(iNo);									

	printf("\n");

	return 0;
}

//function definition
void PrintNumbers(int iNo)								
{
	//if condition to exit function
	if (iNo == 1) 										
	{
        printf("%d ", iNo);
        return;
    }

    printf("%d ", iNo);									

   	// Recursively call the function with iNo-1 and print current number
    PrintNumbers(iNo-1);							
}