#include "main.h"

/**
 * print_diagsums - sums up digits in an array
 * @a: the array of ints digits
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
