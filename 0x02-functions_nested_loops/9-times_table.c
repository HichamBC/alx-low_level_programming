#include "main.h"

/**
 * times_table - Entry Point
 *
 * Description: function that prints the 9 times table, starting with 0.
 *
 * Return: None.
 */


void times_table(void)
{
	int row = 0;

	int column = 0;

	while (row < 10)
	{
		while (column < 10)
		{
			int product = row * column;

			if (product < 10)
			{
				if (column > 0)
					_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (column <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}

		_putchar('\n');

		column = 0;

		row++;
	}
}
