#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	/**
	 * only loops for half array
	 * each swap fixes two spots
	 * if we looped whole array, we'd swap everything back
	 * for 13 elements, 13 / 2 is 6 (integer division)
	 * so middle element is skipped, which is right
	 */

	while (i < n / 2)
	{
		tmp = a[i]; /* holds front value */

		/**
		 * back value moves to front
		 * last index is n - 1
		 * subtracting i walks back pointer inward as front one walks forward
		 */

		a[i] = a[n - 1 - i];

		a[n - 1 - i] = tmp; /* saved front value goes to back */

		i++; /* both ends step inward */
	}
}
