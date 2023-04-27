#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the first node of a linked list.
 *
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *ph = NULL;

	if (h == NULL)
		return (0);

	ph = (list_t *)h;
	while (ph != NULL)
	{
		count++;
		ph = ph->next;
	}
	return (count);
}
