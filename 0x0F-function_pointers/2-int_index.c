#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of ints
 * @size: the size of the array
 * @cmp: the function used to compare
 *
 * Return: int (index of element in array that doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
