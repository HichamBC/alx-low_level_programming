#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: C program that prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
