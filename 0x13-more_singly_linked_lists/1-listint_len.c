#include <stdio.h>
#include "lists.h"

/**
 * listint_len - calculates the number of elements in a singly linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: total number of nodes (elements) present in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node += 1;
		h = h->next;
	}

	return (node);
}
