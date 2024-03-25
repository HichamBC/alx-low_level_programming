#include <stdio.h>
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
	int unit = 1, sign = 0, digit = 0, result = 0;
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
				sign += 1;
			temp++;
		}
		ptr++;
		while (*ptr != '\0' && (*ptr >= '0' && *ptr <= '9'))
		{
			unit *= 10;
			ptr++;
		}
		for (; unit != 0; unit /= 10)
		{
			digit = (*temp - '0') * unit;
			result += digit;
			temp++;
		}
		if (sign % 2)
			result *= -1;

		return (result);
	}

	return (0);
}
