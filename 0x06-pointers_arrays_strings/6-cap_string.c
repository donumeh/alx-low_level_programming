#include "main.h"

/**
 * cap_string - capitalizes any char after a delimiter
 * @c: (char *) char args
 * Return: char value
 */
char *cap_string(char *c)
{
	char delim[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};
	int i = 0, j;

	while (c[i])
	{
		for (j = 0; j < 14; j++)
		{
			if (c[i] == delim[j])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				{
					c[i + 1] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (c);
}
