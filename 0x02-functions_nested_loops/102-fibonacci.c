#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;
	long int a = 1, b = 2, c;

	printf("%ld, %ld", a, b);

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", c);
	}
	printf("\n");
	return (0);
}
