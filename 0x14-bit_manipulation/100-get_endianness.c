#include "main.h"

/**
 * get_endianness - verify what endianness the architecture uses
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 40;
	char *ptr = (char *)&n;

	return ((*ptr == 1) ? 0 : 1);
}
