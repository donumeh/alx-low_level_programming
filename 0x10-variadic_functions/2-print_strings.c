#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: a separator string
 * @n: number of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (!n)
		return;
	va_start(ap, n);

	for (i = 0; i <= n - 1; i++)
	{
		char *s = va_arg(ap, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");
	}
	va_end(ap);
}
