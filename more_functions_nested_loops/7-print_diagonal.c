#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int row; /* counts lines */
	int space; /* counts leading spaces */

	if (n <= 0)
	{
		_putchar('\n');

		return;
	}

	for (row = 0; row < n; row++) /* one pass per backslash, one line each */
	{
		/**
		 * row 0 gets 0 spaces, row 1 gets 1, row 2 gets 2, and so on
		 * each line is pushed one step to the right, makes diagonal
		 */

		for (space = 0; space < row; space++)

			_putchar(' ');

		_putchar('\\'); /* to print a backslash */
		_putchar('\n');
	}
}
