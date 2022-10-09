#include "main.h"

/**
 * string_nconcat - concatenates two strings together
 * @s1: the first string
 * @s2: the second string
 * @n: byte size to copy
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *array;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		array = malloc(sizeof(char) * (len1 + n + 1));
	else if (n >= len2)
		array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!array)
		return (NULL);

	while (i < len1)
	{
		array[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		array[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		array[i++] = s2[j++];

	array[i] = '\0';

	return (array);
}
