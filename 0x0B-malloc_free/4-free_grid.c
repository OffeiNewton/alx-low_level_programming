#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: The 2D array of integers to free.
 * @height: The height of the 2D array to free.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		free(grid[i]);
	}

	free(grid);
}
