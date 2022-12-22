#include "variadic_functions.h"

/**
 * print_all - prints a variadic num of args
 * @format: has format specifier to print
 *
 * Return: void
 */
void print_all(const char* format, ...)
{
	va_list args;
	char *s;
	int i = 0, j = 0;

	va_start(args, format);

	while (format[i])
		i++;
	
	while (format[j])
	{
		char type = format[j];
		switch (type)
		{
			case 'c':
				{
					char c = (char)va_arg(args, int);
					printf("%c", c);
					break;
				}
			case 'i':
				{
					int i = va_arg(args, int);
					printf("%d", i);
					break;
				}
			case 'f':
				{
					double f = va_arg(args, double);
					printf("%f", f);
					break;
				}
			case 's':
				{
					s = va_arg(args, char*);
					if (s == NULL)
					{
						printf("(nil)");
					}
					if (s != NULL)
					{
						printf("%s", s);
					}
					break;
				}
			default:
				{
					/* Ignore other characters */
					break;
				}
		}
		if (format[j] != format[i - 1])
			printf(", ");

		j++;
	}
	va_end(args);
	printf("\n");
}

