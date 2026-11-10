#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len; /* counter */

	len = 0; /* counter */

	/**
	 * keep going until reaching end marker
	 * every C string ends with '\0'
	 */

	while (s[len] != '\0')

		len++;

	return (len);
}
