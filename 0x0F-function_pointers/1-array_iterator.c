#include "function_pointers.h"

/**
 * array_iterator - interates through an array
 * @array: pointer to an array of int
 * @size: the size of the int
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size && action && array)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
