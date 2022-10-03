#include "main.h"

/**
 * alloc_grid - assigns 0s to a grid or 2-dimen array using malloc
 * @width: the second subscript of array
 * @height: the first subscript of array
 * Return: int or NULL if error from malloc
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	free(array[i]);
	free(array);
	return (array);
}
