#include<stdio.h>

int main()
{
     //This is a c code to request the user to enter values to calculate simple interest.
     
  /*let SI - Simple Interest
    P - Principal
    R - Rate
    T - Time*/

	float p ;
	float r ;
	float t ;

	printf("Enter the principal amount: "  );
        scanf("%f", &p);

	printf("Enter the rate : ");
	scanf("%f", &r);

	printf("Enter the time : ");
	scanf("%f", &t);

	
	
	float SI = (p * r * t) / 100 ;
	printf("The simple interest is  %f \n", SI);


	return 0;
}
