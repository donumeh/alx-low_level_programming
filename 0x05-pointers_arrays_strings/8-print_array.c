#include "main.h"

/**
 * print_array - prints the array (int)
 * @a: array address
 * @n: the size of array
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
