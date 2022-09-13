#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints whatever value is inputed to 98
 * @n: accepts a int value
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d", n);

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d", i);
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d", i);
		}
	}
	printf("\n");
}
