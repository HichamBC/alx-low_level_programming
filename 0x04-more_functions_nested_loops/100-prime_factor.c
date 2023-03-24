#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description:  program prints largest prime factor of number 612852475143.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor = 2UL;
	unsigned long largest = 0UL;

	while (num > 1UL)
	{
		if (num % factor == 0UL)
		{
			num /= factor;

			if (factor >= largest)
			{
				largest = factor;
			}
		}
		else
		{
			factor++;
		}
	}
	printf("%lu\n", largest);
	return (0);
}
