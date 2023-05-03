#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at a specific index of a list.
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		ptr = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	ptr->next = current->next;
	free(current);

	return (1);
}