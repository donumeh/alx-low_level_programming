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
	int i, flag, j;
	char *string;

	i = 0;
	va_start(ap, format);
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
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				j = 0;
				while (string[j] != '\0')
				{
					printf("%c", string[j]);
					j++;
				}
				break;
		}
		if (flag == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(ap);
}
