#include "function_pointers.h"

/**
 * int_index - returns the position of first positive comparison
 * @array: the array of int
 * @size: size of the array
 * @cmp: function to instigate the comparison
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
