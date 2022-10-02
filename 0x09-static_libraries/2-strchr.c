#include "main.h"

/**
 * _strchr - runs through a strings and searches
 * for the first occurance of a char
 * @s: the string
 * @c: the byte value to search for
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
