#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: function that prints the alphabet.
 *
 * Return: None
 */

void print_alphabet(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
