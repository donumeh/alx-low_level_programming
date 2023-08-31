#include "main.h"

/**
 * get_bit - gets the bit at an index
 * @n: the number to get the bit from
 * @index: the index to get bit at
 *
 * Return: int (the bit)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n >>= index;
	return (n & 1);
}
