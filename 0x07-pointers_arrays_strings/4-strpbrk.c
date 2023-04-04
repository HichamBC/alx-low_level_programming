#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: first string.
 * @accept: second string.
 *
 * Return: pointer or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
