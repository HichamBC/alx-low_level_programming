#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array and initializes it to 0.
 * @nmemb: number of array elements.
 * @size: size of each element.
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr = NULL;
	void *array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array != NULL)
	{
		ptr = (unsigned char *)array;

		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
	}

	return (array);
}
