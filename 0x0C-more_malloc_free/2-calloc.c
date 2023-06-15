#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: size of datatype
 * @size: number of byte of datatype
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	char *ptr_char = NULL;
	unsigned int i, b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	ptr = malloc(b);
	if (ptr == NULL)
		return (NULL);

	ptr_char = (char *)ptr;
	for (i = 0; i < b; i++)
		ptr_char[i] = 0;

	return (ptr);
}
