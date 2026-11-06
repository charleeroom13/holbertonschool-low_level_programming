#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	/**
	* lowercase range, 97 to 122. uppercase range, 65 to 90
	* using || (or) bc either range being true is enough
	*/

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	return (0);
}
