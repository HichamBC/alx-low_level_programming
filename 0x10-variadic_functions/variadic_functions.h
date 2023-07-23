#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct format - store information about a specific conversion specifier.
 * @type: character representation of the conversion specifier.
 * @f: function pointer to a specific conversion function handler.
 */

typedef struct format
{
	char type;
	void (*f)(va_list);
} print_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
