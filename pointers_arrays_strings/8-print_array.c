#include "main.h"
#include <stdio.h> /* brings in printf */

/**
 * print_array - prints n elements of an array of integers
 * @a: array to print
 * @n: number of elements to print
 */

/**
 * int *a: an array arrives as a pointer to its first element
 * function can't know length, so give n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++) /* visit the first n elements, in stored order */
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
