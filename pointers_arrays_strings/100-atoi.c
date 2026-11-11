#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer found in the string, or 0 if there is none
 */

int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1; /* 1 = positive. -1 = negative */
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		/**
		 * result * 10 - digit:
		 * shifts existing digits left and adds new one
		 * which builds number negative on purpose
		 *
		 * s[i] - '0':
		 * turns character '7' into number 7
		 */

		result = result * 10 - (s[i] - '0');
		i++;
	}

	if (sign == 1)
		result = -result;

	return (result);
}
