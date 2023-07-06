#include "main.h"

/**
 * str_len - calculates the length of a string.
 * @str: the string.
 *
 * Return: string length.
 */

int str_len(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + str_len(str + 1));
}

/**
 * scan_str - check if two specefic characters of a string are similar.
 * @str: string.
 * @i: index of the first specefic character.
 * @j: index of the second specefic character.
 *
 * Return: 1 or 0.
 */

int scan_str(char *str, int i, int j)
{
	if (i >= j)
		return (1);
	if (str[i] != str[j])
		return (0);

	return (scan_str(str, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string.
 *
 * Return: 1 if the string is a palindrome or 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	return (scan_str(s, 0, len - 1));
}
