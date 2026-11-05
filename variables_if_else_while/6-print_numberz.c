#include <stdio.h> /* Brings in putchar */

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*
		 * putchar(num) without '0' would print control characters.
		 * '0' alone is 48 so adding num gives matching digit's character
		 */

		putchar('0' + num);
		num++;
	}

	putchar('\n');

	return (0);
}
