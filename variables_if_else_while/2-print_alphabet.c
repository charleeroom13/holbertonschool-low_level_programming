#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a'; /* Single quotes mean one char, double quotes mean a string */

	while (alp <= 'z')
	{
		putchar(alp);
		alp++; /* Forgetting this would create an infinite loop */
	}

	putchar('\n');

	return (0);
}
