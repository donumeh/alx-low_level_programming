#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: a pointer to the value to change
 * @index: the index position to change at
 *
 * Return: 1 if it worked and -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
