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
	char *string = NULL, *arg = NULL;
	unsigned int i, len;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = strlen(va_arg(ap, char *));
		len = strlen(string);
		string = malloc(sizeof(char) * (len + 1));
		if (string == NULL)
			exit(EXIT_FAILURE);

		strcpy(string, arg);
		if (string == NULL)
			strcpy(string, "(nil)");
		printf("%s", string);

		if ((separator != NULL) && i != (n - 1))
			printf("%s", separator);
		free(string);
	}
	printf("\n");

	va_end(ap);
}
