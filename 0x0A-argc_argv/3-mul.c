#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * Description: program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);
	return (0);
}
