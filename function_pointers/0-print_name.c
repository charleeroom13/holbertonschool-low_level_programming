#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: pointer to function that prints the name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f) /* checks that both are not NULL */
		f(name);

	/**
	 * Baby-steps:
	 * if (name == 0)
	 * return;
	 * if (f == 0)
	 * return;
	 * f(name);
	 */
}
