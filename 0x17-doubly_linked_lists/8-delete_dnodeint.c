#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the given index of a
 *                             doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted. Indices start at 0.
 *
 * Return: 1 if deletion succeeded, -1 if deletion failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	size_t node = 0;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (ptr != NULL && node < index)
	{
		ptr = ptr->next;
		node++;
	}

	if (ptr == NULL)
		return (-1);

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}
