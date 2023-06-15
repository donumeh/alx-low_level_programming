#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to join
 * @n: the bytes to add
 *
 * Return: char or block to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, bytes;
	char *str = NULL;

	/* checks if the strings are null */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* finds the length of the string */
	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;

	/* If bytes more than second string then use entire string */
	if (n >= len2)
		n = len2;

	bytes = n + len1 + 1;
	str = malloc(sizeof(char) * bytes);
	if (str == NULL) /* checks if malloc initializes or fails */
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; i < bytes && j < n; i++, j++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
