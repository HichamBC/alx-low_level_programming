#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the concatenated string or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, size, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;

	size = len1 + len2 + 1;

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		str[len1 + i] = s2[i];
	}
	str[len1 + i] = '\0';

	return (str);
}
