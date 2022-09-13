#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @n: accepts an integer arg
 * Return: last digit of the int
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -(n % 10);
	else
		r = n % 10;
	_putchar(r + '0');
	return (r);
}
