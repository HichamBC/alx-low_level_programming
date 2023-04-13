#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: the smallest number in the range.
 * @max: the largest number in the range.
 *
 * Return: a pointer or NULL.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min + 1);
	ptr = malloc(size * sizeof(int));

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = min + i;
		}
	}
	return (ptr);
}