#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a single character.
 * @arg: character to be printed.
 *
 * Return: None
 */

void print_char(va_list arg)
{
	int c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - prints an integer.
 * @arg: integer to be printed.
 *
 * Return: None.
 */

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - prints a float number.
 * @arg: float number to be printed.
 *
 * Return: None.
 */

void print_float(va_list arg)
{
	double d = va_arg(arg, double);

	printf("%f", d);
}

/**
 * print_string - prints a string.
 * @arg: string.
 *
 * Return: None
 */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: None.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;

	fmt_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == formats[j].type)
			{
				formats[j].print(args);
				if (format[i + 1])
				{
					printf(", ");
				}
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
