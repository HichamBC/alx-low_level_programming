#incluse "main.h"

/**
 * is_divisable - sees if n is divisable by any number between m and 1.
 * @n: first number.
 * @m: second number.
 *
 * Return: 1 or 0.
 */

int is_divisable(int n, int m)
{
	if (m > 1)
	{
		if (n % m == 0)
			return (0);
		else
			return (is_divisable(n, m - 1));
	}
	return (1);
}

/**
 * is_prime_number - verifies if n is a prime number or not.
 * @n: number.
 *
 * Return:1 if the input integer is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n > 1)
	{
		if (is_divisable(n, n - 1))
			return (1);
		else
			return (0);
	}
	return (0);
}
