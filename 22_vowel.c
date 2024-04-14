//-------------------------------------------------------
//Title:            22_vowel.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     31st March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>
#include<conio.h>

int main(void)
{
	char chChar;
	char chAns;

	printf("PROGRAM TO FIND WHETHER ENTERED CHARACTER IS A VOWWEL OR NOT.\n\n");

	while(1)
	{
		printf("Enter \'y\' to continue or press any key to exit.\n ");		//asking user whether they want to proceed
		scanf(" %c",&chAns);
		//chAns = getch();
		if(chAns == 'y')															//if 'y', then enter if
		{
			printf("Enter character. \t");									//ask user to enter character
			scanf(" %c",&chChar);
			//getch();
			//chChar = getch();
			switch(chChar)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					printf("%c is a small letter vowel.\n",chChar);					//output on entering a small letter vowel character
					break;
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					printf("%c is a capital letter vowel.\n",chChar);				//output on entering a capital letter vowel character
					break;
				default : 
					printf("%c is not a vowel.\n",chChar);							//output on entering a character that is not a vowel
			}
		//ch = getch();
		}
			else 																	//if chAns entered anything apart from 'y', break.
			break;
			printf("\n\n");
	}
	return 0;
}