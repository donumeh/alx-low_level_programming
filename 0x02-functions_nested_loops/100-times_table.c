#include "main.h"

/**
 * print_times_table - prints the times table up to
 * the value passed to it
 * @n: accepts the value as in int
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = j * i;
			if (j == 0)
				_putchar(mul + '0');
			if (mul <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul >= 10 && mul < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if (mul >= 100 && mul < 1000)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((mul / 10) / 10) + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
