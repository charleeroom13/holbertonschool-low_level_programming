#include "main.h"
#include <stddef.h> /* where NULL is defined */

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to first c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /* walks until end of string */
	{
		if (*s == c) /* first match, stops and returns address of that char */

			return (s);
		s++;
	}

	/**
	 * searching for end marker
	 * loop stops before checking '\0'
	 * and real library function finds it
	 * so this keeps same behaviour
	 * s is now pointing at '\0'
	 */

	if (c == '\0')

		return (s);

	return (NULL); /* loop finished and nothing matched */
}
