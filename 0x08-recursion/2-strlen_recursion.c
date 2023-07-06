#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len++;
	s++;
	return (len + _strlen_recursion(s));
}
