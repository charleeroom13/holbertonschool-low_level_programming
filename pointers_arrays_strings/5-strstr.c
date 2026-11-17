#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to start of needle in haystack, or NULL
 * Notes are pushed later to GitHub so Betty is happy!
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	while (*haystack != '\0')
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;

		if (needle[i] == '\0')

			return (haystack);

		haystack++;
	}

	if (*needle == '\0')

		return (haystack);

	return (NULL);
}
