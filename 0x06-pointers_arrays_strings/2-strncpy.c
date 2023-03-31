#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: function first pointer.
 * @src: function second pointer.
 * @n: function parameter.
 *
 * Return: pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}
