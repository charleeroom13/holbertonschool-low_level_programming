#include "main.h"

/**
 * puts_half - prints the second half of a string, then a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = 0;

	while (str[len] != '\0')
		len++;

	/**
	 * i = (len + 1) / 2: starting position, where the second half begins
	 * / drops remainder on ints, which works for both even and odd lengths
	 *
	 * i < len: print up to the last real character
	 * the end marker isn't included
	 */

	for (i = (len + 1) / 2; i < len; i++)

		_putchar(str[i]); /* print one character at a time */

	_putchar('\n');
}
