#include "variadic_functions.h"

int str_count(const char *s);
/**
 * print_all - prints a variadic num of args
 * @format: has format specifier to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0, j = 0, n = 0;

	va_start(args, format);
	i = str_count(format);
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				/* Ignore other characters */
				n = 1;
				break;
		}
		if ((format[j] != format[i - 1]) && n == 1)
		{
			printf(", ");
			n = 0;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}

/**
 * str_count - counts a string
 * @s: the string
 *
 * Return: number of chars
 */
int str_count(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
