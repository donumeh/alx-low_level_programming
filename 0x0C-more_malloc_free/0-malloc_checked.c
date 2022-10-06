#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int (byte size to allocate)
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *array;
	
	array = malloc(sizeof(*array) * b);
	if (array == NULL)
		exit(98);
	return ((void *)array);
}
