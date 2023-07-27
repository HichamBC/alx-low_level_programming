#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets number of elements in a linked list_t list.
 * @h: singly linked list.
 *
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
