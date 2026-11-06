#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c) /* returns an int and takes one int */
{
	if (c >= 'a' && c <= 'z')

		return (1); /* sends 1 back to caller and leaves function */

	return (0); /* reached only if "if" didn't fire, so c is't lowercase */
}
