#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer to a string.
 * @c: char parameter.
 *
 * Return: pointer or NULL.
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
