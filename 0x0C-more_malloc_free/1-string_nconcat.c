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
	unsigned int i, j = 0, len1, len2;
	char *array;

	if (*s1 == '\0')
	{
		s1 = "";
	}
	if (*s2 == '\0')
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	array = malloc(sizeof(s1) * n);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	for (j = 0; j < n; j++)
		array[i++] = s2[j];
	
	array[i] = '\0';
	return (array);

}
