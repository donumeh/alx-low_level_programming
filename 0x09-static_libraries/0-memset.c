#include "main.h"

/**
 * _memset - copies constant byte into buffer
 * @s: the char pointer buffer to copy into
 * @b: the byte to copy
 * @n: the size of buffer
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
