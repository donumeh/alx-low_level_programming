#include "variadic_functions.h"

/**
 * print_strings - prints the strings
 * @separator: a char pointer to separate args
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	va_list bc;

	va_start(ap, n);
	va_copy(bc, ap);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			if (i == (n - 1))
				printf("%s", va_arg(bc, char *));
			else if (va_arg(ap, char *))
				printf("%s%s", va_arg(bc, char *), separator);
			else if (!va_arg(ap, char *))
				printf("(nil)");
		}
		else if (!separator)
		{
			if (va_arg(ap, char *))
				printf("%s", va_arg(bc, char *));
			else if (!va_arg(ap, char *))
				printf("(nil)");
		}
	}
	va_end(ap);
	va_end(bc);
	printf("\n");
}
