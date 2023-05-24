#include <stdio.h>
#include "main.h"

/**
 * flip_bits - bits you would need to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip != 0)
	{
		if ((flip & 1) == 1)
		{
			count++;
		}
		flip >>= 1;
	}

	return (count);
}
