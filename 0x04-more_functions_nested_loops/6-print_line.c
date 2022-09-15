#include "main.h"

/**
 * print_line - prints lines
 * @n: accept an int arg
 * Return: void
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
