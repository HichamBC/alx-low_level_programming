#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);


/**
 * struct fmt - Struct to store type and corresponding print function.
 * @type: argument type.
 * @print: corresponding print function.
 */


typedef struct fmt
{
	char type;
	void (*print)(va_list);
} fmt_t;


#endif
