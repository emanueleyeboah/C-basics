#include <stdio.h>

// This is a basic if statement to request the user to input his age and thereafter analysing to determine wether his retirement perios has reached

// Provided the person is 60 or above, he is expected to retire..

int main ()
{ 
	int age = 0;
	printf ("How old are you ?\n");
	scanf("%d", &age);


       if (age >= 60 )
       {

	       printf("\n You must retire !\n");
       
       }	

       else 
       {
	       printf("\nYou have %d years to retirement\n", 60-age);
       
       }       

}
