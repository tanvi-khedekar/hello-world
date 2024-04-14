#include<stdio.h>

int main(void)
{
	int iCounter = 0;

	do
	{
		printf("%d ", iCounter);
		iCounter++;						//output - 0 1 2
	}while(iCounter < 3);

	iCounter = 3;
	do
	{
		printf("\n%d ", iCounter);
		iCounter++;						//output - 3
	}while(iCounter < 3);				//exits from loop after checking condition

	return 0;
}