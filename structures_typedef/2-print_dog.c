#include "dog.h" /* struct dog */
#include <stdio.h> /* printf */
#include <stddef.h> /* NULL */

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL) /* come first so we don't dereference a null pointer */
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	else /* %s: prints a string from a char * */
		printf("Name: %s\n", d->name);

	/* no NULL checck: age is number, not pointer, so can’t be NULL */
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
