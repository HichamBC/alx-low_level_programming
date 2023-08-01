#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a singly linked list.
 * @h: pointer to the head of the listint_t linked list.
 *
 * Return:number of nodes present in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node += 1;
	}

	return (node);
}
