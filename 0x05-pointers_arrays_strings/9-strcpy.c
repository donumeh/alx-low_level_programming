#include "main.h"

/**
 * _strcpy - copies a string into a buffer
 * @dest: destination of the string (char *)
 * @src: source of the string (char *)
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j, len;

	while (src[i])
		i++;

	len = i;
	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
