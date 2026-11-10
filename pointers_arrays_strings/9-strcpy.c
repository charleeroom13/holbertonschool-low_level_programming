#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer dest
 * @dest: buffer to copy into
 * @src: string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0') /* keep copying until reach end marker */
	{
		dest[i] = src[i]; /* copy one char from src into dest */
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
