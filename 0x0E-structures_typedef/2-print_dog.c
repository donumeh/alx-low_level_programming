#include "dog.h"

/**
 * print_dog - print the name of a dog
 * @d: the structure or object
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = strdup("(nil)");
	if (d->owner == NULL)
		d->owner = strdup("(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
