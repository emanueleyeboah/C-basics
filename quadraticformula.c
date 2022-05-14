#include <math.h>
#include <stdio.h>

/*This algorithm seeks to request numbers from the user to to solve for x using the quadratic formula(Almighty formula)*/

int main ( )
{
	 int a, b, c ;



	printf("Enter a value for a: ");
	scanf("%d", &a);

 
	printf("Enter a value for b: ");
        scanf("%d", &b);


	printf("Enter a value for c: ");
        scanf("%d", &c);

	int x =  (-b -( sqrt((b * b) - 4 *( a * c))) ) / 2 * a ;

	int y =  (-b + ( sqrt((b * b) - 4 *( a * c))) ) / 2 * a ;

	printf ("The value for  using the quadratic formula  is : %d  %d\n", x, y) ;





}
