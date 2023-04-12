#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: matrix columns.
 * @height: matrix rows.
 *
 * Return: a pointer.
 */

int **alloc_grid(int width, int height)
{
	unsigned int **matrix;
	unsigned int rows;
	unsigned int columns;
	unsigned int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	rows = height * sizeof(int *);
	columns = width * sizeof(int);
	matrix = malloc(rows);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(columns);
		if (matrix[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
