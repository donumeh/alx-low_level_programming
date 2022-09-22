#include "main.h"

/**
 * reverse_array - reverses an array of int
 * @n: sizeof array
 * @a: the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, store;


	j = n / 2;
	for (i = 0; i < j; i++)
	{
		store = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = store;
	}
}
