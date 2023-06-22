#include "variadic_functions.h"

/**
 * print_all - function that printts anything
 * @format: the string with specifiers
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap, copy;
	int i, flag;

	i = 0;
	va_start(ap, format);
	va_start(copy, format);
	while (format[i])
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
				va_copy(copy, ap);
				if (va_arg(copy, char *) == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(ap, char *));
				break;
		}
		if (flag == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(copy);
	va_end(ap);
}
