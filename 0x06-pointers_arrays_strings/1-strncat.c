#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 *
 * @dest: function first pointer.
 * @src: function second pointer.
 * @n: function parameter.
 *
 * Return: pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (dest_start);
}
