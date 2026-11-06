#include <stdio.h> /* printf is back baby! */
#include "main.h"

/**
 * print_to_98 - Prints all integers from n to 98
 * @n: The starting number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		/* stops at 98 so last number prints without a trailing comma */
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	else /* n is above 98 so count down */
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n"); /* both branches end here */
}
