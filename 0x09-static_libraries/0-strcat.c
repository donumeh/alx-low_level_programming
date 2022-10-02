#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: the destination of the strings
 * @src: the source of the string
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, len;

	while (src[i])
		i++;
	while (dest[j])
		j++;
	len = i;
	for (i = 0; i < len; i++)
		dest[j++] = src[i];

	return (dest);
}
