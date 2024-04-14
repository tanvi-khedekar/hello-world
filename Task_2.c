//--------------------------------------------------------
//Title:            Task_2.c
//Author:           Tanvi Jagdish Khedekar
//Description:		Printing numbers from 1 to n using recursion
//Date Created:     6th April 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------c

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

   	// Recursively call the function with iNo-1 and print current number
    PrintNumbers(iNo-1);

    printf("%d ", iNo);							
}