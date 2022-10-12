#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - prints a char
 * @c: accepts a char
 *
 * Return: an int
 */
int _putchar(char c)
{
	write(1, &c, 1);
:x
