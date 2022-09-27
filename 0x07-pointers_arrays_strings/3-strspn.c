#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the checking string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, value = 0;

	while (accept[i])
	{
		while (s[j])
		{
			if (accept[i] == s[j])
			{
				return (j + 1);
				break;
			}
			j++;
		}	
		i++;
	}
}
