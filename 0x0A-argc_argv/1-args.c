#include <stdio.h>

/**
 * main - entry point.
 * Description: program that prints the number of arguments passed into it.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
