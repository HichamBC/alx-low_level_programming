#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination pointer..
 * @src: source pointer.
 * @n: size.
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = dest;
	char *p2 = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return (dest);
}
