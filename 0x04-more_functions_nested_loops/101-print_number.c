#include "main.h"

/**
 * print_number - prints an int
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n < 10)
		_putchar(n + '0');
	if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 100 && n < 1000)
	{
		_putchar(((n / 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 1000)
	{
		_putchar(((n / 100) / 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
