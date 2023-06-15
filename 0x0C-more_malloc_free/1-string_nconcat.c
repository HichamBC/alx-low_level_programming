#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: first bytes of s2.
 *
 * Return: pointer to the concatenated string or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;

	if (n >= len2)
		n = len2;

	size = len1 + n + 1;
	result = malloc(size * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];
	result[len1 + i] = '\0';

	return (result);
}
