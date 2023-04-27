#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node of a linked list.
 *
 * Return: number of element in a linked list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *ph = NULL;

	if (h == NULL)
		exit();

	ph = (list_t *)h;

	while (ph != NULL)
	{
		if ((ph->str) == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ph->len, ph->str);

		count++;
		ph = ph->next;
	}
	return (count);
}
