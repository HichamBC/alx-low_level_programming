#ifndef NULL
#define NULL ((void*)0)
#endif
#include "main.h"


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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return NULL;
}
