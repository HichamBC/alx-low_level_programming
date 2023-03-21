#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: function that checks for lowercase character.
 *
 * @c: parametre to be checked.
 *
 * Return: 1 for lowercase char and 0 for otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
