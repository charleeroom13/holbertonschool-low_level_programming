#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: string to add to
 * @src: string to copy from
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /* position in dest */
	int j = 0; /* position in src */

	while (dest[i] != '\0') /* where new chars get added (finding end of list) */
		i++;

	/**
	 * this is the only difference from _strcat
	 * j < n is checked first, so we never read past n bytes
	 * that's why src does't need a \0 if it has n or more bytes
	 */

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j]; /* i + j moves forward as j grows */
		j++;
	}

	dest[i + j] = '\0'; /* without this, dest have no end */

	return (dest); /* task wants start of dest, dest never moved (used indexes) */
}
