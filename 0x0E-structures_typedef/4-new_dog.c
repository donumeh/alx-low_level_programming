#include "dog.h"

/**
 * new_dog - prints the elements of a structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *a_dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	a_dog = malloc(sizeof(dog_t));
	if (a_dog == NULL)
		return (NULL);

	a_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (a_dog->name == NULL)
	{
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}

	a_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (a_dog->owner == NULL)
	{
		free(a_dog->owner);
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}

	_strcpy(a_dog->name, name);
	_strcpy(a_dog->owner, owner);
	a_dog->age = age;

	return (a_dog);
}

/**
 * _strlen - checks the length of a string
 * @s: the string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies a string from source to dest
 * @dest: destination of string
 * @src: the source of the string
 * Return: Always 0.
 */
int _strcpy(char *dest, char *src)
{
	int len1, i;

	len1 = _strlen(src);

	for (i = 0; i < len1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (0);
}
