#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: first string.
 * @accept: second string.
 *
 * Return: number of bytes in the initial segment of s from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p1 = s;
	char *p2;
	unsigned int i = 0;

	while (*p1 != '\0')
	{
		p2 = accept;

		while (*p2 != '\0')
		{
			if (*p2 == *p1)
			{
				i++;
				break;
			}
			p2++;
		}
		if (*p2 == '\0')
			return (i);
		p1++;
	}
	return (i);
}
