#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int.
 * @n: unsigned long int value.
 *
 * Return: None.
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int i, bit, zeros = 1;

	for (i = bits - 1; i >= 0; i--)
	{
		bit = ((n & (1UL << i)) > 0) ? 1 : 0;

		if (bit || !zeros)
		{
			putchar(bit ? '1' : '0');
			zeros = 0;
		}
	}

	if (zeros)
	{
		putchar('0');
	}

}
