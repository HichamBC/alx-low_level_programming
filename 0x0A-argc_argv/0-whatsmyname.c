#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: program that prints its name.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *name = argv[0];

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
	return (0);
}
