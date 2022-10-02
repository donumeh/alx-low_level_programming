#include "main.h"

/**
 * _strncat - concats two strings according to bytes
 * @dest: destination of the strings
 * @src: source of the string
 * @n: the bytes to concat
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len, j = 0;

	while (dest[i])
		i++;
	while (src[j])
		j++;

	if (n > j)
		n = j;
	len = i;

	for (i = 0; i < n; i++)
		dest[len++] = src[i];
	dest[len] = '\0';
	return (dest);
}
