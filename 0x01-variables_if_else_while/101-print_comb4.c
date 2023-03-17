#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: program prints different combinations of three digits.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					continue;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
