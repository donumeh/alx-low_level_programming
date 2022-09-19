#include "main.h"

/**
 * puts_half - prints the latter half of strings
 * @str: char srgs that accepts string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, l, n, j;

	while (str[i])
		i++;
	l = i;

	if (i % 2 != 0)
		n = (l - 1) / 2;
	else if (i % 2 == 0)
		n = l / 2;

	for (j = n; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
