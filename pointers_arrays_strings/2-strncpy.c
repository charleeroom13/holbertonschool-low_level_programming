#include "main.h"

/**
 * _strncpy - copies a string, using at most n bytes
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to write to dest
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/**
	 * copies while there's room (i < n) and src has't ended
	 * checking i < n first means we never write past n bytes
	 */

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i]; /* copies one char */
		i++; /* then move on */
	}

	/**
	 * fills rest of n bytes with \0
	 * real strncpy pads with zeros
	 * test's hex dump checks this (0x00 run after copied text)
	 * if first loop stopped because i hit n, this loop does nothing
	 * so no \0 is added
	 */

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest); /* dest never moved (used indexes), it still points to start */
}
