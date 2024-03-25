#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int sign = 1, result = 0;
	char *temp = s, *ptr = NULL;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			ptr = s;
			break;
		}
		s++;
	}

	if (ptr != NULL)
	{
		while (temp != ptr)
		{
			if (*temp == '-')
				sign *= -1;
			temp++;
		}

		while (*ptr >= '0' && *ptr <= '9')
		{
			if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && *ptr - '0' > INT_MAX % 10))
			{
				return ((sign == -1) ? INT_MIN : INT_MAX);
			}

			result = result * 10 + (*ptr - '0');
			ptr++;
		}

		return ((result * sign));
	}

	return (0);
}
