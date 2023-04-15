#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c = 0;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}
	printf("\n");
	return (0);
}
