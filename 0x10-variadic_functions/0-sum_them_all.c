#include "variadic_functions.h"

/**
 * sum_them_all - sums all the args
 * @n: num of args
 *
 * Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list ap;

	if (n == 0)
		return (0);

	result = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}

	va_end(ap);
	return (result);
}
