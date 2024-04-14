#include<stdio.h>

int main(void)
{
	int iCounter;

	iCounter = 0;
	while(iCounter < 3)
	{
		printf("%d ", iCounter);			//0 1 2
		iCounter++;							
	}

	iCounter = 3;
	while(iCounter < 3)
	{
		printf("%d", iCounter);				//no output as 3 = 3 and condition does not match
		iCounter++;
	}

	return 0;
}
