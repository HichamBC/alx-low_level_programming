#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a listint_t linked list.
 * @head: double pointer to the listint_t linked list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;
	listint_t *prev = NULL;
	unsigned int node = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current != NULL && node < index)
	{
		prev = current;
		current = current->next;
		node++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
