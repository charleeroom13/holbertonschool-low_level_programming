#include "main.h"

/**
 * reset_to_98 - updates value an int pointer points to to 98
 * @n: pointer to int to update
 */

void reset_to_98(int *n)
{
	*n = 98; /* * follows address in n and writes 98 into caller's variable
		  * This is why we pass &n in main
		  * Without *, we only change local copy of address
		  */
}
