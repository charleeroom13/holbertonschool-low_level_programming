#include <stdarg.h> /* brings in va_ */
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int total = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)

		total += va_arg(ap, int);

	va_end(ap);
	return (total);
}

/**
 * Baby-steps:
 * if (n == 0)
 * 	return (0);
 * va_start(ap, n);
 * i = 0;
 * while (i < n)
 * {
 * 	total = total + va_arg(ap, int);
 * 	i++;
 * }
 */
