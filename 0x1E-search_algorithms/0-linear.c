#include "search_algos.h"

/**
 * linear_search - linear search algorithms
 * @array: the pointer to the first mem of array
 * @size: the size of the entire array
 * @value: the value to find
 *
 * Return: index of the first occurrence of value and -1 on error
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || *array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		dprintf(
				1,
				"Value checked at array[%ld] = [%d]\n",
				i,
				array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
