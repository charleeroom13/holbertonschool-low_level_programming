#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: allowed characters
 *
 * Return: number of leading bytes of s that are all in accept
 * Notes are pushed to GitHub later so Betty is happy!
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i;
	int found;

	while (s[count] != '\0')
	{
		found = 0;
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break;
			}

			i++;
		}

		if (!found)
			break;

		count++;
	}

	return (count);
}
