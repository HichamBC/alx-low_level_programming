#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with specific char.
 *
 * @size: the size of the array.
 * @c: character.
 *
 *Return: a pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}
