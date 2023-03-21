#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: function that prints the last digit of a number.
 *
 * @n: function parameter
 *
 * Return: the last digit of the number.
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (n < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
