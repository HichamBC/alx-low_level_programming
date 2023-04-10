#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: prints the minimum coins to make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	while (amount > 0)
	{
		if (amount >= 25)
		{
			amount -= 25;
			coins += 1;
		}
		else if (amount >= 10)
		{
			amount -= 10;
			coins += 1;
		}
		else if (amount >= 5)
		{
			amount -= 5;
			coins += 1;
		}
		else if (amount >= 2)
		{
			amount -= 2;
			coins += 1;
		}
		else if (amount == 1)
		{
			amount -= 1;
			coins += 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
