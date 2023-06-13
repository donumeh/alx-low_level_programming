#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: the width of the 2D
 * @height: the height of the 2D
 *
 * Return: returns a pointer to 2D
 */

int **alloc_grid(int width, int height)
{
	int **array_twod;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_twod = malloc(sizeof(int *) * height);
	if (array_twod == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_twod[i] = malloc(sizeof(int) * width);
		if (array_twod[i] == NULL)
		{
			while (i >= 0)
				free(array_twod[i--]);
			free(array_twod);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			array_twod[i][j] = 0;
			j++;
		}
	}

	return (array_twod);
}
