#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - iterates through elements of an array..
 *
 * @array: array of integers.
 * @size: the size of the array.
 * @action: pointer to a function that will print an integer.
 *
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (action == NULL))
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
