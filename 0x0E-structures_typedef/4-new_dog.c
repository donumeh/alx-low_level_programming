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
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";
	my_dog->age = age;
	my_dog->name = strdup(name);
	my_dog->owner = strdup(owner);

	return (my_dog);
}
