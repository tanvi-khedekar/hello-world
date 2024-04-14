#include<stdio.h>

int main(void)
{
	int iCounter;

	iCounter = 0;
	for( ; iCounter < 3 ; iCounter++)
		printf("%d ", iCounter);			//0 1 2
		printf("\n");

	iCounter = 3;
	for( ; iCounter < 3 ; iCounter++)
		printf("%d ", iCounter);
		printf("\n");						//no output

	for(iCounter = 0; ; iCounter++)
	{
		if(iCounter == 3)
			break;

		printf("%d ", iCounter);
		
	}										//0 1 2
	printf("\n");

	for(iCounter = 0 ; iCounter < 3 ; )
	{
		printf("%d ", iCounter);
		iCounter++;
	}										//0 1 2
	printf("\n");

	iCounter = 0;
	for( ; ; )								//useless!!!
	{
		if(iCounter == 3)
			break;

		printf("%d ", iCounter);
		iCounter++;
	}										//0 1 2
	printf("\n");

	iCounter = 0;
	for ( ; iCounter < 3 ; )				//'while' version of 'for'
	{
		printf("%d ", iCounter);
		iCounter++;
	}										//0 1 2
	printf("\n");

	return 0;
}