#include "dog.h" /* brings in struct dog */
#include <stddef.h> /* brings in NULL */

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * struct dog *d: d holds address of caller’s struct
 * C passes copies
 * if we passed struct itself, we’d fill in a copy
 * and original my_dog would stay unset
 * with address, write into real one
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* safety guard */
		return; /* no value is fine bc function is void */

	d->name = name; /* same as (*d).name */
	d->age = age; /* plain copy of the number */
	d->owner = owner;
}
