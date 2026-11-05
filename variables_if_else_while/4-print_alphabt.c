#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q') /* Filtering checkpoint */
		{
			putchar(alp);
		}

		alp++; /* Stays outside the if checkpoint to run for every letter.
			* If this was in it, the loop would freeze at e.
			*/
	}

	putchar('\n');

	return (0);
}
