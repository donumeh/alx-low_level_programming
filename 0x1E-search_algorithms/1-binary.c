#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: the sorted array to search
 * @size: the size of the array to search
 * @value: the value to search for in the array
 *
 * Return: -1 if value not found and index if found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		size_t middle = (left + right) / 2;
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
			return (middle);
	}

	return (-1);

}
