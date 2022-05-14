#include <stdio.h>


int main ()
{

	// Writing a code to request user to input  numbers to perform basic arithmetics
	
	int x ;
	int y ;
	int z ;
         
	//Requesting for x
	printf("Enter a number for x: ");
	scanf("%i", &x);

	// Requesting for y
	printf("Enter a number for y: ");
        scanf("%i", &y);

        // Requesting for z
	printf("Enter a number for z: ");
        scanf("%i", &z);

	// Addition
	int add = x*y + z ;
	

       //Substraction
	int sub = y*z - x ;
	

	

        // Game Result
	 if ( add  >   sub) ;
	printf("Congratulations you have won the game\n");

	 if (add <  sub) ;
	printf("Better luck next time\n");

	if ( add !=  sub)  ;
	printf("Try again\n");

	return 0 ;
}
