#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 *
 * char *dest, char *src:
 * two memory areas, read from src and write to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /* counter, matches n's type */

	while (i < n) /* copies exactly n bytes and then stops */
	{
		dest[i] = src[i]; /* copies one byte, use same i, move along together */
		i++;
	}

	return (dest);
}
