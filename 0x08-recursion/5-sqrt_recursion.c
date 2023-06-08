#include "main.h"

/**
 * find_sqrt - finds if a number has a natural sqaure root.
 * @n: number.
 * @sqrt: square root of n if it exists.
 *
 * Return: sqrt or -1.
 */

int find_sqrt(int n, int sqrt)
{
	int square = sqrt * sqrt;

	if (square == n)
		return (sqrt);
	else if (square < n)
		return (find_sqrt(n, sqrt + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 *
 * Return: natural square root of n or -1.
 */

int _sqrt_recursion(int n)
{
	if (n >= 0)
		return (find_sqrt(n, 0));
	return (-1);
}
