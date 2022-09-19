#include "main.h"

/**
 * swap_int - swaps two args
 * @a: the first arg
 * @b: the second arg
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
