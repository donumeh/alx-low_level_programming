#include "main.h"

/**
 * puts2 - prints every other string
 * @str: args that collects input of string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j;

	while (*(str + i))
		i++;

	j = 0;
	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
