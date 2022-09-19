#include "main.h"
#include <unistd.h>

/**
 * _puts - prints the strings from args
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
