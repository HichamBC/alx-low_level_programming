#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: a program that prints the number of arguments passed into it.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
