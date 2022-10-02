#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes
 * @s: the string
 * @accept: another string
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
