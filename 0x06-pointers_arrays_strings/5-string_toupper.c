#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase.
 *
 * @str: function pointer.
 *
 * Return: pointer to the resulting string.
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= ('a' - 'A');
		}
		p++;
	}
	return (str);
}

