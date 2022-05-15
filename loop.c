#include <stdio.h>


int main()
{
	int i,j ;
	for (i = 0; i < 11; i ++);
	{
		printf("\n New outer loop iteration: %d", i);

		for (j = 0; j < 5; j++)
		{
			printf("\n %d, %d", i, j);
		}
	}

}
