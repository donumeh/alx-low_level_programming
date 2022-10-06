#include "main.h"

/**
 * _calloc - allocates a memory to an array using malloc
 * @nmemb: the byte size of allocate
 * @size: the data type
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
