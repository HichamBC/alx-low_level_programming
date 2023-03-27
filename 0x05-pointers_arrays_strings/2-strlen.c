#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: function parameter.
 *
 * Return: an integer representing the length of a string.
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;

	return (j);
}
