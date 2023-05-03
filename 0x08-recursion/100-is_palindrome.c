#include "main.h"

/**
 * str_len - returns the length of a string
 * @str: The string.
 *
 * Return: 0 or The length of the string.
 */

int str_len(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + str_len(str + 1));
}

/**
 * check_str - checks if two characters of a string are the same.
 * @str: The string
 * @i: The index of the first character.
 * @j: The index of the last character.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int check_str(char *str, int i, int j)
{
	if (i >= j)
		return (1);

	if (str[i] != str[j])
		return (0);

	return (check_str(str, i + 1, j - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	length = str_len(s);
	return (check_str(s, 0, length - 1));
}
