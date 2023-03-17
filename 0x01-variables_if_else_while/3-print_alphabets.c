#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: C program that prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int n;

	i = 97;
	n = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
