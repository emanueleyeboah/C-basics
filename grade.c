#include <stdio.h>

/*This algorithm is designed for students and it main purpose is to request the student his/her examination in order to be graded.*/

int main ()

{

	int mark = 0 ;
	
	printf ("Enter your examination mark: ");
	scanf ("%d", &mark);

	if (mark >= 70.0 )
	{
	
		printf("\nA - Excellent\n");
		printf("Stay on track, consistency is the key\n");
	}

	if (mark >=50.0 || mark >= 69.9 )
	{
 		printf("\nB - Good\n");
		printf("You can do better\n");
	}

	if ( mark >= 40.0 || mark >= 49.9 )
	{
	
		printf("\nC - Credit\n");
		printf("You have to put in much effort to get to the top\n");
	}

	if (mark <= 39.9)
	{
		printf("\nF- Failed\n");
		printf("It is never late , all have to do is sit up and learn\n");
	}
}
