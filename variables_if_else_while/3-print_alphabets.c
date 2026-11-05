#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase then uppercase alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}

	alp = 'A'; /* Resets alp to uppercase */

	while (alp <= 'Z')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');

	return (0);
}
