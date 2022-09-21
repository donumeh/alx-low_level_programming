#include "main.h"

/**
 * rot13 - convert a string to rot13 encoding
 * @c: string args (char *)
 * Return: char
 */
char *rot13(char *c)
{
	int i = 0, j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i])
	{
		for (j = 0; j < 52; j++)
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
