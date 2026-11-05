#include <stdio.h> /* Brings in putchar */

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers separated by comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);

		if (num != 9) /* No separator after the last digit */
		{
			putchar(',');
			putchar(' ');
		}

		num++; /* Outside the if to run on every pass incl. the last.
			* Inside it, the loop would hang at 9
			*/
	}

	putchar('\n');

	return (0);
}
