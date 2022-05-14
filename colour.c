#include <stdio.h>

// This code request the user for a numerical input to determine the colour

int main ()
{
	int value = 0;
	printf ("\nEnter a integer \n");
	scanf("%d", &value);


	switch (value)
	{
		case 100 :
		printf("\nRed\n");
		break;

		case 200:
		printf("\nGold\n");
		break;

		case 300:
		printf("\nGreen\n");

		default:
		printf("\nBlack\n");
		break;
	
	
	
	}

}
