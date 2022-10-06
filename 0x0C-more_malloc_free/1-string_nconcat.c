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
	unsigned int i = 0, len, j, u;
	char *array;

	while (s1[i] != '\0')
		i++;
	len = i;

	i = 0;
	while (s2[i] != '\0')
		i++;

	if (n >= i)
		n = 0;
	if (n == 0)
		s2 = "";

	array = malloc(sizeof(*array) * (len + n));
	if (array == NULL)
		return (NULL);

	for (j = 0; j < (len + n) && s1[j] != '\0'; j++)
	{
		array[j] = s1[j];
	}

	for (u = 0; j < (len + n) && u < n; j++, u++)
	{
		array[j] = s2[u];
	}
	array[j] = '\0';

	return (array);
}
