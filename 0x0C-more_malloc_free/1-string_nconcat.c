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
	unsigned int len1, len2, i, byte_copy = n;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		while (*s1)
			str[i++] = *s1++;
		while (*s2 && byte_copy--)
			str[i++] = *s2++;
		if (i == ((len1 + n) - 1))
			str[i] = '\0';
	}

	return (str);
}
