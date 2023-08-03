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
	n >>= index;
	if (n == 0)
		return (-1);
	return (n & 1);
}
