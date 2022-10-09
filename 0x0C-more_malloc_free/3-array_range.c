#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 * Return: int array
 */
int *array_range(int min, int max)
{
	int i, count = 0;
	int *array;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		count++;

	array = malloc(sizeof(int) * count);
	if (!array)
		return (NULL);

	for (i = 0; i < count; i++)
		*(array + i) = min++;

	return (array);

}
