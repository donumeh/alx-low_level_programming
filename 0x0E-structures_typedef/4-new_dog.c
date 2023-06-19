#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: struct pointer to new dog details
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	if (name == NULL)
		my_dog->name = strdup("(nil)");
	else
		my_dog->name = strdup(name);
	if (owner == NULL)
		my_dog->owner = strdup("(nil)");
	else
		my_dog->owner = strdup(owner);

	my_dog->age = age;

	return (my_dog);
}
