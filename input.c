#include <stdio.h>

int main()
{
	int radius;
        
	printf("Please enter a radius: ");

	scanf("%i", &radius);

	double area = 3.14285 * ( radius * radius) ;
  
  	printf("The area of the circle with  radius  %i  is %f\n",radius, area);
        return 0;

}
