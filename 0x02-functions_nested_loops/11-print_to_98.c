#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints whatever value is inputed to 98
 * @n: accepts a int value
 * Return: void
 */
void print_to_98(int n)
{
	int i; /* j; */
	
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
/**	if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	printf("%d\n", n);
	*/
}
