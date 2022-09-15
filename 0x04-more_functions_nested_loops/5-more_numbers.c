#include "main.h"

/**
 * more_numbers - prints from 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n < 15; n++)
	{
		if (n < 10)
			_putchar(n + '0');
		else if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
