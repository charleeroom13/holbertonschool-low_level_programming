#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14, then a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j; /* i counts lines and j counts numbers on each line */

	for (i = 0; i < 10; i++) /* Outer: runs 10 times, once per line of output */
	{
		for (j = 0; j <= 14; j++) /* Inner: runs 15 times per line */
		{
			if (j > 9)

				_putchar('1'); /* first digit is always 1 */

			/**
			 * j % 10 takes ones digit: 7 gives 7, 12 gives 2
			 * adding '0' turns it into a character
			 */

			_putchar('0' + j % 10);
		}

		_putchar('\n'); /* after inner but inside outer, runs once per line */
	}
}
