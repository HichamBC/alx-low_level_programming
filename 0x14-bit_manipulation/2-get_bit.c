#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index position.
 * @n: unsigned long int value from which the bit value is to be extracted.
 * @index: index of the bit to be retrieved from the given n.
 *
 * Return: value of the bit at the specified index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits = sizeof(unsigned long int) * 8;
	int bit_value;

	if (index >= bits)
	{
		return (-1);
	}

	bit_value = ((n & (1UL << index))) > 0 ? 1 : 0;

	return (bit_value);
}
