#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first int
 * @b: pointer to the second int
 */

void swap_int(int *a, int *b)
{
	int tmp; /* a spare box to hold one value while we swap */

	tmp = *a; /* read value at a's address and save it */
	*a = *b; /* copy b's value into a's spot. Old value of a is safe in tmp */
	*b = tmp; /* put saved value into b's spot */

	/**
	 * without tmp, *a = *b; overwrite a's value and lose it
	 * Why pointers: C passes copies,
	 * so only addresses let we change caller's a and b
	 */

}
