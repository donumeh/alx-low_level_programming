#include "dog.h"

/**
 * free_dog - frees the memory storage of dog details
 * @d: the structure or object of dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
