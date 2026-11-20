#include "dog.h"
#include <stdlib.h>

/**
 * str_copy - makes a copy of a string in new memory
 * @s: string to copy
 *
 * Return: pointer to the copy, or NULL if s is NULL or malloc fails
 */
static char *str_copy(char *s) /* static: private helper function */
{
	char *copy;
	unsigned int len = 0, i;

	if (s == NULL)
		return (NULL);

	while (s[len] != '\0') /* counts letters */
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++) /* copies 1 byte at a time */
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t)); /* malloc #1 reserves one dog_t block */
	if (d == NULL)
		return (NULL);

	d->name = str_copy(name); /* malloc #2 stores a copy of text */
	d->age = age;
	d->owner = str_copy(owner);

	/**
	 * (name && !d->name): short way to write name:
	 * != NULL && d->name == NULL
	 * means “there was a name to copy, but the copy came back NULL”
	 * !p is true when the pointer p is NULL
	 * a plain p is true when it isn’t NULL
	 */

	if ((name && !d->name) || (owner && !d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	return (d); /* hands back the new dog */
}
