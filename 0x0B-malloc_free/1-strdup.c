#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str.
 *
 * @str: string to be duplicated.
 *
 * Return: a pointer.
 */

char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	size *= sizeof(char);
	ptr = malloc(size);

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
