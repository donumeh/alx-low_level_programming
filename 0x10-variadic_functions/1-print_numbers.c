#include "variadic_functions.h"

/**
 * print_numbers - print the numbers followed by a new line
 * @separator: the separator
 * @n: the number of args passed
 *
 * Return: print some numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n <= 0)
		return;
	va_start(ap, n);
	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
