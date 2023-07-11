#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid.
 * @grid: 2D array.
 * @height: number of array rows.
 *
 * Return: None.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
