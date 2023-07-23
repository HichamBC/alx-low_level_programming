#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @arg: The character to print
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - Prints an integer
 * @arg: The integer to print
 */

void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_float - Prints a float
 * @arg: The float to print
 */

void print_float(va_list arg)
{
	float f = (float)va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - Prints a string
 * @arg: The string to print
 */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	printf("%s", (s != NULL ? s : "(nil)"));
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: None.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";
	print_t ft[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ft[j].type)
		{
			if (format[i] == ft[j].type)
			{
				printf("%s", separator);
				ft[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
