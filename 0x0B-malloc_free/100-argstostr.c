#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all args passed to program
 * @ac: the number of args passed
 * @av: the strings passed to program
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, s;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (j = 0; j < ac; j++)
		for (i = 0; av[j][i] != '\0'; i++)
			len++;

	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	s = 0;
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
			str[s++] = av[j][i];
		str[s++] = '\n';
	}
	str[s] = '\0';

	return (str);
}
