//-------------------------------------------------------
//Title:            9_increment.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     17th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int iNo = 10;
	int iAns;

	printf("%d\n",iNo);			//10

	iAns = ++iNo;
	printf("%d\n",iAns);		//11
	printf("%d\n",iNo);			//11

	iAns = iNo++;
	printf("%d\n",iAns);		//11
	printf("%d\n",iNo);			//12

	++iNo;
	printf("%d\n",iNo);			//13

	iNo++;
	printf("%d\n",iNo);			//14

	printf("%d\n",iNo++);		//14
	printf("%d\n",iNo);			//15

	printf("%d\n",++iNo);		//16
	printf("%d\n",iNo);			//16

	printf("%d\n",iNo + 1);		//17
	printf("%d\n",iNo);			//16

	printf("%d\n",+ +iNo);		//16
	printf("%d\n",iNo);			//16

	//printf("%d\n",++10);		// '++' needs l-value
	//printf("%d\n",10++);		// '++' needs l-value

	return 0;
}