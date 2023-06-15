#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of element in the array.
 * @size: size of each element in bytes.
 *
 * Return: pointer to the allocated memory or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
