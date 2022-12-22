#include "variadic_functions.h"

/**
 * print_all - prints a the variable number of arguments
 * from a variadic function
 * @format: a string holding some format specifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *s;

	/* string character count */
	while (format[i])
		i++;

	/* start variadic function */
	va_start(ap, format);

	/* loops through the string (format) for specifiers */
	while (format[j])
	{
		/* switch statement to check for specidiers */
		switch(format[j])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char*);

				/* check if string is null */
				if (s == NULL)
					printf("(nil");
				else
					printf("%s", s);
				break;
		}

		/* prints delimiter */
		if (format[j] != format[i - 1])
			printf(", ");
		j++;
	}
	printf("\n");
}
