#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int last; /* holds the digit */

	last = n % 10; /* gives remainder after / 10, which is last digit */

	if (last < 0) /* in C, sign of % follows the number being divided */

		last = -last; /* flips it back to a plain digit */

	_putchar('0' + last); /* prints visible character */

	return (last); /* gives digit back to caller as a number */
}
