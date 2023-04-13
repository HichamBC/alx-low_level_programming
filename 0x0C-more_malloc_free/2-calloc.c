#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements of the array.
 * @size: size of each element.
 *
 * Return: a pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *p;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		p = (unsigned char *) ptr;
		for (i = 0; i < (nmemb * size); i++)
		{
			p[i] = 0;
		}
	}
	return (ptr);
}
