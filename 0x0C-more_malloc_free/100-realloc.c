#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the previously allocated memory.
 * @old_size: the size of the previously allocated memory.
 * @new_size: the size of the new allocated memory.
 *
 * Return: pointer to the new allocated memory or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	char *source = NULL, *result = NULL;
	void *new_ptr = NULL;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		size = new_size > old_size ? old_size : new_size;
		source = (char *)ptr;
		result = (char *)new_ptr;

		for (i = 0; i < size; i++)
			result[i] = source[i];

		free(ptr);
	}

	return (new_ptr);
}
