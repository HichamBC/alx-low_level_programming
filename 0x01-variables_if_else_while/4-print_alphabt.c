#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: C program that prints all the letters except q and e.
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		if (i == 101)
		{
			i++;
			continue;
		}
		else if (i == 113)
		{
			i++;
			continue;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');

	return (0);
}

