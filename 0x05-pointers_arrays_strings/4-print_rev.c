#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in rev
 * @s: accepts a string with char arg
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (*(s + i))
		i++;

	for (j = i; j >= 0; j--)
		write(1, &s[j], 1);
	write(1, "\n", 1);
}
