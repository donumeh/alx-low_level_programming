#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: the binary in char
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, count = 0, mul = 0;

	while (b[i])
		i++;
	i--;

	while (i >= 0)
	{
		mul = _pow(2, count);
		if (b[i] == '1')
		{
			num += (1 * mul);
		}
		else if (b[i] == '0')
		{
			num += (mul * 0);
		}
		else
		{
			num = 0;
			break;
		}
		count++;
		i--;
	}

	return (num);
}


/**
 * _pow - calculates the exponent value
 * @a: the first int
 * @b: the second int
 *
 * Return: the power
 */

int _pow(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * _pow(a, b - 1));
}
