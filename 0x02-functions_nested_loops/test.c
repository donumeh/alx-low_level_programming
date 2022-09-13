#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int r;

	r = INT_MIN % 10;
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
