#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * Description: program that multiplies two numbers.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
