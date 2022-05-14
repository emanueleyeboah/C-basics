#include <stdio.h>


// A detailed algorithm to know when to retire.
int main ()

{

	// Defining age 
	int age = 0;

	// Requesting the user for age .
	
	printf ("How old are you?\n") ;


	scanf ("%d", &age);

	// Analysing using logical statement to find the best for your age.
	if (age < 16)
	{
		printf("\nYou cannot work by law! but You have  %d years to work", 16-age);
	}

	else if (age >=16 && age < 50)
	{
		printf("\nKeep working\n");
	}

	else if (age >=50 && age < 60 )
	{
	 	printf("\nYou have %d years to retire, start planning\n", 60-age);
	}	

         else 
	{
		printf("Well done for your service to the country\n");
	
	}

}
