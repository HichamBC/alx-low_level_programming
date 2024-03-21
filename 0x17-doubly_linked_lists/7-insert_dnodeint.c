#include <stdlib.h>
#include "lists.h"

/**
 * insert_between_nodes - Inserts a new node with a given value between two
 *                        existing nodes in a doubly linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @ptr: A pointer to the node after which to insert the new node.
 * @n: The integer value to be stored in the new node.
 *
 * Return: pointer to the head of doubly linked list after insertion or NULL.
 */

dlistint_t *insert_between_nodes(dlistint_t **h, dlistint_t *ptr, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	temp = ptr->prev;
	temp->next = new_node;
	ptr->prev = new_node;
	new_node->next = ptr;
	new_node->prev = temp;
	new_node->n = n;

	return (*h);
}

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
	dlistint_t  *p1;
	size_t node = 0;

	p1 = *h;
	while (p1 != NULL)
	{
		if (node == idx && idx == 0)
		{
			return (add_dnodeint(h, n));
		}
		else if (p1->next == NULL && idx == node + 1)
		{
			return (add_dnodeint_end(h, n));
		}
		else if (node == idx && idx > 0)
		{
			return (insert_between_nodes(h, p1, n));
		}

		p1 = p1->next;
		node++;
	}
	if (idx == 0 && p1 == NULL)
		return (add_dnodeint(h, n));

	return (NULL);
}
