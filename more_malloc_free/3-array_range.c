#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value
 * @max: last value
 *
 * Return: pointer to the new array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr; /* function returns a pointer to first int */
	int i, size;

	if (min > max) /* so we never allocate impossible range */
		return (NULL);

	size = max - min + 1; /* + 1 is cos both ends are included*/
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
