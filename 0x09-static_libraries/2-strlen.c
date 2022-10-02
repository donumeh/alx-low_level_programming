#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the char arg or string passed to it
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
