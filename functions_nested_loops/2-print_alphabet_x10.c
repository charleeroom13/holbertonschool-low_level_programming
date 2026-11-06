#include "main.h"

/**
 * Prints lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int line = 0; /* tracks how many lines are done */
	char apl; /* inner counter. Value is given later */

	while (line < 10)
	{
		apl = 'a'; /* resets alphabet at start of every line */

		while (apl <= 'z')
		{
			_putchar(apl);
			apl++;
		}

		_putchar('\n');
		line++; /* moves outer counter on */
	}
}
