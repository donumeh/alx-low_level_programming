#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the name to print
 * @f: the function pointer to use in printing
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
