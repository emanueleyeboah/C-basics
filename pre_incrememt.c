#include <stdio.h>

// This algorithm explains the the basics of pre increment and pre decrement jin c programming

int main ()

{

	int x = 5;
	int y = 10;

	//increment

	printf("\nBefore y=++x: x=%d and y=%d\n",x,y);
	y=++x;
	printf("\nAfter y=++x: x=%d and y=%d\n",x,y);

	//decrement

	printf("\nBefore y=--x: and x=%d and y=%d\n",x,y);
	y=--x;
	printf("\nAfter y=--x: x=%d and y=%d\n",x,y);

	// Compound statement
	
	printf("\n");
	printf("\n");

	int k = 0;
	printf("Enter a value for k: ");
	scanf("%i",&k);
        
	// post increment
	k += 10;

	printf("Answer is %d\n", k);

	// post decrement
	
	printf("\n");
	printf("\n");

	int m=0;
        
	printf("Enter a value for m: ");
	scanf("%d",&m);

	m -=10;
	printf("Answer is : %d\n",m);
}
