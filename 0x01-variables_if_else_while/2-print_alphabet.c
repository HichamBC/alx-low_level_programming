#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: C  program that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
