#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: function pointer.
 *
 * Return: pointer to the resulting string.
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (cap_next && (*p >= 'a' && *p <= 'z'))
		{
			*p -= ('a' - 'A');
		}

		if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' ||
		*p == ';' || *p == '.' || *p == '!' ||
		*p == '?' || *p == '"' || *p == '(' ||
		*p == ')' || *p == '{' || *p == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		p++;
	}

	return (str);
}
