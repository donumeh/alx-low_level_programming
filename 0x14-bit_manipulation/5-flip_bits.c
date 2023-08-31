#include "main.h"

/**
 * flip_bits - flip bits to get to a num
 * @n: the number/bits to flip
 * @m: the number to derive
 *
 * Return: unsigned int (number of flips to make)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips;
	int n_copy, m_copy;

	n_copy = m_copy = flips = 0;
	while (n)
	{
		n_copy = n & 1;
		m_copy = m & 1;

		if (n_copy != m_copy)
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
