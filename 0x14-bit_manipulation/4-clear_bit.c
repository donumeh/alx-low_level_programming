#include "main.h"

/**
 * clear_bit - clears a bit at an index
 * @n: the value to modify
 * @index: the position to change the bit
 *
 * Return: 1 if success, -1 if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
