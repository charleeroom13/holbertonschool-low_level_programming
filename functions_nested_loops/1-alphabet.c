#include "main.h"

/**
 * Prints lowercase alphabet and a new line
 */

void print_alphabet(void) /* returns nothing, takes nothing */
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}

	_putchar('\n');
}
