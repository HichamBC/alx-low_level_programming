#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 *
 * @size: function parameter.
 *
 * Return: None.
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row;
		int column;

		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(32);
			}
			for (column = (size - row + 1); column <= size; column++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
