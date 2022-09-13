#include "main.h"

/**
 * times_table - prints out the times_table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
		mul = 0;
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				_putchar('0');
			else
			{
				mul += i;
				if (mul >= 10)
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				_putchar(mul + 10);
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
