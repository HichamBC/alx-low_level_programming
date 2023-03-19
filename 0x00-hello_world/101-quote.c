#include <unistd.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Descirption: program that prints a string to the standard error.
 *
 * Return: Always 1 to the standard error.
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, strlen(str));

	return (1);
}
