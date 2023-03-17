#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints possible different combinations of two digits.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
