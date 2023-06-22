#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the separator of the strings
 * @n: the number of values passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string = NULL;
	unsigned int i, len;
	va_list ap;
	va_list copy;

	va_start(ap, n);
	va_start(copy, format);
	va_copy(copy, ap);
	for (i = 0; i < n; i++)
	{
		len = strlen(va_arg(ap, char *));
		string = malloc(sizeof(char) * (len + 1));
		if (string == NULL)
			exit(EXIT_FAILURE);

		strcpy(string, va_arg(copy, char *));
		if (string == NULL)
			strcpy(string, "(nil)");
		printf("%s", string);

		if ((separator != NULL) && i != (n - 1))
			printf("%s", separator);
		free(string);
	}
	printf("\n");

	va_end(copy);
	va_end(ap);
}
