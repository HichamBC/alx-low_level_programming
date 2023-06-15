#include <stdlib.h>
#include "main.h"

/**
 */

char *_strdup(char *str)
{
	unsigned int i, size = 1;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		size += 1;

	copy = malloc(size * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';

	return (copy);
}
