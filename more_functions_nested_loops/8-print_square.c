#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int row; /* counts lines */
	int col; /* counts # on each line */

	for (row = 0; row < size; row++) /* one pass per line, so size lines */
	{
		for (col = 0; col < size; col++)

			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0) /* size > 0 is skipped, no extra blank line appears */

		_putchar('\n');
}
