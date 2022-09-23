#include "main.h"

/**
 * _strcmp - compares two strings together
 * @s1: the first (char *) string
 * @s2: the second (char *) string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, comp = 0;

	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] != s2[j + i])
			{
				comp = s1[i] - s2[j];
				return (comp);
			}
			else if (s1[i] == s2[i + j])
			{
				break;
			}
			j++;
		}
		i++;
	}
	return (0);

}
