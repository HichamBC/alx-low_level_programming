#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s: function parameter
 *
 * Return: None.
 */

void print_rev(char *s)
{
	int len;
	int index;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
