#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 8x8 array of characters to print
 *
 * brackets around *a (in char (*a)[8]) matter
 * without them, char *a[8] would be 8 separate pointers
 */

void print_chessboard(char (*a)[8]) /* "a pointer to an array of 8 char" */
{
	int i, j; /* row counter and square counter */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++) /* 8 squares of one row */

			_putchar(a[i][j]); /* prints one square */

		_putchar('\n'); /* runs once at end of each row, not after each square */
	}
}
