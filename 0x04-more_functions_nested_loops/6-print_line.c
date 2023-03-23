#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: function parameter
 *
 * Return: None.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;

		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
