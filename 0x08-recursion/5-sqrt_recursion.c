#include "main.h"

/**
 * find_sqrt - find the square root of a given number.
 * @n: given number.
 * @m: sqaure root number.
 *
 * Return: natural square root of n or -1.
 */

int find_sqrt(int n, int m)
{
	int sqr = m * m;

	if (sqr == n)
		return (m);
	else if (sqr < n)
		return (find_sqrt(n, m + 1));

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
