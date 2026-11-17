#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first int of the matrix
 * @size: number of rows and columns
 *
 * Notes are pushed to GitHub later so Betty is happy!
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_anti = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_anti += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_main, sum_anti);
}
