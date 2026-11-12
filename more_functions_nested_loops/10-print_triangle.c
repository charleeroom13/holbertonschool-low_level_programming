#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, col;

	/**
	 * starting at 1 means row is also number of # on that line
	 */

	for (row = 1; row <= size; row++)
	{
		/**
		 * col < size - row:
		 * prints leading spaces
		 * row 1 gets size - 1 spaces
		 * last row gets 0
		 * spaces shrink as the hashes grow
		 * pushes triangle against the right edge
		 *
		 * col = 0 is set again in each for, so second loop starts fresh
		 */

		for (col = 0; col < size - row; col++)

			_putchar(' ');

		for (col = 0; col < row; col++)

			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)

		_putchar('\n');
}
