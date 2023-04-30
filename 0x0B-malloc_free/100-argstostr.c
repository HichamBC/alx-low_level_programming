#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Null or a pointer to a string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	str = malloc(sizeof(len) + sizeof('\n') * (ac - 2));

	if (str == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(str + pos) = av[i][j];
			pos++;
		}
		*(str + pos) = '\n';
		pos++;
	}
	*(str + pos) = '\0';

	return (str);
}
