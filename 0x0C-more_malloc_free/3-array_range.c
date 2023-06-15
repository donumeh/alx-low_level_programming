#include "main.h"

/**
 * array_range - creates an int array of min to max
 * @min: the starting num of int
 * @max: the highest num of int
 *
 * Return: int pointer to array
 */

int *array_range(int min, int max)
{
	int i, size, j;
	int *array;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;/* to check the amount of byte to allocate */
	/* allocate the memory and check if it fails */
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max && j <= size; i++, j++)
		array[j] = i;

	return (array);
}
