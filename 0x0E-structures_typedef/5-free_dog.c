#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to struct dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
