#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}


