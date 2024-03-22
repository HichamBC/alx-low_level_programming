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
	dlistint_t  *ptr, *new_node;
	ptr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);

		idx--;
	}

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = ptr;
	new_node->next = ptr->next;
	new_node->n = n;
	ptr->next->prev = new_node;
	ptr->next = new_node;

	return (new_node);
}

