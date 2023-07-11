#include "main.h"

/**
 * get_bit - get the bit at position
 * @n: the int
 * @index: the position of bit to print
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
