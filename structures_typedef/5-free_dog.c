#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: pointer to the dog to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name); /* frees the name copy (malloc #2) */
	free(d->owner); /* frees the owner copy (malloc #3) */
	free(d); /* frees the struct itself (malloc #1) */
}
