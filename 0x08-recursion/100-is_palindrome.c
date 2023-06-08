#include "main.h"

/**
 * str_len - calculate the length of a string.
 * @s: string.
 *
 * Return: the length of a string.
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_len(s + 1));
}

/**
 * str_scan - checks if two letters in a string are similar.
 * @s: string
 * @i: index of first letter.
 * @j: index of second letter.
 *
 * Return: 1 or 0.
 */

int str_scan(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (str_scan(s, i + 1, j - 1));
}

/**
 * is_palindrome - verifies if a string is a palindrome or not.
 * @s: string.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	return (str_scan(s, 0, len - 1));
}
