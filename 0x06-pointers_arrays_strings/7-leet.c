#include "main.h"

/**
 * leet - convert a string to leet code
 * @c: (char *) string to convert
 * Return: char
 */
char *leet(char *c)
{
	int i = 0, j;
	char *a = "aeotlAEOTL";
	char *b = "4307143071";

	while (c[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
