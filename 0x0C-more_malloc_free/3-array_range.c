#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: the pointer to the newly created array or NULL.
 */

int *array_range(int min, int max)
{
	int i, size, *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
