#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of 2nd string to be concatenated to the 1st string.
 *
 * Return: Pointer to the concatenated result or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		l1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		l2 += 1;

	if (n >= l2)
		n = l2;

	result = malloc((l1 + n + 1) * sizeof(char));

	if (result != NULL)
	{
		for (i = 0; i < l1; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[l1 + i] = s2[i];

		result[l1 + i] = '\0';
	}

	return (result);
}
