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

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
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
