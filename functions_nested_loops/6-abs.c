#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer
 *
 * Return: The absolute value of n
 */

int _abs(int n) /* names parameter n so body can use it */
{
	if (n < 0) /* only negative numbers need changing */

		return (-n); /* the minus flips the value */

	/**
	 * reached for zero and positive numbers,
	 * which are already their own absolute value
	 */

	return (n);
}
