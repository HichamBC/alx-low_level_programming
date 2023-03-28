#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 *
 * @str: function parameter.
 *
 * Return: None.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
