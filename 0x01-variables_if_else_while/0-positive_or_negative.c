#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	srand(time(NULL));
	n = rand() % 21 - 10; /*generates a random number between -10 and 10*/
	printf("The number %d ", n);
	if
		(n > 0)
		{
			printf("is positive\n");
		}
	else if
	       (n == 0)
	       {
		       printf("is zero\n");
	       }
	else
	{
		printf("is negative\n");
	}
	return 0;
}
