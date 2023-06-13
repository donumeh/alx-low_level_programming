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

	array_twod = malloc(sizeof(int) * height);
	if (array_twod == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		j = 0;
		array_twod[i] = malloc(sizeof(int) * width);
		if (array_twod[i] == NULL)
			return (NULL);
		while (j < width)
		{
			array_twod[i][j] = 0;
			j++;
		}
		i++;
	}

	return (array_twod);
}
