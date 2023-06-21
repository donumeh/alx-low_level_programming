#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param
 * on each element of an array
 * @array: the array to execute on
 * @size: the size of the array
 * @action: the action to perform on the element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
