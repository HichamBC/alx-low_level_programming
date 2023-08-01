#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a listint_t linked list.
 * @head: double pointer to the head of the listint_t linked list.
 * @idx: index at which the new node should be inserted.
 * @n: integer value that the new node should hold.
 *
 * Return: address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *new_node = NULL;
	listint_t *current = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current != NULL && node < idx - 1)
	{
		current = current->next;
		node++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
