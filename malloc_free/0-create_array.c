#include "main.h"
#include <stdlib.h> /* brings in  malloc and NULL */

/**
 * create_array - creates an array of chars and fills it with a char
 * @size: size of the array
 * @c: char to fill the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr; /* arr holds new memory's address */
	unsigned int i = 0; /* matches type of size */

	if (size == 0) /* malloc(0) is allowed to return a real pointer... */

		return (NULL); /* ...so we must catch it ourselves */

	arr = malloc(size * sizeof(char)); /* safe habit for any type */

	if (arr == NULL) /* check from slides, "never trust anyone" */

		/**
		 * if malloc failed, writing into arr would crash
		 * returning NULL tells caller it failed
		 */

		return (NULL);

	while (i < size) /* writes c into every spot */
	{
		arr[i] = c;
		i++;
	}

	/**
	 * gives back start of block. Caller frees it
	 * test's main does free(buffer)
	 */

	return (arr);
}
