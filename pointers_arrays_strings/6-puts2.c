#include "main.h"

/**
 * puts2 - prints every other character of a string, then a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		/**
		 * only even positions (0, 2, 4...) are printed
		 * % 2 gives the remainder, and a remainder of 0 means even
		 */

		if (i % 2 == 0)

			_putchar(str[i]);

		i++; /* always move by 1, so check every position */
	}

	_putchar('\n');
}
