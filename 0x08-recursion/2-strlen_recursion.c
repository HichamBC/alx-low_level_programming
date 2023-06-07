#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 *
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (0);

	count++;
	s++;
	return (count + _strlen_recursion(s));
}
