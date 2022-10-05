#include "main.h"

/**
 * argstostr - concatenates args to string
 * @ac: number of args passed
 * @av: the strings passed
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, strct = 0, j, v;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strct++;
		}
	}

	array = malloc((sizeof(char) * (strct + ac)) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0, v = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[v++] = av[i][j];
		}
		array[v++] = '\n';
	}
	array[v] = '\0';



	return (array);
}
