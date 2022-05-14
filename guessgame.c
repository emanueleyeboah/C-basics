#include <stdio.h>

/* This is a guess game requesting the user for an input
   Going through the numbers given and making the final decision */

int main ()

{
       // Defining guess number
        int  guess_number ;

	printf ("Make a guess: ");

	// Requesting for a number
	
	scanf("%d", &guess_number);

        int guess = ( 1 , 2, 5, 12 , 200) ;
        
	// Making the analyses
	
	if ( guess_number = guess )
	{
		printf("Chale you have won\n");
        }


	if (guess_number != guess )
	{	
		printf("Boss, try again later\n");
	}	
}


