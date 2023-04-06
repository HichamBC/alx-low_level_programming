#include "main.h"

/**
 * guess_sqrt - function that keeps guessing sqrt of n.
 *
 * @n: given number.
 * @guess: guessed sqrt number.
 *
 * Return: (guess) natural sqrt of n or -1 if sqrt is not natural.
 */

int guess_sqrt(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	{
		return (guess);
	}
	else if (square < n)
	{
		return (guess_sqrt(n, guess + 1));
	}
	else
	{
		return (-1);
	}
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: given number.
 *
 * Return: square root of n or -1 if n is negative.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (guess_sqrt(n, 0));
}
