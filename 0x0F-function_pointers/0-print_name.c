#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @f: function that will print the name.
 *
 * Return: None.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
