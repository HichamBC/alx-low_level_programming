#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer
 * @b: char parameter.
 * @n: int parameter.
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (p);
}
