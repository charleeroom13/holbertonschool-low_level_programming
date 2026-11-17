#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: byte to fill it with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0; /* unsigned int matches type of n */

	while (i < n) /* n bytes means positions 0 to n - 1 */
	{
		s[i] = b; /* s points to 1st byte, s[i] is byte i steps along */
		i++; /* moves to next byte */
	}

	return (s); /* s never moved because we used an index */
}
