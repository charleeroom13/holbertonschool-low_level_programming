#include <stdarg.h> /* for va_ */
#include <stdio.h> /* for NULL */
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * Not so baby-steps: (for the loop)
 * for (i = 0; i < n; i++)
 * {
 * printf("%d", va_arg(ap, int));
 * if (separator != NULL && i < n - 1)
 * printf("%s", separator);
 * }
 */
