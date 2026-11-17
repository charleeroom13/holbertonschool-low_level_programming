#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to look for
 *
 * Return: pointer to first byte in s that is in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0') /* goes through s one char at a time */
	{
		/**
		 * i = 0:
		 * restarts the walk along accept for every new character of s
		 * without it, i would carry on from last character's position
		 */

		i = 0;

		while (accept[i] != '\0') /* compares */
		{
			if (*s == accept[i])
				return (s);
			i++;
		}

		s++; /* moves to next char only when nothing in accept matched */
	}

	return (NULL); /* runs only if outer loop reached end of s without match */
}
