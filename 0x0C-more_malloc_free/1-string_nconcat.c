#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to concatenate from s2..
 *
 * Return: a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	size = len1 + n + 1;
	ptr = malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = i; j < size - 1; j++)
		{
			ptr[j] = s2[j - i];
		}
		ptr[j] = '\0';
	}

	return (ptr);
}
