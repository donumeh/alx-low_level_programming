#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the checking string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, value;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		value = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				value = 1;
			}
		}
		if (value == 0)
			return (c);
	}
	return (0);
}
