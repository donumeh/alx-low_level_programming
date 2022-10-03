#include "main.h"

/**
 * _strdup - copies a string into a pointer using malloc
 * in order to have read and write access
 * @str: the string
 * Return: char pointer or NULL if malloc fails
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *array;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	array = malloc((sizeof(char) * size) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';

	return (array);
}
