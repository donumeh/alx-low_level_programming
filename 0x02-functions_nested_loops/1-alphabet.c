#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
		_putchar(alpha++);
	_putchar('\n');
}
