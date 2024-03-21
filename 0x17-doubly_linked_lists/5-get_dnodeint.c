#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a specified index in a
 *                         doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if the index
 *         is out of range or if the list is empty.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	size_t count = 0;

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);

		count++;
		ptr = ptr->next;
	}

	return (NULL);
}
