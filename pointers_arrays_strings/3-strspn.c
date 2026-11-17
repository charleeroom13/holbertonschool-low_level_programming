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
	/**
	 * "count" does two jobs
	 * it is the position in s and the answer
	 * it only goes up while characters pass the check
	 * so it is length of prefix when you stop
	 */

	unsigned int count = 0;
	unsigned int i; /* i walks along accept, which is guest list */
	int found; /* yes/no flag (1 or 0), reset to 0 for every new character of s */

	while (s[count] != '\0') /* goes through s until end of string */
	{
		found = 0;
		i = 0;

		while (accept[i] != '\0') /* checks current character of s against every character in accept */
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break; /* one match is enough, no need to keep looking */
			}

			i++;
		}

		/**
		 * outside inner loop, so it leaves outer loop
		 * first character that isn't on list ends count
		 * !found means "found is 0"
		 */

		if (!found)
			break;

		count++; /* runs when character was found, so it counts next accepted character */
	}

	return (count); /* gives back length. For "hello, world" and "oleh" that is 5, because , is not in the list */
}
