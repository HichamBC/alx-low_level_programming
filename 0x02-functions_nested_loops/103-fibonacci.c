#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Description: finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int a = 1, b = 2, c;
	long int sum = 2;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
