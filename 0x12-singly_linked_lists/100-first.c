#include <stdio.h>

/**
 * first - execute before main function executes.
 *
 * Return: None.
 */

void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
