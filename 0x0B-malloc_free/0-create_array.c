#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of a specified char and size.
 * @size: size of the array.
 * @c: specific character.
 *
 * Return: Returns a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		array[i] = c;
	}

	return (array);
}
