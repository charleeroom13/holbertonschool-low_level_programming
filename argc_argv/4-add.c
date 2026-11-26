#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks that a string holds only digits
 * @s: string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 * Baby-steps: (indent. pushed later so Betty is happy)
 * int i;
 * char c;
 * i = 0;
 * while (s[i] != '\0')
 * {
 * 	c = s[i];
 * 	if (c < '0')
 * 		return (0);
 * 	if (c > '9')
 * 		return (0);
 * 	i++;
 * }
 * return (1);
 */

int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if an argument is not a number.
 * Baby-steps: (indent. pushed later so Betty is happy)
 * i = 1;
 * while (i < argc)
 * {
 * 	if (is_number(argv[i]) == 0)
 * 	{
 * 		printf("Error\n");
 * 		return (1);
 * 	}
 * 	sum = sum + atoi(argv[i]);
 * 	i++;
 * }
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
