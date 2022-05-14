#include <stdio.h>


int main()

{
 
	int age = 0;

	printf ("How old are you ?\n");

	scanf ("%d", &age);

	if (age < 16 )
	{
		printf("\nYou cannot work by law !\n");
	
	}

	else if ( age >= 16 && age < 50 )
	{
		printf("\nKeep working \n");

	}

	else if (age >= 50)
        {
	
		printf("\nYou have %d to plan your retirement \n", 50 -age);
	}		
}	
