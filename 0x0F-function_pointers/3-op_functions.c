#include "3-calc.h"

/**
 * op_add - adds a to b.
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts b from a.
 * @a: First integer
 * @b: Second integer
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b.
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides a by b.
 * @a: First integer
 * @b: Second integer
 * Return: the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the division of a by b.
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
