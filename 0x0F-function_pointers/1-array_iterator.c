#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: pointer to the array.
 * @size: array size.
 * @action: function to be used.
 *
 * Return: None.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
