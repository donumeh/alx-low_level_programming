#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to concatenate
 *
 * Return: new block of memory containing the string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, len1, len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	len1--;
	while (s2[len2])
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
		new_str[i] = s1[i];
	for (i = 0; i < len2; i++)
		new_str[++len1] = s2[i];

	return (new_str);
}
