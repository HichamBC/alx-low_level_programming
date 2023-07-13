#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: first number.
 * @max: second number.
 *
 * Return: pointer to the allocated memory or NULL.
 */

int *array_range(int min, int max)
{
	int i, size;
	int *array = NULL;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = min;
			min += 1;
		}
	}

	return (array);
}
