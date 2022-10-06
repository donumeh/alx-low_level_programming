#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int (byte size to allocate)
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
