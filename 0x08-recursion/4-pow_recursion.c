#include "main.h"

/**
 * _pow_recursion - function that returns x raised to the power of y.
 *
 * @x: function first parameter.
 * @y: function second parameter.
 *
 * Return: x to the power of y, 1 or -1.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, --y));
	}
	return (-1);
}
