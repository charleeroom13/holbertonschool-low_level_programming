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
		if (alp != 'e' && alp != 'q') /* Checkpoint (if) inside the room (while) */
		{
			putchar(alp);
		}

		alp++; /* Stays outside the if checkpoint to runs for every letter.
			* If this was in it, the loop would freeze at e.
			*/
	}

	putchar('\n');

	return (0);
}
