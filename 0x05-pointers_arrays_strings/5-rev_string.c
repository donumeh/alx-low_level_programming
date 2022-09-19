#include "main.h"

/**
 * rev_string - reverse a string
 * @s: accepts a char arg
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j;
	char d[30];

	while (*(s + i))
		i++;
	for (j = 0; j < i; j++, i--)
	{
		d[j] = *(s + i);
	}

	for (j = 0; j < i; j++)
	{
		*(s + j) = d[j];
	}
	*(s + j) = '\n';
}
