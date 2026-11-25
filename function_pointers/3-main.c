#include <stdio.h> /* for printf */
#include <stdlib.h> /* for atoi and exit */
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int); /* function pointer to operator function */
	int a, b; /* first and second integers */

	if (argc != 4) /* check for correct number of arguments */
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]); /* get function pointer for operator */

	if (f == NULL) /* check for valid operator */
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]); /* convert first argument to integer */
	b = atoi(argv[3]); /* convert second argument to integer */

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
