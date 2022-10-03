#include "main.h"

/**
 * create_array - creates an array and prints a char into the buffer
 * @size: the size of array
 * @c: the char
 * Return: NULL if it fails; char pointer if it works
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
