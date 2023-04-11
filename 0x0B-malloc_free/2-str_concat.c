#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a pointer.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, size;
	unsigned int i;
	unsigned int j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	size = (len1 + len2 + 1) * sizeof(char);
	ptr = malloc(size);

	if (ptr != NULL)
	{
		for (i = 0; i < len1; i++)
			ptr[i] = s1[i];
		for (j = i; j < size - 1; j++)
			ptr[j] = s2[j - i];
		ptr[j] = '\0';
	}
	return (ptr);
}
