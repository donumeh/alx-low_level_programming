#include "main.h"

/**
 * _strncpy - copies strings according to bytes to dest
 * @dest: the dest string to be copy into
 * @src: the source of the string to copy from
 * @n: the bytes to copy
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j, len;

	while (src[i])
		i++;

	len = i;

	for (j = 0; j < n && j < len; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
