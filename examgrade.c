#include <stdio.h>

/* Write a C program that accepts a mark value from the user.
    If the mark is greater than 40, the program show should print PASSED
    Otherwise , it should print FAILED*/

int main ()
{
	int exam_score = 0;

	printf("Enter your examination score: ");

	scanf("%d", &exam_score);

	if (exam_score >= 40)
	{
	
		printf("PASSED\n");
	}
	else 
		printf("FAILED\n");


}
