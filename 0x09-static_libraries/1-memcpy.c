#include "main.h"

/**
 * _memcpy - copy string from memory area into buffer
 * @dest: the buffer
 * @src: the memory area
 * @n: the amount or size in bytes of what to cpy
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
