#include <stdio.h>

int main ()
{

	// This code is used in finding the velocity by requesting initial velocity, acceleration and time from  the user.
	
	/*  u - intial velocity
	    a - acceleration
	    t - time
	    v - final velocity  */

	int u ;
	int a ;
	int t ;

       //Requesting for initial velocity
	printf("Enter the initial velocity: ");
	scanf("%i", &u);

	// Requesting for accelaration
        printf("Enter the acceleration: ");
        scanf("%i", &a);

	// Requesting for time
	printf("Enter the time: ");
        scanf("%i", &t);

	int v = u + a*t ;

	printf("The final velocity is %i  metrepersecond\n:", v);

}
