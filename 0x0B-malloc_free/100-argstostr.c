#include "main.h"

/**
 * argstostr - concatenates args to string
 * @ac: number of args passed
 * @av: the strings passed
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, size1 = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[j] != '\0'; j++)
		{
			size1++;
		}
	}

	array = malloc(sizeof(char) * (size1 ));
	if (array == NULL)
	{
		return (NULL);
	}




}
