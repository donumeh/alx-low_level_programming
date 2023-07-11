#include "main.h"

/**
 * set_bit - set a bit at an index
 * @n: the integer
 * @index: the index value
 *
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
