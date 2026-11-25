#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to print between strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++) /* see baby-steps note below */
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

/**
 * Baby-steps:
 * i = 0;
 * while (i < n)
 * {
 * str = va_arg(ap, char *);
 * if (str == NULL)
 * printf("(nil)");
 * if (str != NULL)
 * printf("%s", str);
 * if (i != n - 1)
 * {
 * if (separator != NULL)
 * printf("%s", separator);
 * }
 * i++;
 * }
 */
