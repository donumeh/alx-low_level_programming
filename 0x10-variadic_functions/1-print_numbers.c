#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passed as param
 * @separator: char pointer
 * @n: the number of param in variadic
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(ap, int));
		}
		else if (separator)
			printf("%d%s", va_arg(ap, int), separator);
		else if (!separator)
			printf("%d", va_arg(ap, int));
	}
	printf("\n");
}
