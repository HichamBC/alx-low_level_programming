#include "main.h"

/**
 * print_times_table - Entry Point.
 *
 * Description:  function that prints the n times table, starting with 0.
 *
 * @n: function parameter.
 *
 * Return: None
 */

void print_times_table(int n)
{
	int row;

	if (n > 15 || n < 0)
		return;
	for (row = 0; row <= n; row++)
	{
		int column;

		for (column = 0; column <= n; column++)
		{
			int product = row * column;

			if (product > 99)
			{
				_putchar((product / 100) + '0');
				product = product % 100;
				_putchar(product / 10 + '0');
			}
			else if (product > 9 && product <= 99)
			{
				_putchar(32);
				_putchar(product / 10 + '0');
			}
			else
			{
				if (column > 0)
				{
					_putchar(32);
					_putchar(32);
				}
			}
			_putchar(product % 10 + '0');
			if (column < n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
