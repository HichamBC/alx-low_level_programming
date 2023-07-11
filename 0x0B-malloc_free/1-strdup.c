#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a duplicate copy of a given string.
 * @str: given string.
 *
 * Return: pointer to the duplicated string or NULL if it fails.
 */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *duplicate = NULL;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len += 1;

	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate != NULL)
	{
		for (i = 0; i < len; i++)
			duplicate[i] = str[i];

		duplicate[i] = '\0';
	}

	return (duplicate);
}
