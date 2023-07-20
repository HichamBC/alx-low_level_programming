#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, separated by a specific separator.
 * @separator: string to be printed between numbers.
 * @n: the number of integer arguments passed to the function.
 *
 * Return: None.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
