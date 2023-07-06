#include "main.h"

/**
 * is_divisible - checks if n is divisible by any number between it and 1.
 * @n: given number.
 * @m: number to check if n is divisible by it.
 *
 * Return: 1 or 0.
 */

int is_divisible(int n, int m)
{
	if (m > 1)
	{
		if (n % m == 0)
			return (0);
		return (is_divisible(n, m - 1));
	}
	return (1);
}


/**
 * is_prime_number -checks if n is a prime number or not.
 * @n: given number.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n > 1)
	{
		if (is_divisible(n, n - 1))
			return (1);

		return (0);
	}
	return (0);
}
