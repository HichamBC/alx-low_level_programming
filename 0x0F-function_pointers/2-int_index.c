#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - iterates through an array of integers.
 *
 * @array: array of integers.
 * @size: size of the array.
 * @cmp: pointer to a function that checks for an integer condition.
 *
 * Return: -1 or otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
