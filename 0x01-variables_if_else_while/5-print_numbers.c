#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: C program that prints all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	m = 48;

	while (m <= 57)
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
