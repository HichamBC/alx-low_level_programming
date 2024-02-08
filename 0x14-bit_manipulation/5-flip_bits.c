#include <stdio.h>
#include "main.h"

/**
 * flip_bits - checks the num of bits to flip to transfrom a num into another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Xor = n ^ m;
	unsigned int sum = 0;

	while (Xor != 0)
	{
		sum += Xor & 1;
		Xor >>= 1;
	}

	return (sum);
}
