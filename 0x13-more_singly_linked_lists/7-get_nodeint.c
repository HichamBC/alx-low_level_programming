#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the nth node of a singly linked list.
 * @head: pointer to listint_t linked list.
 * @index: index of the node to be retrieved.
 *
 * Return: pointer to the nth node of the linked list or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head != NULL)
	{
		if (node == index)
			return (head);

		head = head->next;
		node++;
	}

	return (NULL);
}
