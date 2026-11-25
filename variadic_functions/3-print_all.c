#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 * const char * const format:
 * neither the text nor the pointer can be changed
 * format != NULL &&:
 * guards against a NULL format without using an if
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	const char *str;
	const char *sep = "";

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i]) /* jumps to case that matches current letter */
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
			break;

		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			sep = ", ";
			break;

		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			sep = ", ";
			break;

		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
			break;

		default: /* does nothing so unknown letters are ignored */
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * sep starts as "" (empty)
 * each item prints sep first, then itself
 * after the first item, sep becomes ", "
 * Why?: printing the separator before each item, not after
 * means ignored letters never leave a stray ", "
 * and there's no trailing one
 */
