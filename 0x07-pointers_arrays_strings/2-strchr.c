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
	char *p = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return p;
}
