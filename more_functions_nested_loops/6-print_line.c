#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of times character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	/**
	 * runs n times
	 * if n is 0 or negative, 0 < n is false straight away
	 * so loop never runs
	 */

	for (i = 0; i < n; i++)

		_putchar('_'); /* prints one underscore per pass */

	_putchar('\n'); /* sits after loop, so it always runs, once */
}
