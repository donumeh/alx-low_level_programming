#include "main.h"

/**
 * _calloc - allocates a memory to an array using malloc
 * @nmemb: the byte size of allocate
 * @size: the data type
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, nb;
	char *a, *b;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	nb = nmemb * size;
	a = b = malloc(nb);
	if (a != NULL)
	{
		for (i = 0; i < nb; i++)
		{
			*a++ = 0;
		}
	}
	else
		return (NULL);
	return (b);
}
