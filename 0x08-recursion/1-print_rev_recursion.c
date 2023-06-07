#include "main.h"
#include <string.h>

void print_rev(char *s, int num);
/**
 * _print_rev_recursion - prints a string backwards
 * @s: the string to print backwards
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int num = strlen(s) - 1;

	print_rev(s, num);
}

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * @num: the number of characters in the string
 *
 * Return: void
 */

void print_rev(char *s, int num)
{
	if (num < 0)
		return;
	_putchar(s[num]);
	print_rev(s, num - 1);
}
