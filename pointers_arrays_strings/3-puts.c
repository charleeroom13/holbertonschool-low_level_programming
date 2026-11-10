#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	/**
	 * *str is the character str currently points to
	 * keep going until reach end marker
	 */

	while (*str != '\0')
	{
		_putchar(*str); /* * gives value, _putchar wants character, not address */
		str++;
	}

	_putchar('\n');
}
