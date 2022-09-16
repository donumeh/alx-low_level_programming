#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: sizeof the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, si = size, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		si--;
		k = 0;
		for (j = 0; j < size; j++, k++)
		{
			if (k >= si)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
