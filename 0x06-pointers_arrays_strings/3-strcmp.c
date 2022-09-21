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

	if (s1[i] != s2[j])
	{
		comp = s1[i] - s2[j];
	}
	else
		return (0);
	return (comp);

}
