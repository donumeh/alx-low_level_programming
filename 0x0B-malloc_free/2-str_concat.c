#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: char pointer string param
 * @s2: char pointer sting param2
 * Return: char or NULL if malloc doesn't return
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0, j;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	array = malloc((sizeof(char) * (size1 + size2)) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		array[i++] = s2[j];
	}
	array[i] = '\0';

	return (array);
}
