#include <stdlib.h> /* Brings in srand, rand and RAND_MAX  */
#include <time.h> /* Brings in time */
#include <stdio.h> /* Brings in printf */

/**
 * main - Entry point
 *
 * Description: Prints whether a random number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n); /* %d is int's placeholder that n fills in */
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
