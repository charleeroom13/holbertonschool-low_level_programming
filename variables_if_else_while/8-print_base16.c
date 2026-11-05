#include <stdio.h> /* Brings in putchar */

/**
 * main - Entry point
 *
 * Description: Prints base 16 numbers in lowercase, then a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	char alp = 'a';

	while (num <= 9) /* Loop 1: numbers 0-9 */
	{
		putchar('0' + num);
		num++;
	}

	while (alp <= 'f') /* Loop 2: alphabets 10-15 (a is 10) */
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');

	return (0);
}
