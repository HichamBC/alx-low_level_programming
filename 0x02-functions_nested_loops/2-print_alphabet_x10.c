#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: function that prints 10 times the alphabet.
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 1;

	while (i <= 10)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');

		i++;
	}
}
