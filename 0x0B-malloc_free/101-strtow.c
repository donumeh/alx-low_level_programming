#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to be splited
 * Return: char
 */
char **strtow(char *str)
{
	int i = 0, j, count = 0, u, subcount = 0;
	char **array;
	int c, d;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[i++])
	{
		if (str[i] != 32)
		{
			while(str[i++])
			{
				if (str[i] == ' ')
				{
					count++;
					break;
				}
			}
		}
	}

	array = (char **)malloc((sizeof(char *) * count) + 1);
	if (array == NULL)
		return (NULL);

	for (j = 0, u = 0; j < count; j++)
	{
		subcount = 0;
		while (str[u])
		{
			if (str[u] != 32)
			{
				c = u;
				subcount++;
				while (str[++u] != ' ')
				{
					subcount++;
				}
				if (str[u] == ' ')
				{
					d = u;
					break;
				}
			}
			u++;
		}

		array[j] = malloc((sizeof(char) * subcount) + 1);
		if (array[j] == NULL)
			return (NULL);

		for (i = 0; i < subcount && c <= d; i++)
		{
			array[j][i] = str[c++];
		}
	}
	return (array);
}
