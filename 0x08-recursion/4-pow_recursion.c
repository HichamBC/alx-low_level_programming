#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y.
 * @x: first number.
 * @y: second number.
 *
 * Return: the value of x raised to the power of y or -1.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, --y));
	return (-1);
}
