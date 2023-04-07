#include "main.h"

/**
 * is_divisible - checks if n is divisible by any number between it and 1.
 *
 * @n: given number.
 * @factor: number to check if n is divisible by it.
 *
 * Return: 1 if no number is divisible, otherwise 0..
 */

int is_divisible(int n, int factor)
{
	if (factor > 1)
	{
		if (n % factor == 0)
			return (0);
		else
			return (is_divisible(n, factor - 1));
	}
	return (1);
}

/**
 * is_prime_number - checks if n is a prime number or not.
 *
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
		else
			return (0);
	}
	return (0);
}
