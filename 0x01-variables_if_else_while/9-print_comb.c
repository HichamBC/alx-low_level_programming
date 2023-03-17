#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: a program prints possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
