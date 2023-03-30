#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: first function pointer.
 * @src: second function pointer.
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *dest_beg = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_beg);
}
