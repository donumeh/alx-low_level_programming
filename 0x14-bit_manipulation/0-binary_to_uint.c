#include "main.h"

/**
 * binary_to_uint - converts binary to number
 * @b: binary
 *
 * Return: int value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pos = 1, binary;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;
	binary = 0;
	while (len >= 0)
	{
		binary = b[len] - '0';
		if (binary != 1 && binary != 0)
			return (0);
		if (binary == TRUE)
			num += pos;
		else
			num += 0;
		pos *= 2;
		len--;
	}

	return (num);
}
