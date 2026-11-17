#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new copy of a string
 * @str: string to copy
 *
 * Return: pointer to the copy, or NULL if str is NULL or malloc fails
 */

char *_strdup(char *str)
{
	char *copy; /* copy is new memory */
	unsigned int len = 0; /* len is length of str */
	unsigned int i = 0; /* i is copy counter */

	if (str == NULL) /* NULL in gives NULL out */
		return (NULL); /* also stops us reading str[0] from nothing */

	while (str[len] != '\0') /* counts characters, our version of strlen */
		len++;

	copy = malloc((len + 1) * sizeof(char)); /* one extra byte for \0 */

	if (copy == NULL) /* return NULL if not enough memory*/
		return (NULL); /* and protects copy loop from writing into nothing */

	while (i <= len) /* goes one step past last letter so \0 is copied too */
	{
		copy[i] = str[i];
		i++;
	}

	/**
	 * gives back start of new block
	 * test main frees it with free(s
	 */

	return (copy);
}
