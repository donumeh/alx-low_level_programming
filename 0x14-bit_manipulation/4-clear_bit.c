#include "main.h"

/**
 * clear_bit - set a bit value at index to 0
 * @n: the integer
 * @index: the index
 *
 * Return: 1 if worked, -1 if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
