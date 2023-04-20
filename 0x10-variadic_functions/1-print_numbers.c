#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers
 * @separator: string separator between numbers.
 * @n: number of integers to be printed.
 *
 * Return: None.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
