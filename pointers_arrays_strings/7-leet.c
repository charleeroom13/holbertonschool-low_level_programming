#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to str
 * Notes are pushed to GitHub later so Betty is happy
 */

char *leet(char *str)
{
	char from[] = "aAeEoOtTlL"; /* lets us do 10 replacements with one if and no switch. These are local arrays, not globals */
	char to[] = "4433007711";
	int i = 0; /* walks string */
	int j; /* walks decoder ring */

	while (str[i] != '\0') /* Loop 1: visits every character of string */
	{
		j = 0; /* restarts ring search for each new character. Inside outer loop, so j resets every time */

		while (from[j] != '\0') /* Loop 2: checks current character against every letter on top row */
		{
			/**
			 * on a match, overwrites character with number at same position
			 * after a swap, character is a digit
			 * remaining ring letters are all letters
			 * so a digit can never match again
			 */

			if (str[i] == from[j])

				str[i] = to[j];
			j++;
		}

		i++;
	}

	return (str); /* str never moved, so still points to start */
}
