#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node with a given value at a
 *                             specified index in a doubly linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which to insert the new node. Indices start at 0.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL if insertion fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *temp, *p1, *p2;
	size_t node = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	p1 = *h;
	while (p1 != NULL)
	{
		if (p1->next == NULL && idx == node + 1)
		{
			return (add_dnodeint_end(h, n));
		}
		else if (node == idx && idx > 0)
		{
			temp = malloc(sizeof(dlistint_t));
			if (temp == NULL)
				return (NULL);

			p2 = p1->prev;
			p2->next = temp;
			p1->prev = temp;
			temp->next = p1;
			temp->prev = p2;
			temp->n = n;

			return (temp);
		}

		p1 = p1->next;
		node++;
	}

	return (NULL);
}
