#include "main.h"

/**
 * print_square - function that prints a square.
 *
 * @size: function parameter.
 *
 * Return: None.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row;
		int column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
