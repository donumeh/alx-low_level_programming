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
	int i = 0, num = 0, flag = 0;
	char *string, character;
	double decimal;

	va_start(ap, format);
	while (format[i])
	{
		flag = 0;
		switch (format[i++])
		{
			case 'c':
				character = va_arg(ap, int);
				flag = printf("%c", character);
				break;
			case 'i':
				num = va_arg(ap, int);
				flag = printf("%d", num);
				break;
			case 'f':
				decimal = va_arg(ap, double);
				flag = printf("%f", decimal);
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					flag = printf("(nil)");
					break;
				}
				flag = printf("%s", string);
				break;
		}
		if ((format[i + 1] != '\0') && flag)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
