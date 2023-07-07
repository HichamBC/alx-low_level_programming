#include <stdio.h>

/**
 * main - entry point.
 * Description: program that prints all arguments it receives.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
