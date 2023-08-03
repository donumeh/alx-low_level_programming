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
/**	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
*/
	n >>= index;
	return (n & 1 ? 1 : 0);
}
