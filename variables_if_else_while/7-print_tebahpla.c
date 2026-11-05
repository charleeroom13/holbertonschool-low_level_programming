#include <stdio.h> /* Brings in putchar */

/**
 * main - Entry point
 *
 * Description: Prints reversed lowercase alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Task 2 in reverse */

	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}

	putchar('\n');

	return (0);
}
