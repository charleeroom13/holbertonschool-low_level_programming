#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int row = 0; /* outer counter */
	int col; /* inner counter */
	int product; /* holds row * col */

	while (row <= 9) /* outer loop, runs 10 times from 0 */
	{
		_putchar('0'); /* bc anything * 0 is 0 */
		col = 1; /* inner counter. since col 0 is printed, it's reset on every row */

		while (col <= 9) /* inner loop, runs for other 9 cols */
		{
			product = row * col; /* number to print in this spot */
			_putchar(',');
			_putchar(' ');

			if (product >= 10) /* two-digit number needs its tens digit printed */
				_putchar('0' + product / 10);

			else /* one-digit number gets a space, padding that lines cols up */
				_putchar(' ');

			_putchar('0' + product % 10); /* units digit, always printed */
			col++;
		}

		_putchar('\n'); /* ends line after 9th col */
		row++;
	}
}
