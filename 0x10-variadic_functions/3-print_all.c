#include "variadic_functions.h"

/**
 * print_all - function that printts anything
 * @format: the string with specifiers
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, flag;
	char *string = NULL;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 1;
				break;
			case 's':
				flag = 1;
				string = va_arg(ap, char *);
				if (string == NULL)
					string = "(nil)";
				i = 0;
				while (string[i] != '\0')
				{
					printf("%c", string[i]);
					i++;
				}
				break;
		}
		if ((format[i + 1] != '\0') && (flag == 1))
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(ap);
}
