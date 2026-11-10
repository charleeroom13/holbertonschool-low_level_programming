#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0') /* counts characters, same as _strlen */
		len++;

	while (len > 0) /* keep going while there are characters left to print */
	{
		len--; /* stepping back first is why marker is never printed */
		_putchar(s[len]);
	}

	_putchar('\n');
}
