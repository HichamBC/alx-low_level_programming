#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * Description: program that adds positive numbers.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
			return (1);

		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
