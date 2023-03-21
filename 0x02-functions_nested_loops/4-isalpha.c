#include "main.h"

/**
 *_isalpha - Entry Point
 *
 * Descriptin: function that checks for alphabetic character.
 *
 * @c: parameter to be checked.
 *
 * Return: 1 for alphabetic character and 0 for otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
