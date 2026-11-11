#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = 0;

	/**
	 * finds the end of dest
	 * after it, dest_len is index of dest's '\0',
	 * where new text should start (overwriting that marker)
	 */

	while (dest[dest_len] != '\0')
		dest_len++;

	i = 0;

	while (src[i] != '\0') /* walkthrough src */
	{
		/**
		 * copy each src character after the old end of dest
		 */

		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0'; /* loop stops before src's marker, so add here */
	return (dest); /* returns start of joined string. dest itself never moved */
}
