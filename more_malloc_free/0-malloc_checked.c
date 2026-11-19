#include "main.h"
#include <stdlib.h> /* gives malloc, exit and NULL */

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory (exits with 98 on failure)
 */

 void *malloc_checked(unsigned int b)
{
    /**
     * void *:
     * as return type means “a pointer to any kind of memory”
     * malloc returns same type, so no cast is needed
     */

	void *p;

	p = malloc(b); /* asks for b bytes. b is already bytes */

	if (p == NULL) /* check for failure */
		exit(98);

	return (p);
}