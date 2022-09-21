#include "main.h"

/**
 * string_toupper - converts a lowercase string to uppercase
 * @c: (char *) arg
 * Return: char
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
