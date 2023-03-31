#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: function pointer.
 * @n: function parameter.
 *
 * Return: None.
 */

void reverse_array(int *a, int n)
{
	int *p1 = a;
	int *p2 = a + n - 1;

	while (p1 < p2)
	{
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}
