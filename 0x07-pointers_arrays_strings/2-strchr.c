#include "main.h"

/**
 * _strchr - runs through a strings and searches
 * for the first occurance of a char
 * @s: the string
 * @c: the byte value to search for
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
