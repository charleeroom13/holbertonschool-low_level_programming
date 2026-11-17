#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to change
 *
 * Return: pointer to str
 */

char *string_toupper(char *str)
{
	int i = 0; /* position in string */

	while (str[i] != '\0') /* visits every char until string ends */
	{
		/**
		 * only acts on lowercase letters
		 * same range-check idea as _isdigit
		 * everything else (L, !, spaces, \n) is skipped
		 */

		if (str[i] >= 'a' && str[i] <= 'z')

			/**
			 * turns a small letter into its capital
			 * letters are numbers underneath
			 * b' - 'a' is 1 (second letter)
			 * and 'A' + 1 is 'B'
			 */

			str[i] = str[i] - 'a' + 'A';

		i++; /* outside "if" so move on whether or not letter changed */
	}

	return (str); /* str never moved (used index), still points to start */
}
