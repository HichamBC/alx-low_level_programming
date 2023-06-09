#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: program prints the sum of the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;
	int sum;

	i = 1;
	sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
