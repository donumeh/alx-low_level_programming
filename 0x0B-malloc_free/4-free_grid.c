#include "main.h"

/**
 * free_grid - frees a pointer from memory alloc
 * @grid: the double pointer or 2-dimensional array
 * @height: the hight of the grid
 * Return: int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
