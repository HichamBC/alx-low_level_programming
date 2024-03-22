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
	dlistint_t *temp, *ptr = *h;
	size_t node = 0;

	while (ptr != NULL)
	{
		if (node == idx)
			break;
		ptr = ptr->next;
		node++;
	}
	if (ptr == NULL && node < idx)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr = *h;
	node = 0;
	while (ptr != NULL && node < idx - 1)
	{
		ptr = ptr->next;
		node++;
	}
	if (ptr == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = ptr;
	temp->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = temp;
	ptr->next = temp;

	return (temp);
}

