#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: the string to store in new memory block
 *
 * Return: block of new memory that contains string
 * or NULL if fails
 */

char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
	{
		len++;
	}

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
