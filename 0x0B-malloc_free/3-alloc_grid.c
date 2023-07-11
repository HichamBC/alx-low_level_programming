#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D array of integer.
 * @width: number of array columns.
 * @height: number of array rows.
 *
 * Return: Pointer to a 2D array or NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
			}
			else
			{
				for (j = 0; j < i; j++)
					free(grid[j]);
				free(grid);
				return (NULL);
			}
		}
	}

	return (grid);
}
