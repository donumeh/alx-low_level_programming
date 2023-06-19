#include "dog.h"

char *_strcpy(char *, char *);
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

	if (name == NULL)
	{
		name = malloc(sizeof("(nil)"));
		if (name == NULL)
			return (NULL);
		_strcpy(name, "(nil)");
	}
	if (owner == NULL)
	{
		owner = malloc(sizeof("(nil)"));
		if (owner == NULL)
			return (NULL);
		_strcpy(owner, "(nil)");
	}

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(name));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = strdup(name);

	my_dog->owner = malloc(sizeof(owner));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = strdup(owner);
	my_dog->age = age;

	return (my_dog);
}

/**
 * _strcpy - cpies a string to another
 * @dest: the destination of the string
 * @src: the source of the string
 *
 * Return: char *(pointer to the string)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
