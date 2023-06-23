#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings?
 * @separator: the string to be printed between the strings.
 * @n:number of strings passed to the function.
 *
 * Return: None.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, const char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
