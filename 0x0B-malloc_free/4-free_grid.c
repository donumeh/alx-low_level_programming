#include "main.h"

/**
 * free_grid - frees an entire grid of 2D array
 * @grid: the grid to free
 * @height: the no of rows in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || *grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
