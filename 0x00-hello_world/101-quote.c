#include <unistd.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Descirption: C program that prints a strint to the standard erroe.
 *
 * Return: Always 1 to the standard error.
 */

int main()
{
    write(STDERR_FILENO,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));

    return 1;
}
