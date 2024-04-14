//-------------------------------------------------------
//Title: 			4_escape_sequences.c
//Author: 			Tanvi Jagdish Khedekar
//Date Created:		19th March 2024
//Date Modified:	
//Change Log:		1. Initial Version
//-------------------------------------------------------


#include<stdio.h>

int main(void)
{

	printf("the flower is \'red\'\n");								//the flower is 'red'

	printf("My teacher focused more on \"Modern Politics\"\n");		//My teacher focused more on "Modern Politics"

	printf("How have you been?\n");									//How have you been?

	printf("How have you been\?\n");								//How have you been?

	printf("division: 4\\2\n");										//division: 4\2

	printf("ERROR\a\n");											//ERROR with a sound

	printf("fire\bburn\n");											//firburn 

	printf("bye\f\n");												//bye //NA

	printf("leave a line\n\n");										//leave a line//line left

	printf("believe\r\n");											//believe//NA

	printf("\thello\n");											//	hello

	printf("hello\v\n");											//hello with an extra line left


	printf("Hello\n");												//Hello
	//printf(""Hello"\n");											//error
	printf("\"Hello\"\n");											//"Hello"

	printf("'Hello'\n");											//'Hello'
	printf("\'Hello\'\n");											//'Hello'

	printf("Hello?\n");												//Hello?
	printf("Hello\?\n");											//Hello?

	printf("\temp\bin\new\n");										//		emin
																	//ew

	printf("\\temp\\bin\\new\n");									// \temp\bin\new

	printf("Hello\fWorld!\n");										//	Hello
																	//	World!

	printf("Hello,\rWorld!\n");										//World!

	return 0;
}

