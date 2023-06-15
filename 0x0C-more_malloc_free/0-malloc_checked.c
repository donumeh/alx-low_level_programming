#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	return (ptr);

}
