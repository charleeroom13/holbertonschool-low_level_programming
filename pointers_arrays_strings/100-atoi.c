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
	
	/**
	 * skip everything that isn't a digit
	 * and stop at first digit or at end of string
	 */

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		/**
		 * every - flips the sign
		 * + does nothing
		 * two minuses cancel, so --98 is 98
		 * this is why ------++++++-----+++++--98
		 * (13 minuses, an odd number) gives -98
		 */

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
		 * Why go negative?
		 * an int can hold values from -2147483648 to 2147483647
		 * there is one more negative value than positive. 
		 * there is no +2147483648
		 *
		 * 2147483648 is too big and overflows
		 * sanitizer flag then reports an error
		 * 
		 * -2147483648 fits exactly, nothing overflows
		 *
		 * s[i] - '0':
		 * turns character '7' into number 7
		 */

		result = result * 10 - (s[i] - '0');
		i++;
	}

	/**
	 * result is stored negative, so positive sign flips it to positive
	 * a negative sign leaves it as is
	 */

	if (sign == 1)
		result = -result;

	return (result);
}
