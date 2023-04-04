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

	for (s; *s != '\0'; s++)
	{
		p = accept;

		for (p; *p != '\0'; p++)
		{
			if (*p == *s)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
