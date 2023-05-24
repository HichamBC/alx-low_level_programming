#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index value.
 *
 * Return: value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, rst;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	mask = 1UL << index;
	rst = n & mask;

	return ((rst > 0) ? 1 : 0);
}
